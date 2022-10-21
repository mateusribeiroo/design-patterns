import { FlyBehavior } from "./interfaces/QuackBehavior";

export class FlyNoWay:FlyBehavior{
    public fly(){
        console.log("I can't fly");
    }
}