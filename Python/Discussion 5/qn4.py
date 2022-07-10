import random
def target_generator():
    target = [str(random.randint(0,9)),-1,-1,-1]
    index = 1
    while index != 4:
        a = str(random.randint(0,9))
        while a in target:
            a = str(random.randint(0,9))
        target[index] = a
        index += 1
    else:
        return ''.join(target)
    
def game(num,guess):
    bulls = 0
    cows = 0
    while guess != num:
        for d in guess: 
            if d in num:
                if guess.find(d) == num.find(d):
                    bulls += 1
                else:
                    cows += 1
        print(f"{bulls} A (Bulls) {cows} B (Cows)")
        bulls = 0
        cows = 0
        guess = input("Please input 4 digits: ")
    else:
        print("You Win!!")

bulls = 0
cows = 0
x = target_generator()
g = input("Please input 4 digits: ")

game(x,g)





                        
                







