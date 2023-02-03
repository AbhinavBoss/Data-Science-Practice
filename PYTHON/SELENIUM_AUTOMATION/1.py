#YOUTUBE AUTOMATION
from selenium import webdriver
from selenium.webdriver.common.by import *
from selenium.webdriver.common.keys import *

# search manually
# search1=input("enter the name of the channel/video you wanna search: ")
# driver=webdriver.Chrome()
# driver = webdriver.Firefox()
# driver.get('https://youtube.com')
# driver.find_element(By.ID,'search').send_keys(search1 + Keys.RETURN) 

# search smartly😉😉😉
print('''choose from 1 or 2...
1-If you want to enter channel and video name,
2-You want to enter the name of only video/channel''')
choice = int(input("enter your choice(1-2):"))
if choice == 1:
    search2=input("enter the name of the channel you wanna search: ")
    video=input("enter the name of the video: ")
    # driver=webdriver.Chrome()
    driver = webdriver.Firefox()
    driver.maximize_window()
    driver.get(f"https://www.youtube.com/c/{search2}/search?query={video}")
else:
    search2=input("enter the name of the video/channel you wanna search: ")
    # driver=webdriver.Chrome()
    driver = webdriver.Firefox()
    driver.maximize_window()
    driver.get(f"https://www.youtube.com/results?search_query={search2}")
# driver=webdriver.Firefox()  