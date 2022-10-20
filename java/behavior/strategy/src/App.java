import classes.FlyWithRocket;
import classes.FlyWithWings;
import classes.Quack;
import entities.MallardDuck;

public class App {
    public static void main(String[] args) throws Exception {
        FlyWithWings fw = new FlyWithWings();
        Quack quack = new Quack();
        FlyWithRocket flyWithRocket = new FlyWithRocket();
        MallardDuck mallard = new MallardDuck(fw, quack);

        mallard.display();
        mallard.performFly();
        mallard.performQuack();
        mallard.swin();

        mallard.setFlyBehavior(flyWithRocket);
        mallard.performFly();
    }
}
