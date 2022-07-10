def generate_digits(sentence):
    my_dict = {"ABC":"2","DEF":"3","GHI":"4","JKL":"5","MNO":"6",
               "PQRS":"7","TUV":"8","WXYZ":"9"}
    letter_list = list(sentence)
    output = ""
    for l in letter_list:
        for d in my_dict:
           if l in d:
               output += my_dict[d]
    return output


print(generate_digits('NATHAN'))
            
            
        
