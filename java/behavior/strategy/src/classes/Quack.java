package classes;
import interfaces.QuackBehavior;

public class Quack implements QuackBehavior{
    public void quack(){
        System.out.println("Quacking");
    }
}