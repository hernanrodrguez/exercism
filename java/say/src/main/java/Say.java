class Say {

    private static final String[] numbers = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eigth", "nine", 
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
    };

    private static final String[] units = {
        "", "one", "two", "three", "four", "five", "six", "seven", "eigth", "nine"
    };

    private static final String[] decades = {
        "", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
    };
    
    String say(long number){
        if(number == 0)
            return "zero";
        else if(number < 0 || number > 999999999999L)
            throw new IllegalArgumentException();
        else{
            StringBuilder ret = new StringBuilder();
            StringBuilder str_number = new StringBuilder(String.valueOf(number));
            int length = str_number.length();
            str_number.reverse();
            while(length<12){
                str_number.append("0");
                length++;
            }
            for(int i=length-1; i>0; i--){
                int index = str_number.charAt(i)-'0';
                if(i==2 || i==5 || i==8 || i==11){
                    ret.append(compose_number(str_number.substring(i-2, i+1)));

                    if(i==5 && !str_number.substring(i-2, i+1).equals("000")){
                        ret.append("thousand");
                    }
                    else if(i==8 && !str_number.substring(i-2, i+1).equals("000")){
                        ret.append("million");
                    }
                    else if(i==11 && !str_number.substring(i-2, i+1).equals("000")){
                        ret.append("billion");
                    }
                }             
            }     
            return ret.toString().trim();   
        }
    }    

    String compose_number(String number){
        StringBuilder ret = new StringBuilder();
        int num = Integer.parseInt(new StringBuilder().append(number.charAt(2)).append(number.charAt(1)).append(number.charAt(0)).toString());
        if(num > 99){
            ret.append(" ").append(units[num/100]).append(" hundred");
        }
        num = num - (num/100)*100;
        if(num > 19){
            ret.append(" ").append(decades[num/10]);
            if(num%10 != 0)
                ret.append("-");
            ret.append(units[num%10]);
        } else if(num!=0){
            ret.append(" ").append(numbers[num]);
        } 
        if(ret.length() > 0)
            return ret.append(" ").toString();
        else 
            return "";
    }
}