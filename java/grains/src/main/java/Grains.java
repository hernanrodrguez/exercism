import java.math.BigInteger;
import java.math.BigDecimal;
import java.lang.Math;

class Grains {

    private static final BigInteger two = BigInteger.valueOf(2);

    BigInteger grainsOnSquare(final int square) {
        if(square>0 && square<65){
            return two.pow(square-1);
        } else {
            throw new IllegalArgumentException("square must be between 1 and 64");
        }
    }

    BigInteger grainsOnBoard() {
        return two.pow(64).add(BigInteger.valueOf(-1));
    }

}
