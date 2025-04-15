import math
class FiguraGeometrica():
    
    def area():
        pass
        
    def perimetro():
        pass

class Triangolo(FiguraGeometrica):
    
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def tipoditriangolo(self):
        if self.a == self.b and self.b == self.c:
            print("EQUILATERO")
        elif self.a == self.b or self.b == self.c or self.c == self.a:
            print("ISOSCELE")
        else:
            print("SCALENO")
            
    def perimetro(self):
        return self.a + self.b + self.c

    def area(self):
        p = self.perimetro() / 2
        a = p*(p-self.a)*(p-self.b)*(p-self.c)
        a = math.sqrt(a)
        return a

class Rettangolo(FiguraGeometrica):

    def __init__(self, a, b):
        self.a = a
        self.b = b

    def tipodirettangolo(self)
        if self.a == self.b:
            print("QUADRATO")
        else:
            print("RETTANGOLO")

    def perimetro(self):
        return (self.a + self.b)*2

    def area(self):
        return self.a*self.b

class Cerchio(FiguraGeometrica):

    def __init__(self, r):
        self.r = r

    def perimetro(self):
        return math.pi * 2 * self.r

    def area(self):
        return math.pi * self.r**2

