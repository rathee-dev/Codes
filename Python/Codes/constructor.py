'''1.parametrized constructor
2. complier constructor
3.default constaructor.
4. overloaded constructor.
'''
# #parametrized constructor
# class Employee:

#     Department="CSE"

#     def __init__(self,id,name):
#         self.id=id
#         self.name=name

#     def show (self):
#         print("Employee name is ",self.name)
#         print("Employee id is ",self.id)

# E= Employee(2001,'xyz')  #E.__init__(2001,xyz) #call it by default when object is created.
# E.show()

# E1=Employee(2002,'xyz')
# E1.show()

# #default constructor
# class Employee:

#     Department="CSE"

#     def __init__(self):
#         self.id=2005
#         self.name='Himanshu'

#     def show (self):
#         print("Employee name is ",self.name)
#         print("Employee id is ",self.id)

# E= Employee() 
# E.show()

# E1=Employee()
# E1.show()
# #E and E1 will result same value but at different adresses.

#Compiler constructoer is made itself for memory alloaction.

#Overloaded constructor
class A:
    def __init__(self):
        self.x=20
        print(self.x)
        
    def __init__(self,a):
        self.a=a
        print(self.a)

    def __init__(self,x,y):
        self.x=x
        self.y=y
        print(self.x,self.y)
        print(x,y)# can not use anywhere in program.

# ob=A()
# ob1=A(20)
# ob3=A(60)
ob2=A(10,20) #only last will work and above will not work and we have to pass the argumernts equal to the no of parameters in that constructor.
   