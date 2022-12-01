#include <iostream>
#include <iomanip> 

using std::cout;

double fastPow(double a, int n){
    if(n == 0) return 1;

    double temp = fastPow(a,n/2);
    double resultado = temp * temp;

    if(n&1){
        return a * resultado;
    }

    return resultado;
}

double SqrtNumber(double num){
    double lower_bound = 0; 
    double upper_bound = num;
    double temp = 0;                    /* ek edited this line */

    int nCount = 50;

    while(nCount != 0){
        temp = (lower_bound+upper_bound)/2;
        
        if(temp*temp==num) 
            return temp;
        
        else if(temp*temp > num)
            upper_bound = temp;
        
        else
            lower_bound = temp;
        
        nCount--;
    }
    
    return temp;
}


int main(){
    int T;
    scanf("%d", &T);
    // V = Lado * Ancho ¨Altura
    // v = 
    
    double x,y;
    double respuesta1,respuesta2, t1,t2;
    
    cout << std::setprecision(11);
    while(T--){
        scanf("%lf %lf", &x, &y);
        
        // Formula = t(xy - 2tx - 2ty + 4t^2)
        // txy - 2t^2x - 2t^2y + 4t^3
        
        // DERIVADA
        // xy - 4tx - 4ty + 12t^2
        
       // A       B          C
        // 3t^2 + t(-4x-4y) +xy 
        
        // -b +- raiz(b^2-4ac) 
        //  -------------------
        //     2a

        // -(-4x-4y) +- raiz((-4x-4y)^2 - 16(xy)(3))
        // ---------------------------------------
        //               24
        
        double key = fastPow(-4*x-4*y,2);
        // cout << "key: "<< key << "\n";
        t1 = ( (4*x+4*y) + SqrtNumber( key - 48*x*y ) ) / 24; 
        t2 = ( (4*x+4*y) - SqrtNumber( key - 48*x*y ) ) / 24;
        
        
        // double largo = x - 2 * respuesta;
        // double ancho = y - 2 * respuesta;
        // double high = respuesta;
        if(!((t1 < 0) || (t1 > x) || (t1 > y)))
            respuesta1 =  (x - 2 * t1) * (y - 2 *t1) * t1 ;
        
        else
            respuesta1 = 0;

        if(!((t2 < 0) || (t2 > x) || (t2 > y)))
            respuesta2 =  (x - 2 * t2) * (y - 2 *t2) * t2 ;
        
        else    
            respuesta2 = 0;
        
        cout << std::max(respuesta1,respuesta2) << "\n";

    }

    return 0;
}
