# wap to check whether a number is Armstrong or not.

def is_armstrong_number(number):
    # Convert the number to a string to find the number of digits
    num_str = str(number)
    
    # Calculate the number of digits
    num_digits = len(num_str)
    
    # Calculate the sum of the digits, each raised to the power of the number of digits
    armstrong_sum = sum(int(digit) ** num_digits for digit in num_str)
    
    # Check if the sum is equal to the original number
    return armstrong_sum == number

# Input from the user
num = int(input("Enter a number: "))

# Check if it's an Armstrong number and display the result
if is_armstrong_number(num):
    print(f"{num} is an Armstrong number.")
else:
    print(f"{num} is not an Armstrong number.")
