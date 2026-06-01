class Volume:
    def __init__(self, *args):
        if len(args) == 1:
            a = args[0]
            print("Volume of Cube:", a**3)
        elif len(args) == 3:
            l, b, h = args
            print("Volume of Cuboid:", l * b * h)
        elif len(args) == 2:
            r, h = args
            print("Volume of Cylinder:", 3.14 * r**2 * h)
        else:
            print("Wrong number of values")

# Test
ob=Volume(5)             # Cube
ob1=Volume(2, 4)          # Cylinder
ob2=Volume(5, 10, 15)     # Cuboid
