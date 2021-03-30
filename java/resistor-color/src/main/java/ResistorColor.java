class ResistorColor {

    private String[] colors_arr = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

    int colorCode(String color) {
        for(int i=0; i<colors_arr.length; i++){
            if(colors_arr[i] == color)
                return i;
        }
        return -1;
    }

    String[] colors() {
        return colors_arr;
    }
}
