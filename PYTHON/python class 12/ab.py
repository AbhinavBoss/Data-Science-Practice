def arrange(list1):
     list2=[]
     list3=[]
     for i in list1:
          if i not in list2:
               list2.append(i)
          else:
               list3.append(i)
     print('array without repeating elements: ')
     print(list2)
     print('duplicate elements are: ')
     print(list3)
list1=[1,2,3,1,2,2,12,4,5,5]
arrange(list1)











# #1+(1+2)+(1+2+3)+(1+2+3+4).........n
# n=int(input("enter number of terms:"))
# s=0
# i=1
# while i<=n:
#      t=0
#      j=1
#      while j<=i:             
#           t+=j
#           j+=1
#      s+=t
#      i+=1
# print("sum:",s)

