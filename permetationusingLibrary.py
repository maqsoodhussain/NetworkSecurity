from itertools import permutations

def permute(string):
    a=permutations(string) 
    for i in list(a): 
        print("".join(i),end=" ")
        
permute("asd")


