# Input month number
month = int(input("Enter month number (1-12): "))

# List of days in each month
days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

# Check month number and print days
if 1 <= month <= 12:
    print(f"Number of days: {days_in_month[month - 1]}")
else:
    print("Invalid month number! Please enter 1-12.")
