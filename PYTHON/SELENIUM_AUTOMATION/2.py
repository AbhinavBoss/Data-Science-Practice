from selenium import webdriver
from selenium.webdriver.common.by import *
from selenium.webdriver.common.keys import *
driver=webdriver.Chrome()
# driver = webdriver.Firefox()
driver.get("https://www.instagram.com")
driver.find_element(By.XPATH,"/html/body/div[1]/section/main/article/div[2]/div[1]/div[2]/form/div/div[2]/div/label/input").send_keys("Abhin@v66"+ Keys.RETURN)
driver.find_element(By.NAME,'username').send_keys("abhinavvarshney17")