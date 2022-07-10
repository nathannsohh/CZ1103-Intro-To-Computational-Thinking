def get_longest_word(first,second,third):
    if len(first) > len(second) and len(first) > len(third):
        return first
    elif len(second) > len(first) and len(second) > len(third):
        return second
    elif len(third) > len(first) and len(third) > len(second):
        return third
    


print(get_longest_word("hello","my","name"))
    