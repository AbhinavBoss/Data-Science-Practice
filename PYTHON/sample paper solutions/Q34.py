def LSHIFT(array,n):
    print('array before shifting')
    print(array)
    for _ in range(0,n):
        first=array[0]
        for j in range(0,len(array)-1):
            array[j]=array[j+1]
        array[len(array)-1]=first
    print('array after rotation')
    print(array)
n=int(input('enter value for rotation: '))
N=int(input('enter the length of array: '))
arr=[None]*N
for i in range(N):
    arr[i]=int(input(f'enter {i}th element: '))
LSHIFT(arr,n)