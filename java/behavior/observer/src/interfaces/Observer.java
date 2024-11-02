package interfaces;

import entities.WeatherData;

public interface Observer {
    public void update(float pressure, float humidity, float temperature);
    public void update(WeatherData wd, Object args);
    public void unregister();
}
