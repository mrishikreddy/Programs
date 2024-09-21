# already file_handling program is present in class folder
f=open("167_myimg.jpg","rb")
f1=open("166_my_new_img_file.jpg","wb")
data=f.read()
f1.write(data)
f.close()
f1.close()