// base actor object of the game
class Person {
  string p_name;

  public:

    float hunger = 1; // hunger ranges from 0 to 1; 0 being starving, 1 being full
    float health = 1; // health ranges from 0 to 1; 0 being dead, 1 being fully healthy

    Person(string name) {
      p_name = name;
    }

    void getName() {
      cout << p_name << endl;
    }

    void updateHunger(float u_hunger = -0.01) { // updates hunger value, will be called each tick and whenever character eats
      hunger += u_hunger;
    }

    void updateHealth(float u_health = 0) { // updates health values, will be called each tick and whenever character takes damage or heals
      health += u_health;
    }



}
