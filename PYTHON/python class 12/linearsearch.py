def search(list1,key):
      for i in range(len(list1)):
            if key==list1[i]:
                  print("element is found",'at index',i)
                  break
      else:
            print("element is not in list")
list1=list(eval(input("enter list:")))
print(list1)
key=int(input("enter key:"))
search(list1,key)