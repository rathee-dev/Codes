"""1. Instance method.
   2. Class method.
"""
#method 1

# class A:
#     x=10
#     def func(self,a):#instance method
#         self.a=a
#         c=input("Enter anything:\n")
#         print(c)

# s=A()
# s.func(20)
# print(s.a)
# print(s.c)#error
# print(A.c)#error

# method 2
class demo:
    a="abc"

    @classmethod  # decorator should be mentioned otherwise do not change class variable.
    def func(cls):# class method
        cls.a="def"
        print(cls.a)

    def set(self,x):# instance method
        self.x=x
        print(self.x)

D=demo()
D.func() #Demo.func() #both means same here.
D.set(20)
print(demo.a)
print(D.a)
print(D.x)