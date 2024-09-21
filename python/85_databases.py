import sqlite3 as sq
con=sq.connect("sb")
cur=con.cursor()
q="create table student2(rno integer,name text,marks integer)"
cur.execute(q)
q="insert into student2 values(1,'ravi',98)"
cur.execute(q)
q="select * from student2"
cur.execute(q)
rs=cur.fetchall()
for i in rs:
    print(i)
con.commit()