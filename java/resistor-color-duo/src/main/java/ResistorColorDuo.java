class ResistorColorDuo {

    private String[] colors_arr = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};

    int value(String[] colors) {
        return (colorCode(colors[0])*10 + colorCode(colors[1]));

    }

    int colorCode(String color) {
        for(int i=0; i<colors_arr.length; i++){
            if(colors_arr[i] == color)
                return i;
        }
        return -1;
    }
}
