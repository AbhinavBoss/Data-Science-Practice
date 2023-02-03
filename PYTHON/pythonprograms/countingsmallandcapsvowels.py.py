str1=input("enter string:")
count=0
for letter in str1:
    if letter in ['a','e','i','o','u','A','E','I','O','U']:
        count+=1
print(count)
