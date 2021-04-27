# overload an binary + operator
  
class A:
    def __init__(self, a):
        self.a = a
  
    # adding two objects 
    def __add__(self, o):
        return self.a + o.a 
    
ob1 = A(1)
ob2 = A(2)
ob3 = A("Code ")
ob4 = A("Academy")
  
print(ob1 + ob2)
print(ob3 + ob4)

# overload class Point
class Point:
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y
    
    def __str__(self):
        return "({0},{1})".format(self.x,self.y)
    
p1 = Point(2, 3)
print(p1)


# overloading the less than operator
class Point:
    def __init__(self, x=0, y=0):
        self.x = x
        self.y = y

    def __str__(self):
        return "({0},{1})".format(self.x, self.y)

    def __lt__(self, other):
        self_mag = (self.x ** 2) + (self.y ** 2)
        other_mag = (other.x ** 2) + (other.y ** 2)
        return self_mag < other_mag

p1 = Point(1,1)
p2 = Point(-2,-3)
p3 = Point(1,-1)

# use less than
print(p1<p2)
print(p2<p3)
print(p1<p3)
