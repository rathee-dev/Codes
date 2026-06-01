#find the volume of cube cuboid and cylinder using overloading constructor.

# class Volume:
#     def __init__(self,a):
#         self.a=a
#         self.volume=a**3
#         print(f"Volume of cube is {self.volume}")

#     def __init__(self,l,b,h):
#         self.l=l
#         self.b=b
#         self.h=h
#         self.volume=l*b*h
#         print(f"Volume of cube is {self.volume}")
#     def __init__(self,r,h):
#         self.r=r
#         self.h=h
#         self.volume=3.14*r**2*h
#         print(f"Volume of cube is {self.volume}")

# ob=Volume(5)
# ob=Volume(5,10,15)
# ob=Volume(2,4)

# class Volume:
#     def __init__(self, *args):
#         if len(args) == 1:
#             a = args[0]
#             print("Volume of Cube:", a**3)
#         elif len(args) == 3:
#             l, b, h = args
#             print("Volume of Cuboid:", l * b * h)
#         elif len(args) == 2:
#             r, h = args
#             print("Volume of Cylinder:", 3.14 * r**2 * h)
#         else:
#             print("Wrong number of values")

# # Test
#Volume(5)             # Cube
# Volume(2, 4)          # Cylinder
# Volume(5, 10, 15)     # Cuboid

# class Volume:
#     def __init__(self, *args):# **kwargs also learn if time lagega
#         if len(args) == 1:
#             a = args[0]
#             self.volume = a ** 3
#             print(f"Volume of cube is {self.volume}")
        
#         elif len(args) == 3:
#             l, b, h = args
#             self.volume = l * b * h
#             print(f"Volume of cuboid is {self.volume}")
        
#         elif len(args) == 2:
#             r, h = args
#             self.volume = 3.14 * r ** 2 * h
#             print(f"Volume of cylinder is {self.volume}")
        
#         else:
#             print("Invalid number of arguments")

# # Testing objects
# ob1 = Volume(5)           # Cube
# ob2 = Volume(5, 10, 15)   # Cuboid
# ob3 = Volume(2, 4)        # Cylinder


class Volume:
    def __init__(self, a=0, b=0, c=0):
        self.a = a  # Can be side, length, or radius
        self.b = b  # width or height
        self.c = c  # height (only for cuboid)

    def volume_cube(self):
        return self.a ** 3

    def volume_cuboid(self):
        return self.a * self.b * self.c

    def volume_cylinder(self):
        return 3.14* self.a ** 2 * self.b

v1 = Volume(3)
print("Cube Volume:", v1.volume_cube())

v2 = Volume(2, 3, 4)
print("Cuboid Volume:", v2.volume_cuboid())

v3 = Volume(2, 5)
print("Cylinder Volume:", round(v3.volume_cylinder(), 2))