import matplotlib.pyplot as plt
import numpy as np
c=[2,4,6,8]
d=['nunnu','nimul','nannu','abhinav'] 
plt.pie(c,labels=d,autopct='%1.1f%%',explode=[0.3,0,0,0],shadow=True) 
plt.show() 