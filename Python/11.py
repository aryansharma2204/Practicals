'''
Create a dictionary whose keys are month names and whose values are the number of days
in the corresponding months.
 Ask the user to enter a month name and use the dictionary to tell them how many
days are in the month.
 Print out all keys in the alphabetically order
'''

# Create a dictionary of month names and days
month_days = {
    "January": 31,
    "February": 28,  # Assuming a non-leap year for simplicity
    "March": 31,
    "April": 30,
    "May": 31,
    "June": 30,
    "July": 31,
    "August": 31,
    "September": 30,
    "October": 31,
    "November": 30,
    "December": 31
}

# Ask the user to enter a month name
user_input = input("Enter a month name: ")

# Use the dictionary to tell the user how many days are in the entered month
if user_input in month_days:
    days_in_month = month_days[user_input]
    print(f"The month of {user_input} has {days_in_month} days.")
else:
    print("Invalid month name. Please enter a valid month.")

# Print all keys in alphabetical order
sorted_keys = sorted(month_days.keys())
print("All months in alphabetical order:")
for month in sorted_keys:
    print(month)
