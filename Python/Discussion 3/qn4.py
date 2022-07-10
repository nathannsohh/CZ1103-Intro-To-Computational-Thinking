def triangle(row):
    if len(row) <= 1:
        return row
    else:
        output = ""
        for i in range(1,len(row)-1):
            if row[i] == row[i-1]:
                output = output + row[i]
            elif row[i] == "B" and row[i-1] == "G":
                output = output + "R"
            elif row[i] == "B" and row[i-1] == "R":
                output = output + "G"
            elif row[i] == "G" and row[i-1] == "R":
                output = output + "B"
            elif row[i] == "G" and row[i-1] == "B":
                output = output + "R"
            elif row[i] == "R" and row[i-1] == "B":
                output = output + "G"
            elif row[i] == "R" and row[i-1] == "G":
                output = output + "B"
            return triangle(output)

print(triangle("GB"))

                        
                







