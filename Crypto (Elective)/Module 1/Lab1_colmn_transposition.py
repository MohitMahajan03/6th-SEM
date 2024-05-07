import random
from collections import defaultdict
from collections import OrderedDict

plain_text = input("Enter the plain text ")

key = input("Enter the key with spaces ").split(" ")

key = [int(i) for i in key]

text = defaultdict(list)
encrypt = {}
decrypt = {}

def create_plain_text():
    idx = 0
    count = 1

    while(idx < len(plain_text)):
        count = 1
        for i in range(len(key)):
            if(idx<len(plain_text)):
                text[count].append(plain_text[idx])
                idx += 1
            else:
                text[count].append(f"{i}")
            
            count += 1

    print("plain text\n")
    for i in text:  
        print("col: ", i, text[i])


def encryption():

    count = 1
    for i in key:
        encrypt[count] = text[i]
        count += 1

    print("encrypted cols")
    for i in encrypt:
        print("col: ", i, encrypt[i])


def decryption():

    count = 1
    for i in key:
        decrypt[i] = encrypt[count]
        count += 1

    print("decrypted cols")
    decrypted = dict(sorted(decrypt.items()))

    for i in decrypted:
        print("col: ", i, decrypted[i])

create_plain_text()
encryption()
decryption()