list1 = [50,60,70,75,80,90,67]
list2 = [60,70,80,46,75,86,95,57]
avg_list1 = float(sum(list1)/len(list1))
avg_list2 = float(sum(list2)/len(list2))

if avg_list1 == avg_list2:
    print("Both classes have the same average score.")
elif avg_list1 > avg_list2:
    print("The average score of class 1 is higher than class 2.")
else:
    print("The average score of class 2 is higher than class 1.")

if max(list1) == max(list2):
    print("Both classes have the same highest score.")
elif max(list1) > max(list2):
    print("The highest score of class 1 is greater than class 2.")
else:
    print("The highest score of class 2 is greater than class 1.")