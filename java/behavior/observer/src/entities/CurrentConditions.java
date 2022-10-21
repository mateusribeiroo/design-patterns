package entities;

import interfaces.Display;
import interfaces.Observer;

public class CurrentConditions implements Observer, Display{
    private WeatherData weatherData;
    private float pressure;
    private float temperature;
    private float humidity;

    public CurrentConditions(WeatherData wd){
        wd.registerObserver(this);
    }

    public void update(float pressure, float humidity, float temperature){
        this.pressure = pressure;
        this.humidity = humidity;
        this.temperature = temperature;
        display();
    }

    public void display(){
        System.out.println("displaying");
    }
}
