import java.util.*;

class ProteinTranslator {

    List<String> translate(String rnaSequence) {
        int i=0;
        boolean flag = true;
        String subRna = "";
        List<String> ret = new ArrayList<>();  

        while(flag){
            try{
                subRna = rnaSequence.substring(i, i+3);
            }catch(Exception e){
                flag = false;
            }
            if(flag){
                String protein = toProtein(subRna);
                if(protein != "")
                    ret.add(protein);
                else
                    flag = false;
            }
            i+=3;           
        }
        return ret;
    }

    String toProtein(String codon){
        switch(codon){
            case "AUG":
                return "Methionine";            
            case "UUU":
            case "UUC":
                return "Phenylalanine";
            case "UUA":
            case "UUG":
                return "Leucine";
            case "UCU":
            case "UCC":
            case "UCA":
            case "UCG":
                return "Serine";
            case "UAU":
            case "UAC":
                return "Tyrosine";
            case "UGU":
            case "UGC":
                return "Cysteine";
            case "UGG":
                return "Tryptophan";
            default:
                return "";
        }
    }
}