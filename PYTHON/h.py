f=open("D:\\PYTHON PROGRAMMING LANGUAGE\\a.txt")
a=f.read()
x=a.split()
vowel_count=0
letter_count=0
character_count=0
print('letters started with vowel words are:')
for i in x:
    if i[0] in 'aeiouAEIOU':
        print(i)
        vowel_count+=1
    letter_count+=1
for j in a:
    character_count+=1
print(f"number of letters is {letter_count}")
print(f"number of characters is {character_count}")
print(f"number of letters started with vowels is {vowel_count}")