from time import sleep
import threading
class a(threading.Thread):
    def run(self):
        for i in range(5):
            print("hello")
            sleep(1)
class b(threading.Thread):
    def run(self):
        for i in range(5):
            print("hi")
            sleep(1)
t1=a()
t2=b()
t1.start()
sleep(0.2)
t2.start()

t1.join()
t2.join()
print("Bye")
