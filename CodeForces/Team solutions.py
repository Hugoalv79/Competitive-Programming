#                                       TEAM SOLUTIONS
# One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming 
# contests. Participants are usually offered several problems during programming contests. Long before the 
# start the friends decided that they will implement a problem if at least two of them are sure about the 
# solution. Otherwise, the friends won't write the problem's solution.

# This contest offers "n" problems to the participants. For each problem we know, which friend is sure about 
# the solution. Help the friends find the number of problems for which they will write a solution



numberOfProblems = int(input()) #Enter the number of problem they will solve
counter = 0
for i in range(0,numberOfProblems):
    certainty = str(input()) # Enter the certainty
    amiga1 = int(certainty[0])
    amiga2 = int(certainty[2])
    amiga3 = int(certainty[4])
    amigat = amiga1 + amiga2 + amiga3

    if amigat >= 2:
        counter = counter + 1
    else:
        counter = counter

print(counter)
