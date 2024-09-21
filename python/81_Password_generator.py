import random
import string
pwd=random.sample(string.ascii_lowercase,6)
pwd+=random.sample(string.ascii_uppercase,2)
pwd+=random.choice(string.digits)
pwd+=random.choice(string.punctuation)
random.shuffle(pwd)
pwd="".join(pwd)
print(pwd)