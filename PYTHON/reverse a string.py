# #reverse string using recursion
# def reverse(string,last_index):
#     if last_index>0:
#         print(string[last_index],end="")
#         reverse(string,last_index-1)
#     elif last_index==0:
#         print('string to likh do sahi se....')
# a=input("enter string:")
# reverse(a,len(a)-1)    

# #reverse a list without recursion
# def rev(string):
#     rev_string=""
#     for i in string:
#         rev_string = i + rev_string
#     print(rev_string)
# string=input('enter string: ')
# rev(string).

import pyttsx3
friend=pyttsx3.init()
voices=friend.getProperty('voices')
friend.setProperty('voice',voices[1].id)
friend.say('Hello Abhinav,I am Ananya and i love you')
friend.runAndWait() 