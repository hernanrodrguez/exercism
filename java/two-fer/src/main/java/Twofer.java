public class Twofer {
    public String twofer(String name) {
        String reply_name = "";
        if(name == null){
            reply_name = "you";
        } else {
            reply_name = name;
        }
        return("One for " + reply_name + ", one for me.");
    }
}
