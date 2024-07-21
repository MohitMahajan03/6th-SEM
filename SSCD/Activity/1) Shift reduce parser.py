string = [i for i in "32433"]

length = len(string)

reduce = "REDUCE E ->"
shift = "SHIFT"

stack = []

def parser():

    for i in range(len(stack)):

        if stack[i] == "4":
            print(f"{reduce} 4", end=" ")
            stack[i] = "E"

            print(f"\n${''.join(stack)}\t{''.join(string)}$\t", end=" ")
        
    for i in range(len(stack)-2):

        if stack[i] == "3" and stack[i+1] == "E" and stack[i+2] == "3":
            print(f"{reduce} 3E3", end=" ")
            stack[i] = "E"
            stack.pop(i+2)
            stack.pop(i+1)
   
            print(f"\n${''.join(stack)}\t{''.join(string)}$\t", end=" ")
    
    for i in range(len(stack)-2):
        
        if stack[i] == "2" and stack[i+1] == "E" and stack[i+2] == "2":
            print(f"{reduce} 2E2", end=" ")
            stack[i] = "E"
            stack.pop(i+2)
            stack.pop(i+1)

            print(f"\n${''.join(stack)}\t{''.join(string)}$\t", end=" ")
    
    return

if __name__ == "__main__":

    print("GRAMMAR is -\nE->2E2 \nE->3E3 \nE->4\n")
    print("\nstack \t input \t action")
    print(f"$\t{''.join(string)}$\t", end=" ")

    for i in range(length):
        print(f"{shift}")
        stack.append(string[i])
        string[i] = ' '
        print(f"\n${''.join(stack)}\t{''.join(string)}$\t", end=" ")
        parser()

    parser()
    if stack[0] == 'E' and ''.join(string).strip() == '':
        print("ACCEPTED")
    else:
        print("REJECTED")

