a, b, c = eval(number("Enter three numbers: "))

if a>b:
    max = a
else:
    max = b

if c>max:
    max = c
    
print("Maximum number is: ", max)
