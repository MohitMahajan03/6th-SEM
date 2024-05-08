n = int(input("Enter the number of rows of data "))
m = int(input("Enter the number of columns of data (without labels) "))

data = [n][m]

print("Enter data row wise with spaces")

for i in range(n):
    data[i] = input()