# Input two numbers
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

# Input the operation
operator = input("Enter an operator (+, -, *, /): ")

# Define a dictionary for operations
operations = {
    '+': num1 + num2,
    '-': num1 - num2,
    '*': num1 * num2,
    '/': "Error: Division by zero" if num2 == 0 else num1 / num2
}

# Get the result from the dictionary
result = operations.get(operator, "Invalid operator!")

print(f"Result: {result}")
