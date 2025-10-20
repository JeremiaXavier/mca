#Write a program that count the number of strings where string length is 2 or more and the first and last characters are same.
sentence = list(input("Enter the strings").split())
def numberstr(sentence):
    count =0
    for x in sentence:
        if len(x) > 2 and x[0] == x[-1]:
            count+=1
    return count

count = numberstr(sentence)
print("The number of strings",count)