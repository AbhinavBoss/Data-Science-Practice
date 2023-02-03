import mysql.connector as sql
mydb=sql.connect(
host='localhost',
user='root',
password='abhinav',
database='abhinav') 
cursor=mydb.cursor()
cursor.execute('''select * from nimul''')
data=cursor.fetchall()
for i in data:
    print(i) 