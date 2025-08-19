# Display the menu
print("Beverage Menu:")
print("1: Tea")
print("2: Coffee")
print("3: Juice")

# Input the choice
choice = int(input("Enter your choice (1-3): "))

# Dictionary for menu
menu = {1: "Tea", 2: "Coffee", 3: "Juice"}

# Print result
print("You selected", menu.get(choice, "an Invalid choice!"))
