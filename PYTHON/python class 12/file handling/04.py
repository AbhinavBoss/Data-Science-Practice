import csv
with open('a.csv','r+') as f:
    st=csv.reader(f)
    for i in st:
        print(i) 