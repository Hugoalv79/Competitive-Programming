# LIBRERIAS

# VARIABLES
cases = int(input())

# BLOQUE
for i in range(0,cases):
    if cases >= 1 and cases <= 100:
        numero = int(input())
        lista_correctos = []
        victory = False
        if (numero > 2 and numero <= 10**500):
            if numero % 2 == 0:
                lista_correctos.append(2)
                victory = True
            if numero % 3 == 0:
                lista_correctos.append(3)
                victory = True
            if numero % 4 == 0:
                lista_correctos.append(4)
                victory = True
            if numero % 5 == 0:
                lista_correctos.append(5)
                victory = True
            if numero % 6 == 0:
                lista_correctos.append(6)
                victory = True
            if victory == False:
                lista_correctos.append(-1)
            
        else:
            None
        print(lista_correctos,end="\n")

    else:
        i +=1
        None

