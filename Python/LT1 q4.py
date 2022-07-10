def find_tags(sentence):
    outputlist = []
    outputindex = 0
    output = ''
    if '[' and ']' not in sentence:
        return
    
    while '[' in sentence:
        index1 = sentence.index("[") #getting indexes for the square brackets
        index2 = sentence.index(']')
        outputlist.append(sentence[index1+1:index2])
        sentence = sentence[index2+1:]
    
    while outputindex != len(outputlist):
        if outputindex != len(outputlist)-1:
            output = output + "{}-{},".format(outputindex+1,outputlist[outputindex])
        else:
            output = output + "{}-{}".format(outputindex+1,outputlist[outputindex])
        outputindex += 1
    return output
    



        
                
print(find_tags('my name is [nathan] and i have a brother named [ethan]'))
