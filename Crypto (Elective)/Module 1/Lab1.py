import random
import string

def encrypt(pt, key):
    cipherMatrix = []
    pIndex = 0
    while pIndex < len(pt):
        row = []
        for i in range(len(key)):
            if pIndex < len(pt):
                row.append(pt[pIndex])
            else:
                row.append(random.choice(string.ascii_letters))
            pIndex+=1
        cipherMatrix.append(row)
    auxMatrix = [[' ' for _ in range(len(cipherMatrix[0]))] for __ in range(len(cipherMatrix))]

    for i,k in enumerate(key):
        for r in range(len(cipherMatrix)):
            auxMatrix[r][k] = cipherMatrix[r][i]
    
    ct = ""
    for r in range(len(auxMatrix)):
        for c in range(len(auxMatrix[0])):
            ct+= auxMatrix[r][c]
    print(f"{ct=}")
    return ct

def decrypt(ct, key):
    rows = len(ct) // len(key)
    cols = len(key)
    
    plainMatrix = [[" " for _ in range(cols)] for __ in range(rows)] 
    i = 0
    for r in range(rows):
        for c in range(cols):
            plainMatrix[r][c] = ct[i]
            i+=1
    auxMatrix = [[' ' for _ in range(len(plainMatrix[0]))] for __ in range(len(plainMatrix))]
    
    for i,k in enumerate(key):
        for r in range(len(plainMatrix)):
            auxMatrix[r][i] = plainMatrix[r][k]
    
    pt = ""
    for r in range(len(auxMatrix)):
        for c in range(len(auxMatrix[0])):
            # print(auxMatrix[r][c], end="")
            pt+= auxMatrix[r][c]
    print(f"{pt=}")
    return pt

if __name__ =="__main__":
    pt = input("Enter the plaintext: ")
    key = input("Enter the key with spaces: ").split(' ')
    key = [int(i) for i in key]
    ct = encrypt(pt,key)
    print()
    new = decrypt(ct,key)