class Animal:
    def __init__(self, a, l):
        self.arms = a
        self.legs = l
    def limbs(self):
        return self.arms + self.legs
spider = Animal(4, 4)
spidlimbs = spider.limbs()
print(spidlimbs)
