# wap that displays options for inserting or deleting elements in a list. if the user chooses a deletion operation, display a sub-menu and ask if element is to be deleted with value or by using its position.

def insert_element(lst):
    element = input("Enter the element to insert: ")
    position = int(input("Enter the position to insert the element: "))
    lst.insert(position, element)

def delete_by_value(lst):
    element_to_delete = input("Enter the element to delete: ")
    if element_to_delete in lst:
        lst.remove(element_to_delete)
        print(f"'{element_to_delete}' has been deleted from the list.")
    else:
        print(f"'{element_to_delete}' is not in the list.")

def delete_by_position(lst):
    position = int(input("Enter the position of the element to delete: "))
    if 0 <= position < len(lst):
        deleted_element = lst.pop(position)
        print(f"Element at position {position} ('{deleted_element}') has been deleted from the list.")
    else:
        print("Invalid position. No element deleted.")

def display_menu():
    print("List Operations Menu:")
    print("1. Insert Element")
    print("2. Delete Element")
    print("3. Quit")

def display_delete_submenu():
    print("Delete Options:")
    print("1. By Value")
    print("2. By Position")

my_list = []

while True:
    display_menu()
    choice = input("Enter your choice (1/2/3): ")

    if choice == '1':
        insert_element(my_list)
        print("Updated List:", my_list)
    elif choice == '2':
        display_delete_submenu()
        delete_choice = input("Choose delete option (1/2): ")
        if delete_choice == '1':
            delete_by_value(my_list)
            print("Updated List:", my_list)
        elif delete_choice == '2':
            delete_by_position(my_list)
            print("Updated List:", my_list)
        else:
            print("Invalid delete choice. Returning to the main menu.")
    elif choice == '3':
        print("Exiting the program.")
        break
    else:
        print("Invalid choice. Please choose a valid option.")
