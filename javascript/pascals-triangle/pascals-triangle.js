//
// This is only a SKELETON file for the 'Pascals Triangle' exercise. It's been provided as a
// convenience to get you started writing code faster.
//


export const rows = (n) => {
  if(n==0){
    return new Array();
  } else {
    let triangle = [[1]];
    let last_row = [1];
    for(let j=1; j<n; j++){
      let new_row = [];  
      for(let i=0; i<last_row.length+1; i++){
        let aux = check_num(last_row[i-1]) + check_num(last_row[i]);
        new_row.push(aux);      
      }
      triangle.push(new_row);
      last_row = new_row;
    }
    return triangle;
  }
};

export const check_num = (num) => {
  if(isNaN(num)){
    return 0;
  }
  else {
    return num;
  }    
};
