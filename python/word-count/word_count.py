import re

sep = " ", ";", ",", "#", "-", "_", "\n", ":", ".", "\t"

def count_words(sentence):
    aux = custom_split(sep, sentence)
    counts = dict()
    for word in filter(None, aux):
        word = word.lower()
        word = word.strip(".!?'\"&@$%^")
        if word not in counts:
            counts[word] = 1
        else:
            counts[word] += 1
    return(counts)

def custom_split(sep, str):
    regexp = '|'.join(map(re.escape, sep))
    return re.split(regexp, str)

