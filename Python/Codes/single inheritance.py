class student:
    def fun(self,name,roll):
        self.name=name
        self.roll=roll
    def show(self):
        print("Name:",self.name)
        print("Roll No:",self.roll)
class result(student):
    def fun1(self,marks):
        self.marks=marks
    def show1(self):
        print("Marks:",self.marks)
R=result()
R.fun("abc",123)
R.show()
R.fun1(95)
R.show1()