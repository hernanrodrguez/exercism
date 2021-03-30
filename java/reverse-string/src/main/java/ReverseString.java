class ReverseString {

    String reverse(String inputString) {
        StringBuilder outputString = new StringBuilder(inputString);
        outputString = outputString.reverse();        
        return outputString.toString();
    }
  
}
