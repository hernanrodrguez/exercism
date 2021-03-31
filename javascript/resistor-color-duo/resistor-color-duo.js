//
// This is only a SKELETON file for the 'Resistor Color Duo' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const decodedValue = (colors) => {
  var dec = colorCode(colors[0])*10;
  var uni = colorCode(colors[1]);
  return dec+uni;
};

export const colorCode = (color) => {
  for(var i=0; i<COLORS.length; i++){
    if(color == COLORS[i])
      return i;
  }
  return -1;
};

export const COLORS = ['black','brown','red','orange','yellow','green','blue','violet','grey','white'];
