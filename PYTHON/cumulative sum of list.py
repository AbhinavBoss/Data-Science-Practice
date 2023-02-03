# Python code to get the Cumulative sum of a list
# def Cumulative(lists):
# 	cu_list = []
# 	length = len(lists)
# 	cu_list = [sum(lists[0:x:1]) for x in range(0, length+1)]
# 	return cu_list[1:]
# list = [10, 20, 30, 40, 50]
# print(Cumulative(list))


# alternative code to get the cumulative sum of lists
list=[10,20,30,40,50]
new_list=[]
j=0
for i in range(0,len(list)):
	j+=list[i]
	new_list.append(j) 
print(new_list)