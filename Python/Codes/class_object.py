class A:
    x=20
    def func(self,a):
        self.a=a
        # print(self.a)
        y=30
        print(y)

s=A()

# s.x=30 #can not change the value of class variable with object it makes instance varible for object.
# print(A.x)

# s=A()
# s.func(10)
# print(s.a)

# s.x=90
# print(s.x)
# print(A.x)
# A.x=90
# print(A.x)

# print(id(s.x))
# s1=A()
# print(id(s1.x))
# s=s1
# print(s is s1)

class A:
    __attri1="ravi"
    attri2="manoj"
    def func(self):
        print("I am ",self.attri1)
        print("I am ",self.attri2)

s=A()
print(s.__attri1)
print(A.attri1)
s.func()