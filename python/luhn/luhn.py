class Luhn:
    def __init__(self, card_num):
        self.str_num = card_num.replace(" ", "")

    def valid(self):
        i=1
        sum=0
        if self.str_num.isdigit():
            for char in reversed(self.str_num):    
                num=0     
                if i%2 == 0:
                    num = int(char)*2
                    if num>9:
                        num-=9
                else:
                    num = int(char)
                sum += num           
                i+=1
            return sum%10 == 0 and i>2
        else:
            return False
            