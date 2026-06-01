# l=[1,2,3,4,4,5,5,5,5,5]
# for i in l:
#     print(i,end=",")
# class A:
#     def func1(self):
#         print("base class")
# class B(A):
#     def func1(self):
#         print("child class")
# ob= B()
# ob.func1()
# t=(1,2,3,4,5,55,5,55)
# print(min(t))
# print(sum(t))
# del t
# print(t)
# d={1:20,2:30,4:40}
# print(d.pop(2))
# print(d)
# print(d.popitem())
# print(d)
# d.setdefault(4,30)
# print(d)

# def sum(x,y):
#     return x+y
# def sum(a,b,c):
#     return a+b
# print(sum(3,8))
class student:
    def fun(self):
        self.a=20
        print("a=",self.a)

s=student()
s.fun()