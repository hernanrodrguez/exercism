import java.lang.Math;

class Darts {

    private double x;
    private double y;

    Darts(double x, double y) {
        this.x = x;
        this.y = y;
    }

    int score() {
        double dist = Math.sqrt(x*x + y*y);
        if(dist>10)
            return 0;
        else if(dist>5)
            return 1;
        else if(dist>1)
            return 5;
        else
            return 10;
    }

}
