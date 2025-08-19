# Input a character
char = input("Enter a character: ")

# Ensure only the first character is considered
char = char[0]

# Check the type of character
if char.isalpha():
    print(f"'{char}' is an alphabet.")
elif char.isdigit():
    print(f"'{char}' is a digit.")
else:
    print(f"'{char}' is a special character.")
