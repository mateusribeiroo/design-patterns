package classes;
import interfaces.FlyBehavior;

public class FlyNoWay implements FlyBehavior{
    public void fly(){
        System.out.println("Cannot fly");
    }
}
