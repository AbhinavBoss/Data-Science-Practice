# count=0
# my_file=open('story.txt','r')
# file_object=my_file.read()
# words=file_object.split()
# for word in words:
#     if word in ['me','my','My','Me']:
#         count+=1
# print(count)


# To count vowels 
ccount=vcount=0
my_file=open('story.txt','r')
file_object=my_file.read()
word=file_object
for words in word:
    if words  in ['a','e','i','o','u','A','E','I','O','U']:
        ccount+=1
print(ccount) 