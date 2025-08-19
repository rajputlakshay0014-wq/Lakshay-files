#Write a program to check if a given character is a vowel or consonant.
char = input("enter a character:")
if char.lower() in 'aeiou':
    print("vowel")
else:
    print("consonant")
