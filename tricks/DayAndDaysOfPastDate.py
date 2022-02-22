from datetime import date  

year = int(input("Wich year?: "))
month = int(input("Wich month? (1-12: "))
day = int(input("Wich day in number?: "))


PastDate = date(year, month, day)                             # Converting data into date
Now = date.today()

print(PastDate.strftime("%a"))                          # Name of the week
print("{} day(s) ago".format((Now - PastDate).days))        # Days ago

# Given a date, say the day of the week and how much days has gone to the present.
