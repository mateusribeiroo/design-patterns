package java.behavior.strategy.src.entities;
public class MallardDuck extends Duck{
    public MallardDuck(FlyWithWings fw, Quack quack){
        super(fw, quack);
    }

    public void display(){
        System.out.println("Hi, im a Mallard Duck");
    }
}