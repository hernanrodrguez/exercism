class School:
    def __init__(self):
        self.students = dict()

    def add_student(self, name, grade):
        self.students[grade] = self.students.get(grade, list())
        self.students[grade].append(name)

    def roster(self):
        ret = list()
        for k,v in sorted(self.students.items()):
            for name in sorted(v):
                ret.append(name)
        return ret

    def grade(self, grade_number):
        ret = list()
        try:
            for name in sorted(self.students[grade_number]):
                ret.append(name)
        finally:
            return ret

