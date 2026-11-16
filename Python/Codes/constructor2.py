
class person:
    # name="abcd"
    def __init__(self,name="himanshu"):
        self.name=name
    
    def show(self):
        print(self.name)

p=person()
p.show()
print(id(p))
p1=person("komal")
p1.show()
print(id(p1))