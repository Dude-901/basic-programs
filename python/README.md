# some constructors and their use in class object:   
1. `__init__(self, ...)`
2. `__str__(self, ...)`

* a class object that returns the string putput when an instance is called:  
```python
class Cereal:
    def __init__(self, n, b, f):
        self.name = n
        self.brand = b
        self.fibre = f
    def __str__(self):
        return '{} cereal is produced by {} and has {} grams of fiber in every serving!'.format(self.name, self.brand, self.fibre)
    
c1 = Cereal("Corn Flakes", "Kellogg's", 2)
c2 = Cereal("Honey Nut Cheerios", "General Mills", 3)
print(c1)
print(c2)
```
