class Clock:
    def __init__(self, hour, minute):
        self._minute = int(minute)%60
        self._hour = (int(hour)+int(minute/60))%24  
        if int(minute)<0 and ((int(hour)+int(minute/60))/24)!=0:
            self._hour-=1

    def __repr__(self):
        ret = ""
        if self._hour < 10:
            ret += "0"
        ret += str(self._hour)
        ret += ":"
        if self._minute < 10:
            ret += "0"
        ret += str(self._minute)
        return ret
        

    def __eq__(self, other):
        return self._hour==other._hour and self._minute==other._minute

    def __add__(self, minutes):
        self._hour = (self._hour + int((self._minute + minutes)/60))%24
        self._minute = (self._minute + minutes)%60        
        return self
        
    def __sub__(self, minutes):
        self._hour = (self._hour - abs(int((self._minute - minutes)/60)))%24
        self._minute = (self._minute - minutes)%60        

        if ((self._hour+int(minutes/60))/24)!=0:
            self._hour-=1

        return self

