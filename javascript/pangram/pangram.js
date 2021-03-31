//
// This is only a SKELETON file for the 'Pangram' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const isPangram = (sentence) => {
  var str = sentence.toLowerCase();
  var letters = getLetters(str);
  return fullAlphabet(letters);
};

export const fullAlphabet = (list) => {
  let letters = 'abcdefghijklmnopqrstuvwxyz';
  for(let i=0; i<letters.length; i++){
    if(!list.includes(letters[i]))
      return false;
  }
  return true;
};

export const getLetters = (str) => {
  let letters = new Array();
  for(let i=0; i<str.length; i++){
    if(isLetter(str[i])){
      if(!letters.includes(str[i]))
        letters.push(str[i]);
    }
  }
  return letters;
};

export const isLetter = (c) => {
  return (c>='a' && c<='z');
};

