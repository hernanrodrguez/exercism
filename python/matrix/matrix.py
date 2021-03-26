class Matrix:
    def __init__(self, matrix_string):   
        self.rows = []
        self.columns = []

        # Obtengo las rows
        rows_str = matrix_string.split('\n')
        for row_str in rows_str:
            self.rows.append(list(map(int, row_str.split())))

        # Obtengo las columns
        for i in range(len(self.rows[0])):
            col = []
            for row in self.rows:
                col.append(row[i])
            self.columns.append(col)
            

    def row(self, index):
        return self.rows[index-1]

    def column(self, index):
        return self.columns[index-1]


#string = "1 2\n3 4\n5 6"
#print(string)
#print()
#m = Matrix(string)
#print(m.row(1))
#print(m.row(2))
#print(m.row(3))
#print(m.column(1))
#print(m.column(2))

