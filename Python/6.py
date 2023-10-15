# wap to enter a string and check whether it is palindrome or not.

def is_palindrome(input_string):
    # Remove spaces and convert to lowercase for case-insensitive comparison
    input_string = input_string.replace(" ", "").lower()
    
    # Check if the string is the same when reversed
    return input_string == input_string[::-1]

# Input from the user
user_input = input("Enter a string: ")

if is_palindrome(user_input):
    print(f"'{user_input}' is a palindrome.")
else:
    print(f"'{user_input}' is not a palindrome.")
