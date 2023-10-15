# wap to swap two strings.

# Input two strings
string1 = input("Enter the first string: ")
string2 = input("Enter the second string: ")

# Display the original strings
print(f"Original strings: String1 = {string1}, String2 = {string2}")

# Swap the strings using a temporary variable
temp = string1
string1 = string2
string2 = temp

# Display the swapped strings
print(f"Swapped strings: String1 = {string1}, String2 = {string2}")
