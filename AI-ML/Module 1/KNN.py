from collections import OrderedDict

n = int(input("Enter the number of rows of data "))
m = int(input("Enter the number of columns of data (without labels) "))

data = []

print("Enter data row wise with spaces")

for i in range(n):
    data.append(input("").split(" "))

data = [[int(j) for j in i] for i in data]

print(data)
data_labels = []
data_labels = input("Enter the data labels with spaces ").split(" ")

print(data_labels)

if(n != len(data_labels)):
    print("Invalid Input")

else:
    test_data = input("Enter the test data points with spaces").split(" ")
    test_class = input("Enter the class the data belongs to ")
    test_data = [int(i) for i in test_data]

    dist = []
    for i in range(n):
        sums = 0
        for j in range(m):
            sums = sums + abs(test_data[j] - data[i][j])
        dist.append([sums, data_labels[i]])

    dist.sort(key = lambda x : x[0])    
    print(dist)


    