# write a menu driven program showing the usage of all string function.

def string_length(input_string):
    return len(input_string)

def string_upper(input_string):
    return input_string.upper()

def string_lower(input_string):
    return input_string.lower()

def string_swapcase(input_string):
    return input_string.swapcase()

def string_reverse(input_string):
    return input_string[::-1]

def main():
    while True:
        print("\nString Function Menu:")
        print("1. String Length")
        print("2. Uppercase")
        print("3. Lowercase")
        print("4. Swap Case")
        print("5. Reverse")
        print("6. Exit")

        choice = input("Enter your choice (1/2/3/4/5/6): ")

        if choice == '1':
            input_string = input("Enter a string: ")
            result = string_length(input_string)
            print(f"Length of the string: {result}")
        elif choice == '2':
            input_string = input("Enter a string: ")
            result = string_upper(input_string)
            print(f"Uppercase: {result}")
        elif choice == '3':
            input_string = input("Enter a string: ")
            result = string_lower(input_string)
            print(f"Lowercase: {result}")
        elif choice == '4':
            input_string = input("Enter a string: ")
            result = string_swapcase(input_string)
            print(f"Swap Case: {result}")
        elif choice == '5':
            input_string = input("Enter a string: ")
            result = string_reverse(input_string)
            print(f"Reversed String: {result}")
        elif choice == '6':
            print("Exiting the program.")
            break
        else:
            print("Invalid choice. Please choose a valid option.")

if __name__ == "__main__":
    main()
