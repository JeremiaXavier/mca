#Write a program that count the number of strings where string length is 2 or more and the first and last characters are same.
sentence = list(input("Enter the strings").split(" "))
def numberstr(sentence):
    for x in sentence:
        if