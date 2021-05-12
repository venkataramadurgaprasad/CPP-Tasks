from os import system, name 
  
# import sleep to show output for some time period 
from time import sleep 
  
# define our clear function 
def clear(): 
  
    # for windows 
    if name == 'nt': 
        _ = system('cls') 
  
    # for mac and linux(here, os.name is 'posix') 
    else: 
        _ = system('clear') 
  
# print out some text
for i in range(10):
    print('hello geeks') 
  
# sleep for 2 seconds after printing output 
    sleep(2) 
  
# now call function we defined above 
    clear()
  
# sleep for 2 seconds after clearing output 
    sleep(2)
