#include <bits/stdc++.h>

#define mod 1000000007

int main() {
    // DECLARAR VARIABLES A USAR
	int Test, TestAcual = 0;
	char ABinaryString[100005];
    // OBTENER EL NUMERO DE TESTS
	scanf("%d", &Test);

    // ITERAR POR CADA TEST
	while(Test--) {
        // OBTENER LA CADENA DE UNOS Y CEROS
		scanf("%s", ABinaryString);
        // DECLARAR MAS VARIABLES A  USAR
		int lenghtA = strlen(ABinaryString);
		int Mitad, Mitad_menor, temp;
        int SNew = 0;
		Mitad = lenghtA / 2;
        Mitad_menor = Mitad - 1;

        // ITERACION SOBRE LA CADENA
		for(int i = 0, EsImpar__o_O = lenghtA&1; // Iniciar variables a usar: i, EsImpar?
                i < lenghtA; // Condición para detener el loop
                i++, EsImpar__o_O = !EsImpar__o_O) { // Hacer al final de cada iteracion
			
            // Primera condición: Número Impar
            if(EsImpar__o_O) { 
				if(lenghtA - Mitad > Mitad_menor)
					temp = (ABinaryString[Mitad] - '0'), Mitad++;
				else
					temp = (ABinaryString[Mitad_menor] - '0'), Mitad_menor--;
			} 
            // Segunda condición: Número Par
            else {
                if(ABinaryString[Mitad_menor] > ABinaryString[Mitad])
					temp = (ABinaryString[Mitad_menor] - '0'), Mitad_menor--;
				else
					temp = (ABinaryString[Mitad] - '0'), Mitad++;
			}
			
            SNew = (SNew << 1) + temp;

            // Evitar procedimiento incesario
            if(SNew >= mod)
		        SNew %= mod;
            }
		printf("Case #%d: %d\n", ++TestAcual, SNew);
	}
	return 0;
}


// ==================================================================================================
/*
int BitCounter(int n){
    int ans = 0;
    // Remueve el último bit del número actual
    while (n > 0){
        n = n & (n-1);
        ans ++;
    }
    return ans;
}



//#define LSOne(S) ((S) & -(S))
*/