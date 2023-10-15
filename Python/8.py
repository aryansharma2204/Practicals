# wap that reads email id of a person in the form of string and insures that it belongs to domain @gmail.com.

def is_gmail_address(email):
    # Check if the email address ends with "@gmail.com"
    if email.endswith("@gmail.com"):
        return True
    else:
        return False

# Input from the user
email_address = input("Enter an email address: ")

if is_gmail_address(email_address):
    print(f"The email address '{email_address}' belongs to the domain @gmail.com.")
else:
    print(f"The email address '{email_address}' does not belong to the domain @gmail.com.")
