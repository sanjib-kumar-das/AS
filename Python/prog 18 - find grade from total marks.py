x = int(input("Enter your total marks: "))

if x>=90:
     grade = "A"
     
elif x>=80:
     grade = "B"

elif x>=60:
     grade = "C"

elif x>=50:
     grade = "D"

else:
    grade = "F"

print("Your grade: ", grade)
