def LSHIFT(arr,n):    
    print("Original array: ") 
    print(arr)   
    for i in range(0, n):        
        first = arr[0]    
        for j in range(0, len(arr)-1):     
            arr[j] = arr[j+1] 
        arr[len(arr)-1] = first       
    print("Array after left rotation: ")   
    print(arr)
N=int(input('enter the length of array: '))
n=int(input('enter value for rotation: '))
arr=[None]*N
for i in range(N):
    arr[i]=int(input(f'enter {i}th element: '))
LSHIFT(arr,n)  