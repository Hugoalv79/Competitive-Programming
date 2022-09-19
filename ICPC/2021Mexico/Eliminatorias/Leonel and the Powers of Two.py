
# T (1 < T < 104), the number of test cases.
# k (1 < k < 1018)
# Odd Number = Número Impar
# Even Number = Número par
# VARIABLES
from typing import final


kToTest = []
T = int(input())

# FUNCTIONS
def final_notation(k):
    if k == 1:
        return '2'
    
    elif k%2==0:
        print(f"(2{final_notation(k/2)})^2")
        
            
    else:
        k -= 1
        return f"(2*{final_notation(k)})"
            # 3 = (2*(2)^2)
            # 5 = (2*((2)^2)^2)


# INPUT OF Ks
if 1<=T and T<=10**4: # T conditions
    for i in range(0,T):
        kin = int(input())
        kToTest.append(kin)

for k in kToTest:
    if 1<=k and k<=10**18:
        print(final_notation(k))   
# THEORY:
# If "K" is an odd number
#                 (2 * 2k−1) 
# 1 = 2
# 3 = (2*(2)^2)
# 5 = (2*((2)^2)^2)



# If "K" is an even number
#                  (2^k/2)^2 
# 2 = (2)^2
# 4 = ((2)^2)^2


# def imprimir(chef):
#     if chef == 1:
#         return 1
#     else:
#         return imprimir(chef-1), chef



# chef = int(input())

# print(imprimir(chef))