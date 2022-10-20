package java.behavior.strategy.src.entities;
public class Duck implements IDuck{
    public FlyBehavior flyBehavior;
    public QuackBehavior quackBehavior;

    public Duck(FlyBehavior fb, QuackBehavior qb){
        flyBehavior = fb;
        quackBehavior = qb;
    }

    public void performFly(){
        flyBehavior.fly();
    }

    public void performQuack(){
        quackBehavior.quack();
    }

    public void setFlyBehavior(FlyBehavior fb){
        flyBehavior = fb;
    }

    public void setQuackBehavior(QuackBehavior qb){
        quackBehavior = qb;
    }

    @Override
    public void display(){
        System.out.println("Hi, im a normal duck");
    }

    @Override
    public void swin(){
        System.out.println("Swimming");
    }
}