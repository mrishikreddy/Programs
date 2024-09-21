import socket
s = socket.socket()
s.bind(("localhost",55000))
s.listen(3)
c,addr=s.accept()
print("connected with:",addr)
while 1:
    p=c.recv(1024).decode()
    if p==0:
        break
    print("\nrecived:",p)
    msg=str(input("enter your reply(to exit enter 0):"))
    if msg =="0":
        c.send(bytes("owner has closed the chat\n   \tThank you","utf-8"))
        break
    c.send(bytes(msg,"utf-8"))
c.close()
s.close
exit()
