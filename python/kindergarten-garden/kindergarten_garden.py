students_list = ["Alice", "Bob", "Charlie", "David", "Eve", "Fred", "Ginny", "Harriet", "Ileana", "Joseph", "Kincaid", "Larry"]
plants_list = ["Grass", "Clover", "Radishes", "Violets"]

class Garden:
    def __init__(self, diagram, students = students_list):
        self._first_row = diagram.split('\n')[0]
        self._second_row = diagram.split('\n')[1]
        self._students = students
        self._students.sort()

    def plants(self, name):
        ret = list()
        i = self._students.index(name)*2

        #print(i)

        for plant in plants_list:
            if plant.startswith(self._first_row[i]):
                ret.append(plant)
        
        for plant in plants_list:
            if plant.startswith(self._first_row[i+1]):
                ret.append(plant)
        
        for plant in plants_list:
            if plant.startswith(self._second_row[i]):
                ret.append(plant)
        
        for plant in plants_list:
            if plant.startswith(self._second_row[i+1]):
                ret.append(plant)        

        return ret        
