def what_century(year):
    cent_str = year[:2]
    cent_int = int(cent_str) + 1
    if year[2:] == "00":
        return f"{cent_int-1}th"
    elif 10 < cent_int < 20:
        return f"{cent_int}th"
    elif str(cent_int)[1] == "1":
        return f"{cent_int}st"
    elif str(cent_int)[1] == "2":
        return f"{cent_int}nd"
    elif str(cent_int)[1] == "3":
        return f"{cent_int}rd"
    
    else:
        return f"{cent_int}th"

print(what_century("32"))



