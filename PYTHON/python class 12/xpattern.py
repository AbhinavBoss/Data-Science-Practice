n=input("enter odd length number or name:")  #like 123,56478,abhinav etc.
l=len(n)
for i in range(l):
      for j in range(l):
            if i==j or i+j==l-1:
                  print(n[i],end=" ")  # for a change,write n[j] also
            else:
                  print(" ",end=" ")
      print()