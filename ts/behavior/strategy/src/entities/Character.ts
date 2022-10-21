export class Character{
    fightBehavior = WeaponBehavior();
    public performFight(){
        fightBehavior.fight();
    };
    
    public setWeapon(wb: WeaponBehavior){
        fightBehavior = wb;
    }
}