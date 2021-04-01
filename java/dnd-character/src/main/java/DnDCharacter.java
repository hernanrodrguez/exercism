import java.util.Random;
import java.lang.Math;

class DnDCharacter {

    private int strength;
    private int dexterity;
    private int constitution;
    private int intelligence;
    private int wisdom;
    private int charisma;

    public DnDCharacter(){
        this.strength       = ability();
        this.dexterity      = ability();
        this.constitution   = ability();
        this.intelligence   = ability();
        this.wisdom         = ability();
        this.charisma       = ability();
    }

    int ability(){
        int sum = 0;
        int min = 10;
        int values[] = new int[4];
        Random rand = new Random();
        
        for(int i=0; i<4; i++){
            values[i] = rand.nextInt(6)+1;     
            if(values[i] < min)
                min = values[i]; 
        }

        for(int i=0; i<4; i++)
            sum += values[i];
        
        return sum-min;
        
    }

    int modifier(int input) {
        return (int) Math.floor((input-10)/2.0);
    }

    int getStrength() {
        return this.strength;
    }

    int getDexterity() {
        return this.dexterity;
    }

    int getConstitution() {
        return this.constitution;
    }

    int getIntelligence() {
        return this.intelligence;
    }

    int getWisdom() {
        return this.wisdom;
    }

    int getCharisma() {
        return this.charisma;
    }

    int getHitpoints() {
        return 10 + modifier(this.constitution);
    }

}
