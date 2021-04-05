//
// This is only a SKELETON file for the 'Bob' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export const hey = (message) => {
  if(is_empty(message))
    return "Fine. Be that way!";
  else {
    if(is_question(message)){
      if(is_yell(message))
        return "Calm down, I know what I'm doing!";
      else 
        return "Sure.";
    } else {
      if(is_yell(message))
        return "Whoa, chill out!";
      else 
        return "Whatever.";
    }
  }
};

export const is_question = (message) => {
  let str = message.trim();
  return str[str.length-1] == '?';
};

export const is_yell = (message) => {
  for(let c of message){
    if(c>='a' && c<='z')
      return false;
  }
  for(let c of message){
    if(c>='A' && c<='Z')
      return true;
  }
  return false;
};

export const is_empty = (message) => {
  return (message.length === 0 || !message.trim());
};




