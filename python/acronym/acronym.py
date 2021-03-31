import re

sep = " ", ";", ",", "#", "-", "_", "\n", ":", ".", "\t"

def abbreviate(words):
    acronym = ""
    aux = custom_split(sep, words)
    for word in filter(None, aux):
        word = word.strip(".!?'\"&@$%^")
        acronym += word[0]
    return (acronym.upper())

def custom_split(sep, str):
    regexp = '|'.join(map(re.escape, sep))
    return re.split(regexp, str)

