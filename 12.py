# Input marks
marks = float(input("Enter your marks (0-100): "))

# Classify grade
if 90 <= marks <= 100:
    grade = "A"
elif 75 <= marks <= 89:
    grade = "B"
elif 50 <= marks <= 74:
    grade = "C"
elif 0 <= marks < 50:
    grade = "Fail"
else:
    grade = "Invalid marks"

print(f"Your grade is: {grade}")
