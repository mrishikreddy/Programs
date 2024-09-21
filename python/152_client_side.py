import socket
c = socket.socket()
c.connect(("localhost",55000))
print("text-chaters")
while 1:
    msg=str(input("enter your message(to exit enter 0):"))
    if msg =="0":
        c.send(bytes("client has closed the chat\n   Thank you","utf-8"))
        break
    c.send(bytes(msg,"utf-8"))
    p=c.recv(1024).decode()
    print("\nreceived a message:",p)