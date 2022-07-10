def mask_out(sentence,banned,substitute):
    ban_list = list(banned)
    sub_list = list(substitute)
    for l in ban_list:
        if l in sentence:
            word_index = ban_list.index(l)
            if word_index > len(sub_list)-1:
                sentence = sentence.replace(l,sub_list[0])
            elif word_index <= len(sub_list)-1:
                sentence = sentence.replace(l,sub_list[word_index])
    return sentence
    
    



mask_out('aeiou','aeiou','!@#')

