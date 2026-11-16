class demo:
    def volume(self,s):
        self.s=s
        print(self.s**3)

class demo1(demo):
    def volume(self,r,h):
        self.r=r
        self.h=h
        print(3.14*(self.r**2)*self.h)

class demo2(demo1):
    def volume(self,l,b,h):
        self.l=l
        self.b=b
        self.h=h
        print(self.l*self.b*self.h)

D=demo2()
D.volume(10)
D.volume(10,20)
D.volume(10,20,30)