# WAP to create a text file and count the number of uppercase character.

# Create and write to a text file
with open('example.txt', 'w') as file:
    file.write("Hello World! This is a Sample Text File.")

# Count uppercase characters in the file
uppercase_count = 0

with open('example.txt', 'r') as file:
    for line in file:
        for char in line:
            if char.isupper():
                uppercase_count += 1

# Print the result
print("Number of uppercase characters:", uppercase_count)
