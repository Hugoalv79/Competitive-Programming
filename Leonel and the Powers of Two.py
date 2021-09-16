
# T (1 < T < 104), the number of test cases.
# k (1 < k < 1018)
# VARIABLES
kToTest = []
T = int(input())

# FUNCTIONS
def odd_n(element):
    if element ==2:
        return 2
    else:
        if element :
            element/2
        elif None:
            pass 


# INPUT OF Ks
if 1<T and T<10**4: # T conditions
    for i in range(0,T):
        k = int(input())
        kToTest.append(k)

for element in kToTest:
    if 1 < element and element<10**18:
        if element==1:
            print(1)

    elif element % 2 == 0:
        odd_n(element)
      
    elif element %2 != 0:
      pass
# THEORY:
# If "K" is an odd number
#   (2 * 2k−1) 

# (2) * 2 ^ (k-1)
# 5 = (2) * 2 ^ (5-1)
#   = (2) * 2 ^ (4)
#   = (2 * (2^2)^2) 
#   = (2 * ((2)^2)^2)


# .....................................................................
# if k is an even number
#   (2**k/2)**2 

  

