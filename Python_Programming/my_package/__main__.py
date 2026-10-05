

from .src.my_package.calculation import addition, multiplication

def main():

    print("package ")
    print(f"5 + 3", addition(5, 3))
    print(f"5 * 3", multiplication(5, 3))


if __name__ == "__main__":
    main()
    


