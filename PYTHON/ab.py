# # stack using queue
# s=[4,1,3,2,6]
# q=[]
# while len(s)!=0:
#     a=s.pop()
#     if len(q)==0:
#         q.append(a)
#     else:
#         if a<q[0]:
#             q.insert(0,a)
#         else:
#             if a>q[-1]:
#                 q.append(a)
#             else:
#                 l=[]
#                 while q[-1]>a:
#                     l.insert(0,q.pop())
#                     q.append(a)
#                     q.extend(l)
# print(q) 