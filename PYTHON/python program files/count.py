str=input("enter string:")
str1=""
count=0
for letter in str:
    if letter in ['a','e','i','o','u','A','E','I','O','U']:
        count+=1
print(count)
