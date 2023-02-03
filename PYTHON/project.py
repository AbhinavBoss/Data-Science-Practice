import matplotlib.pyplot as plt
import pandas as pd
import mysql.connector as sql
mydb=sql.connect(host='localhost',user='root',password='abhinav',database='python')
cursor=mydb.cursor()
if mydb.is_connected():
    print('database sahi se connect ho gya.....')
print('**********************************************************')
print('welcome to hospital management system')
print('**********************************************************')
print('press(1)--about the project')
print('press(2)--create table doctors_details')
print('press(3)--register doctors_details')
print('press(4)--display doctors details')
print('press(5)--create table patients_details')
print('press(6)--register patients_details')
print('press(7)--all patients details')
print('press(8)--create table workers_details')
print('press(9)--register workers_details')
print('press(10)--all workers_details')
print('press(11)--update doctors_details')
print('press(12)--update patients_details')
print('press(13)--update workers_details')
print('press(14)--create bill_table')
print('press(15)--insert bill')
print('press(16)--show bill_details')
print('press(17)--total bill')
print('press(18)--line chart')
print('press(19)--pie chart')
print('press(20)--bar graph')
print('press(21)--to exit') 

def main():
    choice = int(input('enter your choice: '))
    if choice==1:
        about()
    elif choice==2:
        create_doc_details()
    elif choice==3:
        insert_doc_details()
    elif choice==4:
        show_doc_details()
    elif choice==5:
        create_patients_details()
    elif choice==6:
        insert_patients_details()
    elif choice==7:
        show_patients_details()
    elif choice==8:
        create_workers_details()
    elif choice==9:
        insert_workers_details()
    elif choice==10:
        show_workers_details()
    elif choice==11:
        update_doctors_details()
    elif choice==12:
        update_patients_details()
    elif choice==13:
        update_workers_details()
    elif choice==14:
        create_bill()
    elif choice==15:
        insert_bill()
    elif choice==16:
        show_bill_details()
    elif choice==17:
        total_bill()
    elif choice==18:
        line_chart()
    elif choice==19:
        pie_chart()
    elif choice==20:
        bar_chart()
    elif choice==21:
        print('.....thanks for using hospital management system....\n have a good day ahead')
        exit()
    else:
        print('theek se likho...aankho ka use sahi se karo...')
        main()
    
def about():
    name=input('please tell me your name: ')
    print(f'''welcome {name},you are using a hospital management system.....it has 21 options 
    choose as per choice....''')
    main()

def create_doc_details():
    print('.......PLEASE USE THIS FUNCTION AT ONCE ONLY........')
    cursor.execute("create table doctors_details(ID int(5),NAME varchar(20),AGE int(4),DEPARTMENT varchar(10),PHONE int(12))")
    print('table created successfully')
    main()

def insert_doc_details():
    Id=int(input('enter id of doctor: '))
    name=input('enter the name of doctor: ')
    age=int(input('enter the age of doctor: '))
    department=input('enter the department of doctor :')
    phone_number=int(input('enter the phone number of doctor: '))
    cursor.execute("insert into doctors_details values({},'{}',{},'{}',{})".format(Id,name,age,department,phone_number,))
    mydb.commit()
    print('new doctor has been registered')
    main()

def show_doc_details():
    print('details of all the doctors')
    x=pd.read_sql('select * from doctors_details',mydb)
    print(x)
    main()

def create_patients_details():
    print('.......PLEASE USE THIS FUNCTION AT ONCE ONLY........')
    cursor.execute("create table patients_details(ID int(5),NAME varchar(20),AGE int(4),PROBLEM varchar(10),PHONE int(12))")
    print('table is been created successfully')
    main()

def insert_patients_details():
    Id=int(input('enter id of patient: '))
    name=input('enter the name of patient: ')
    age=int(input('enter the age of patient: '))
    problem=input('enter the problem of patient :')
    phone_number=int(input('enter the phone number of patient: '))
    cursor.execute("insert into patients_details values({},'{}',{},'{}',{})".format(Id,name,age,problem,phone_number,))
    mydb.commit()
    print('new doctor patient is been registered')
    main()

def show_patients_details():
    print('details of all the patients')
    x=pd.read_sql('select * from patients_details',mydb)
    print(x)
    main()

