def score(word):
    points = 0
    word = word.lower()
    for letter in word:
        points += get_points(letter)
    return points

def get_points(letter):
    one_point = "aeioulnrst"
    two_points = "dg"
    three_points = "bcmp"
    four_points = "fhvwy"
    five_points = "k"
    eigth_points = "jx"
    ten_points = "qz"

    if letter in one_point:
        return 1
    if letter in two_points:
        return 2
    if letter in three_points:
        return 3
    if letter in four_points:
        return 4
    if letter in five_points:
        return 5
    if letter in eigth_points:
        return 8
    if letter in ten_points:
        return 10
