# wap to enter two integers, two float numbers and perform all arithmetic operations on them.

# Input
int1 = int(input("Enter the first integer: "))
int2 = int(input("Enter the second integer: "))
float1 = float(input("Enter the first float number: "))
float2 = float(input("Enter the second float number: "))

# Arithmetic operations
addition = int1 + int2
subtraction = int1 - int2
multiplication = int1 * int2
division = int1 / int2
int_modulo = int1 % int2

float_addition = float1 + float2
float_subtraction = float1 - float2
float_multiplication = float1 * float2
float_division = float1 / float2

# Displaying the results
print(f"Integer Addition: {int1} + {int2} = {addition}")
print(f"Integer Subtraction: {int1} - {int2} = {subtraction}")
print(f"Integer Multiplication: {int1} * {int2} = {multiplication}")
print(f"Integer Division: {int1} / {int2} = {division}")
print(f"Integer Modulo: {int1} % {int2} = {int_modulo}")

print(f"Float Addition: {float1} + {float2} = {float_addition}")
print(f"Float Subtraction: {float1} - {float2} = {float_subtraction}")
print(f"Float Multiplication: {float1} * {float2} = {float_multiplication}")
print(f"Float Division: {float1} / {float2} = {float_division}")
