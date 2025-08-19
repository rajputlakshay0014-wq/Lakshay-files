# Input fuel choice
choice = int(input("Enter fuel type (1: Petrol, 2: Diesel, 3: Electric): "))

# Check the fuel type
if choice == 1:
    print("You chose Petrol.")
elif choice == 2:
    print("You chose Diesel.")
elif choice == 3:
    print("You chose Electric.")
else:
    print("Invalid choice! Please enter 1, 2, or 3.")