def create_workers_details():
    print('.......PLEASE USE THIS FUNCTION AT ONCE ONLY........')
    cursor.execute("create table workers_details(ID int(5),NAME varchar(20),AGE int(4),WORK_TYPE varchar(10),PHONE int(12))")
    print('table is been created successfully')
    main()

def insert_workers_details():
    Id=int(input('enter id of worker: '))
    name=input('enter the name of worker: ')
    age=int(input('enter the age of worker: '))
    work_type=input('enter the department of worker :')
    phone_number=int(input('enter the phone number of worker: '))
    cursor.execute("insert into workers_details values({},'{}',{},'{}',{})".format(Id,name,age,work_type,phone_number,))
    mydb.commit()
    print('new worker is been registered')
    main()

def show_workers_details():
    print('details of all the workers')
    x=pd.read_sql('select * from workers_details',mydb)
    print(x)
    main()

def update_doctors_details():
    change=input('enter what you want to change: ')
    value=eval(input('enter the value for change(use quotes for letters): ')) 
    value2=eval(input('enter name of doctor: '))
    cursor.execute(f"update doctors_details set {change} = '{value}' where NAME = '{value2}'")
    mydb.commit()
    main()

def update_patients_details():
    change=input('enter what you want to change: ')
    value=eval(input('enter the value for change: ')) 
    value2=input('enter name of patient: ')
    cursor.execute(f"update patients_details set {change} = '{value}'' where name = '{value2}'")
    mydb.commit()
    main()

def update_workers_details():
    change=input('enter what you want to change: ')
    value=eval(input('enter the value for change: ')) 
    value2=input('enter name of worker: ')
    cursor.execute(f"update workers_details set {change} = '{value}' where name = '{value2}'")
    mydb.commit()
    main()

def create_bill():
    print('.......PLEASE USE THIS FUNCTION AT ONCE ONLY........')
    cursor.execute("create table bill(ID int(5),NAME varchar(20),AGE int(4),DOCTOR_VISIT varchar(10),MEDICINE_COST int(12))")
    print('table is been created successfully')
    main()   

def insert_bill():
    Id=int(input('enter id of patient: '))
    room_charges=int(input('enter the room charges: '))
    doctor_visit=int(input('enter doctor charges :'))
    medicine_cost=int(input('enter the cost of medicines: '))
    total_bill=input('enter the overall cost: ')
    cursor.execute("insert into bill values({},{},{},{},'{}')".format(Id,room_charges,doctor_visit,medicine_cost,total_bill))
    mydb.commit()
    print('bill details has been registered')
    main()

def show_bill_details():
    print('bill summary')
    x=pd.read_sql('select * from bill',mydb)
    print(x) 
    main()

def total_bill():
    df=pd.read_sql('select * from bill',mydb)
    column_list=list(df)
    column_list.remove('ID')
    df['total_bill']=df[column_list].sum(axis=1)
    print(df)
    main()

# FOR DATA VISUALIZATION
def line_chart():
    a='select * from doctors_details'
    df=pd.read_sql(a,mydb)
    x1=df['NAME']
    x2=df['AGE']
    plt.plot(x1,x2,color='r',linewidth=5,marker='o',markerfacecolor='blue')
    plt.show()
    main()

def pie_chart():
    df=pd.read_sql('select * from patients_details',mydb)
    x1=eval(input('enter charges of room,medicines and doctor_visit in list_form: '))
    y1=['orange','yellow','green']
    items=['room','medicines','doctor_visit']
    expl=[0,0,0]
    plt.title('EXPENCES VISUALIZATION')
    plt.pie(x1,colors=y1,labels=items,explode=expl,autopct='%1.1f%%',shadow=True)
    plt.show()
    main()

def bar_chart():
    df=pd.read_sql('select * from bill',mydb)
    dg=pd.read_sql('select * from patients_details',mydb)
    x1=dg['NAME']
    y1=df['ROOM_CHARGES'] 
    plt.title('BAR GRAPH')
    plt.xlabel('names of patient')
    plt.ylabel('room bill')
    plt.xticks(fontsize=12,rotation=30)
    plt.bar(x1,y1,width=0.3,facecolor='r',edgecolor='green')
    plt.show()
    main()
# main program
main() 