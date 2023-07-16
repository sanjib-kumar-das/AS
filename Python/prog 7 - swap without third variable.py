a = eval(input("Enter 1st value: "))
b = eval(input("Enter 2nd value: "))

print("Before swap a: ", a, "b: ", b)

b = b+a
a = b-a
b = b-a

print("Before swap a: ", a, "b: ", b)
