days = ['first', 'second', 'third', 'fourth', 'fifth', 'sixth', 'seventh', 'eighth', 'ninth', 'tenth', 'eleventh', 'twelfth']
gifts = ["a Partridge in a Pear Tree", "two Turtle Doves", "three French Hens", "four Calling Birds", "five Gold Rings", "six Geese-a-Laying", "seven Swans-a-Swimming", "eight Maids-a-Milking", "nine Ladies Dancing", "ten Lords-a-Leaping", "eleven Pipers Piping", "twelve Drummers Drumming"]

def recite(start_verse, end_verse):
    ret = []
    for i in range(start_verse, end_verse+1):
        lyrics = beginning(i)
        for j in range(i, 0, -1):
            lyrics += gifts[j-1]
            if j == 1:
                lyrics += "."
            elif j == 2:
                lyrics += ", and "
            else:
                lyrics += ", "
        ret.append(lyrics)
    return ret

def beginning(end_verse):    
    return f"On the {days[end_verse-1]} day of Christmas my true love gave to me: "