import java.util.Map;
import java.util.HashMap;
import java.util.function.*;
import java.security.SecureRandom;


public class Lambdastest {
    public static void main(String[] args){
       // Lambda declaration syntax

       // zero or more parameters -> expressio body or statment block

       Map<String, String> planets = new HashMap<>();

       planets.put("Mercury","87.969");
       planets.put("Venus","224.7");
       planets.put("Earth","365.25");
       planets.put("Mars","687");
       planets.put("Jupiter","4,332.59");
       planets.put("Staturn","10,759");
       planets.put("Uranus","30,688");
       planets.put("Neptune","60,182");


       Supplier<String> numPlanets = () -> Integer.toString(planets.size());
       System.out.format("Number of Planets :%s\n\n",numPlanets.get());

    //    planets.keySet().forEach(p -> System.out.format("%s\n",p));

       for ( String planet : planets.keySet()){
        System.out.format("%s\n",planet);
       }



    }
}