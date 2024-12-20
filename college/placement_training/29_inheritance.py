class Wv1:
    def audioCall(self):
        print("This is audio call feature")
    def videoCall(self):
        print("This is a video call feature")

class Wv2(Wv1):
    def payment(self):
        print("This is a payement feature")
    def community(self):
        print("This is a community")
    def ai(self):
        print("This is a AI feature")

class Wv3(Wv2):
    def channels(self):
        print("This is channels feature")
    def chatlock(self):
        print("This is chat lock feature")
    def archeived(self):
        print("This is archeived feature")

obj = Wv3()
obj.audioCall()
obj.community()
obj.chatlock()