package interfaces;

public interface Suject {
    public void registerObserver(Observer o);
    public void removeObserver(Observer o);
    public void notifyOberservers();
}
