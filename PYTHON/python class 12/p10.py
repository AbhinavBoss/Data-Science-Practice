#     *
#     * *       
#     *   *     
#     *     *   
#     * * * * * 
n=int(input("enter no of terms:"))
for i in range(n):
    for j in range(n):
        if j==0 or i==j or i==n-1:
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print()
