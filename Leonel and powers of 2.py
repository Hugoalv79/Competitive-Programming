# T (1 < T < 104), the number of test cases.
# k (1 < k < 1018)
# Odd Number = Número Impar
# Even Number = Número par
# VARIABLES
kToTest = []
T = int(input())

# FUNCTIONS
def final_notation(k):
    if k ==1:
        return 2
    else:
        if k%2!=0:
            # 3 = (2*(2)^2)
            k-=1
            return f"(2*({final_notation(k)})"
# Notation of 5:
# (2) * 2 ^ (k-1)
# 5 = (2) * 2 ^ (5-1)
#   = (2) * 2 ^ (4)
#   = (2 * (2^2)^2) 
#   = (2*((2)^2)^2)
        elif k%2==0:
            if k>1:
                # 2 = (2)^2
                # 4 = ((2)^2)^2
                k = k/2
                return f"(2)^{final_notation(k)}"
                


# INPUT OF Ks
if 1 <= T and T <= 10**4: # T conditions
    for i in range(0,T):
        kin = int(input())
        kToTest.append(kin)

for k in kToTest:    # Checking each input given
    if 1 <= k and k <= 10**18:
        print(final_notation(k))   
