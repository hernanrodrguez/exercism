def convert(number):
    aux = ""
    if number%3 == 0:
        aux += "Pling"
    if number%5 == 0:
        aux += "Plang"
    if number%7 == 0:
        aux += "Plong"
    if number%3 != 0 and number%5 != 0 and number%7 != 0:
        aux = str(number)

    return aux