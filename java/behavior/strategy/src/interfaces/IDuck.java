package java.behavior.strategy.src.interfaces;
public interface IDuck{
    public void performFly();
    public void performQuack();
    public void swin();
    public void display();
    public void setFlyBehavior(FlyBehavior fb);
    public void setQuackBehavior(QuackBehavior qb);
}