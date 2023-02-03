import mysql.connector as sql
mydb=sql.connect(host='localhost',user='root',password='abhinav',database='practice')
if mydb.is_connected():
    print('connection is established')
cursor=mydb.cursor()
choice=int(input('enter your choice \n 1 for all data \n 2 for your choice: '))
if choice==1:
    querry='select * from abhi'
    cursor.execute(querry)
    data=cursor.fetchall()
    for i in data:
        print(i)
elif choice==2:
    variable=input('enter column name: ')
    value=input('enter value for column: ')
    cursor.execute(f'select * from abhi where {variable}="{value}"')
    data=cursor.fetchall()
    for i in data:
        print(i) 
else:
    print('kya yaar entry toh sahi se kr dete')
mydb.close() 