import java.util.*;

class HandshakeCalculator {

    List<Signal> calculateHandshake(int number) {
        List<Signal> ret = new ArrayList<>();  
        if((number & 1) == 1)
            ret.add(Signal.WINK);
        if((number & 2) == 2)
            ret.add(Signal.DOUBLE_BLINK);
        if((number & 4) == 4)
            ret.add(Signal.CLOSE_YOUR_EYES);
        if((number & 8) == 8)
            ret.add(Signal.JUMP);
        if((number & 16) == 16)
            Collections.reverse(ret);
        return ret;
    }

}
