//
// This is only a SKELETON file for the 'Matrix' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export class Matrix {
  constructor(str) {
    this._rows = [];
    this._columns = [];
    
    let list_rows = str.split('\n');
    list_rows.forEach(element => {
      this._rows.push(element.split(' ').map(Number));
    });

    for(let i=0; i<this._rows[0].length; i++){
      let col = [];
      this._rows.forEach(element => {
        col.push(element[i]);
      });
      this._columns.push(col);
    }
  }

  get rows() {
    return this._rows; //.filter(value => !Number.isNaN(value));
  }

  get columns() {
    return this._columns;
  }
}
