def main():
    """string()"""
    """number()"""
    formatString()

"""
def string():
    name = "Tirath Bhathawala"
    clg = " DJ Sanghvi"
    print(name)
    print(type(name))
    print(name[2:5])
    print(len(name))
    print(name[:4])
    print(name[3:])
    print(name[-1])
    print(name[2:-2])
    print(name[2:9:2])
    print(name[::-1])
    print(name + clg)
    print(name.split())
    print(name.split('w'))


def number():
    num = 5**3
    n = 6*2.656
    print(num)
    print("Number: %4.2f", n)
    print("This is a {a} and {a}".format(a = "Cat"))
    print("{0:8} | {1:9}".format("Fruit", "Quantity"))
    print("{0:8} | {1:9}".format("Apples", 5))
    print("{0:<8} | {1:^9} | {2:>9}".format("Left", "Centre", "Right"))
    print("{0:-<8} | {1:=^9} | {2:.>9}".format("Left", "Centre", "Right"))
"""

def formatString():
    name = "Tirath"
    print(f"My name is {name}")

main()