'''
Make a list of first 10 letters of the alphabet, then use the slicing to do the following
operations:
 Print the first 3 letters of the list
 Print any 3 letters from the middle
Print the letter from any particular index to the end of the list
'''

# Create a list of the first 10 letters of the alphabet
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j']

# Print the first 3 letters of the list
print("First 3 letters:", alphabet[:3])

# Print any 3 letters from the middle
middle_start = len(alphabet) // 2 - 1  # Start from the middle (rounded down)
middle_end = middle_start + 3  # Print any 3 letters from the middle
print("Any 3 letters from the middle:", alphabet[middle_start:middle_end])

# Print the letters from any particular index to the end of the list
index_to_start = 4  # Change this index as needed
print(f"Letters from index {index_to_start} to the end:", alphabet[index_to_start:])
