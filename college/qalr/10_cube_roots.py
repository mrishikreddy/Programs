#settings
problem_time = 10 #(in seconds)
minimum_range = 6
maximum_range = 15 

#settings end

import os
import random
from time import sleep

for i in range(3,-1,-1):
    print("\t\t\t\tRISHIK TECH\n\n")
    print("\t\tStarts in ",i,"")
    sleep(1)
    os.system('clear')

for i in range(10):
    print("\t\t\t\tRISHIK TECH\n\n")
    num = random.randint(minimum_range,maximum_range)
    print("\t\t Round ",i+1,":\n")
    print("\t\t",num**3," ⌵  3 = \n")
    if(problem_time>3):
        sleep(problem_time-3-1)
    print('\t\t\t  \"Time came to finish!!!"')
    sleep(3)
    os.system("clear")
    print("\t\t\t\tRISHIK TECH\n\n")
    print("\t\t Round ",i+1,":\n")
    print("\t\t",num**3," ⌵  3 = ",num)
    sleep(1)    
    os.system('clear')