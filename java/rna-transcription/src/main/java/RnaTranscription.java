import java.io.*;

class RnaTranscription {

    String transcribe(String dnaStrand) {
        StringBuilder rnaStrand = new StringBuilder();
        for(int i=0; i<dnaStrand.length(); i++){
            rnaStrand.append(dnaToRna(dnaStrand.charAt(i)));
        }
        return rnaStrand.toString();
    }

    char dnaToRna(char c){
        switch(c){
            case 'C':
                return 'G';
            case 'G':
                return 'C';
            case 'T':
                return 'A';
            case 'A':
                return 'U';
            default:
                return '\0';
        }
    }

}
