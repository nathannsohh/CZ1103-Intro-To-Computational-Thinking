def reverse_num(num):
    if num < 0:
        num = -num
        l = list(str(num))
        str_ans = ""
        rev_list = l[::-1]
        for c in rev_list:
            str_ans += c
            output = -int(str_ans)
    else:
        l = list(str(num))
        str_ans = ""
        rev_list = l[::-1]
        for c in rev_list:
            str_ans += c
            output = int(str_ans)
    return output



print(reverse_num(-4567))