# wap to enter element into a list and print the sum of numbers having 7 at unit place.

# Function to calculate the sum of numbers having 7 at unit's place
def sum_numbers_with_7_at_unit_place(numbers):
    total = 0
    for number in numbers:
        if number % 10 == 7:
            total += number
    return total

# Input from the user
n = int(input("Enter the number of elements in the list: "))
elements = []

for i in range(n):
    element = int(input(f"Enter element {i + 1}: "))
    elements.append(element)

# Calculate the sum of numbers with 7 at unit's place
result = sum_numbers_with_7_at_unit_place(elements)

print(f"The sum of numbers with 7 at the unit's place is: {result}")
