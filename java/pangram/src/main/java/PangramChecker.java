import java.lang.String;
import java.lang.StringBuilder;

public class PangramChecker {

    private static final String alphabet = "abcdefghijklmnopqrstuvwxyz";

    public boolean isPangram(String input) {
        StringBuilder builder = new StringBuilder();

        input = input.toLowerCase();
        for(int i=0; i<input.length(); i++){
            if(!contains(builder, input.charAt(i)))
                builder.append(input.charAt(i));
        }

        String letters = builder.toString();
        return containsAlphabet(letters);
    }

    private boolean contains(StringBuilder input, char c){
        if(c>='a' && c<='z'){
            for(int i=0; i<input.length(); i++){
                if(input.charAt(i) == c)
                    return true;
            }
            return false;
        } else {
            return true;
        }        
    }

    private boolean containsAlphabet(String str){
        for(int i=0; i<alphabet.length(); i++){
            if(!str.contains(String.valueOf(alphabet.charAt(i))))
                return false;
        }
        return true;
    }

}
