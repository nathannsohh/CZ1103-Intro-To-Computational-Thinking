results = {("FE2", 1) : 52, ("FE2", 2) : 34, ("FE2",3): 22, ("FE2",4) : 2, ("FE2",5): 83, ("FE2",6): 32, 
           ("FE2",7): 86, ("FE2",8): 80, ("FE2",9): 56, ("FE2",10): 86, ("FE2",11): 41, ("FE2",12): 61,
           ("FE2",13): 76, ("FE2",14): 29, ("FE2",15): 59, ("FE2",16): 20, ("FE2",17): 17, ("FE2",18): 37, 
           ("FE2",19): 18, ("FE2",20): 100, ("FE2",21): 80, ("FE2",22): 2, ("FE2",23): 42, ("FE2",24): 31, 
           ("FE2",25): 90, ("FE2",26): 80, ("FE2",27): 48, ("FE2",28): 20, ("FE2",29): 27, ("FE2",30): 70, 
           ("FE2",31): 74, ("FE2",32): 17, ("FE2",33): 65, ("FE2",34): 33, ("FE2",35): 21, ("FE2",36): 86, 
           ("FE2",37): 93, ("FE2",38): 79, ("FE2",39): 85, ("FE2",40): 36}
           
           
def inputRecord(database, group, id, score):
    x = (group,id)
    database[x] = score
    return database

def query(database, group, id):
    try:
        x = (group,id)
        output = database[x]
        return output
    except:
        return "No such student exists!"

def listGrades(database, group):
    result_list = []
    for key,value in database.items():
        if group in key:
            result_list.append(value)
    return result_list

def maxGrade(database, group):
    result_list = []
    for key,value in database.items():
        if group in key:
            result_list.append(value)
    return max(result_list)

valid = False
while not valid:
    try:
        x = int(input("Welcome to the grading system! Please enter your option!\n"
                        "1: input record\n"
                        "2: query a student\n"
                        "3: list grades in a group\n"
                        "4: get max in a group\n"
                        "5: list all group names\n"
                        "6: exit\n"
                        "option: "))
        valid = True
    except:
        print("Invalid reponse. Please put it in an integer from 1-6.")

while x != 6:
    if x == 1:
        grp = input("Please input the group name: ")
        student_ID = int(input("Please input the student ID: "))
        marks = int(input("Please input the student's score: "))
        print(inputRecord(results, grp, student_ID, marks))
        print("Marks successfully recorded!")
        x = int(input("Is there anything else you would want to do?\n"
                        "1: input record\n"
                        "2: query a student\n"
                        "3: list grades in a group\n"
                        "4: get max in a group\n"
                        "5: list all group names\n"
                        "6: exit\n"
                        "option: "))

    elif x == 2:
        grp = input("Please input the group name: ")
        student_ID = int(input("Please input the student ID: "))
        print(query(results, grp, student_ID))
        x = int(input("Is there anything else you would want to do?\n"
                        "1: input record\n"
                        "2: query a student\n"
                        "3: list grades in a group\n"
                        "4: get max in a group\n"
                        "5: list all group names\n"
                        "6: exit\n"
                        "option: "))

    elif x == 3:
        grp = input("Please input the group name: ")
        print(listGrades(results, grp))
        x = int(input("Is there anything else you would want to do?\n"
                        "1: input record\n"
                        "2: query a student\n"
                        "3: list grades in a group\n"
                        "4: get max in a group\n"
                        "5: list all group names\n"
                        "6: exit\n"
                        "option: "))
    elif x == 4:
        grp = input("Please input the group name: ")
        print(maxGrade(results, grp))
        x = int(input("Is there anything else you would want to do?\n"
                        "1: input record\n"
                        "2: query a student\n"
                        "3: list grades in a group\n"
                        "4: get max in a group\n"
                        "5: list all group names\n"
                        "6: exit\n"
                        "option: "))

    elif x == 5:
        groups = []
        for a,b in results.keys():
            if a not in groups:
                groups.append(a)
        print(groups)
        x = int(input("Is there anything else you would want to do?\n"
                        "1: input record\n"
                        "2: query a student\n"
                        "3: list grades in a group\n"
                        "4: get max in a group\n"
                        "5: list all group names\n"
                        "6: exit\n"
                        "option: "))

else:
    print("Thank you for using this service. Goodbye.")
            

        













    