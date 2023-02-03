with open("C:/Users/Abhinav Varshney/Desktop/abhinav/index.html",'r') as my_file:
    read_file=my_file.readline()
    while read_file!="":
        print(read_file,end=" ")
        read_file=my_file.readline() 