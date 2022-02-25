import sys

inputs = sys.stdin.read().splitlines() # Aumentar velocidad en input & output

caseNo = 1

ln = 0

while True:
    # N facturas, F amigos
    N, F = map(int, inputs[ln].split()) 
                                              
    ln += 1
    
    if N == 0 and F == 0: break
    
    # Soporte nativo
    sum = 0
                            
    # Sumar las N facturas                                     
    for _ in range(N):
        # Big Integer nativo
        sum += int(inputs[ln])
        ln += 1
    
    print("Bill #%d costs %d: each friend should pay %d\n" % (caseNo, sum, sum//F)) # División de enteros
    
    caseNo += 1