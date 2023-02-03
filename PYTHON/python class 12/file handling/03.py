import csv
f=open('a.csv','a')
fh=csv.writer(f)
fh.writerow('''i like roman reigns dean ambrose and seth rollins''')
f.close()