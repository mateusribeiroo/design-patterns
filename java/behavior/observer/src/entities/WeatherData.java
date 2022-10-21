package entities;
import interfaces.Suject;
import java.util.ArrayList;
import interfaces.Observer;

public class WeatherData implements Suject{
    private float temperature;
    private float pressure;
    private float humidity;
    private ArrayList<Observer> observers;

    public WeatherData(){
        observers = new ArrayList<Observer>();
    }

    public void registerObserver(Observer o){
        observers.add(o);
    }

    public void removeObserver(Observer o){
        if(observers.indexOf(o) > 0){
            observers.remove(o);
            return;
        }
        return;
    }

    public void notifyOberservers(){
        for(int i = 0; i < observers.size(); i++){
            Observer observer = (Observer)observers.get(i);
            observer.update(pressure, humidity, temperature);
        }
    }

    public void measurementsChanged(){
        notifyOberservers();
    }

    public void setMeasurements(float pressure, float humidity, float temperature){
        this.humidity = humidity;
        this.pressure = pressure;
        this.temperature = temperature;
        measurementsChanged();
    }
}
