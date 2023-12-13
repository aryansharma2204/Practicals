# Write a program that scans an email address and forms a tuple of user name and domain.

# Get the email address from the user
email = input("Enter your email address: ")

# Check if the email address contains '@' symbol
if '@' in email:
    # Split the email address into username and domain using '@' as the delimiter
    username, domain = email.split('@')
    
    # Form a tuple with the extracted username and domain
    email_tuple = (username, domain)
    
    # Print the formed tuple
    print("Tuple:", email_tuple)
else:
    print("Invalid email address. Please include '@' symbol.")
