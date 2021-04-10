class NaturalNumber {
    
    private int number;

    public NaturalNumber(int num){
        if(num > 0)
            this.number = num;
        else 
            throw new IllegalArgumentException("You must supply a natural number (positive integer)");
    }

    public Classification getClassification(){
        int sum=0;
        for(int i=1; i<this.number; i++){
            if(this.number%i == 0)
                sum+=i;
        }
        if(sum == this.number)
            return Classification.PERFECT;
        if(sum > this.number)
            return Classification.ABUNDANT;
        else
            return Classification.DEFICIENT;
    }

}
