import java.io.*;
import java.lang.Math;

class ArmstrongNumbers {

    boolean isArmstrongNumber(int numberToCheck) {
        int exp = getNumLength(numberToCheck);
        return numberToCheck == getArmstrongNumber(numberToCheck, exp);
    }

    int getNumLength(int num){
        int ret = 0;
        double aux = num;
        while(aux > 1){
            aux = aux/10;
            ret++;
        }
        return ret;
    }

    int getArmstrongNumber(int num, int exp){
        int arm = 0;
        double aux = num;
        while(aux > 1){
            arm += Math.pow((int)(aux%10), exp);
            aux = aux/10;
        }
        return arm;
    }

}
