cajas = int(input())
inicio = 100
valores =[]
sum1=0
sum2=0
for i in range(cajas):
    valores.append(int(input()))

maximum = max(valores)
local = valores.index(maximum)
hola = sum(valores)
hola -= valores[local]

if maximum>hola:
    for j in range(local):
        sum2+=valores[j]
    for f in range(local+1,cajas-1,2):
        if (valores[f]<valores[f+1]):
            sum2+=valores[f]+valores[f+1] 
        else:
            if valores[f]>0:
                sum2+=valores[f]
            break
        
            
            
for i in range(0,cajas-1,2):
    if (valores[i]<valores[i+1]):
        sum1+=valores[i]+valores[i+1] 
    else:
        if valores[i]>=0:
            sum1+=valores[i]
        break
    
inicio+=sum1
sum2+=100
if inicio>sum2:
    print(inicio) 
else:
    print(sum2)       