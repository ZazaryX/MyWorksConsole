#include <iostream> 
#include <string>
using namespace std;

int UserInput;
void ChoiceWeapon();
void ChoiceSolider();

class Solider {
private:
    string name;
    int age;
    string army;
    int ID;
public:
    Solider(string nameSolider, int ageSolider, string armySolider, int IDSolider) {
        name = nameSolider;
        age = ageSolider;
        army = armySolider;
        ID = IDSolider;
    }
    void InfoSolider() {
        cout << "Имя: " << name << "\n" << "Возраст: " << age << "\n" << "Армия: " << army << "\n" << "ID-Солдата: " << ID << endl;
        cout << "---------------" << endl;
    }
};

class Weapon {
private:
    int ammo;
    string name;
    int IDweapon;
public:
    Weapon(int AmmoWeapon, string WeaponName, int ID) {
        ammo = AmmoWeapon;
        name = WeaponName;
        IDweapon = ID;
    }

    void InfoWeapons() {
        cout << "---------------" << endl;
        cout << "Название оружия: " << name << "\n" << "Сколько патронов: " << ammo << "\n" << "Айди оружия: " << IDweapon << endl;
        cout << "---------------" << endl;
    }
};

int main() {
    setlocale(LC_ALL, "RU");
    Solider Dima("Дима", 26, "Морские войска", 1);;
    Dima.InfoSolider();

    Solider Vadim("Вадим", 30, "Ракетные войска", 2);
    Vadim.InfoSolider();

    Solider Nikita("Никита", 20, "Танковые войска", 3);
    Nikita.InfoSolider();
    cout << "Выберите солдата по айди: " << endl;
    ChoiceSolider();

    Weapon AK_47(35, "AK-47", 1);
    AK_47.InfoWeapons();

    Weapon SNDK(45, "СДК", 2);
    SNDK.InfoWeapons();

    Weapon SND14_1C(25, "СВЛК-14С", 3);
    SND14_1C.InfoWeapons();
    cout << "Выберите оружие по айди: " << endl;
    ChoiceWeapon();
    return 0;
}

void ChoiceSolider() {
    cin >> UserInput;
    switch (UserInput) {
    case 1:
        cout << "Вы выбрали Диму, а теперь выберите оружие" << endl;

        break;
    case 2:
        cout << "Вы выбрали Вадима, а теперь выберите оружие" << endl;
        break;
    case 3:
        cout << "Вы выбрали Никиту, а теперь выберите оружие" << endl;
        break;
    default:
        cout << "Нету такого солдата, попробуйте ещё раз." << endl;
        break;
    }
}
void ChoiceWeapon() {
    cin >> UserInput;
    switch (UserInput) {
    case 1:
        cout << "Вы выбрали AK-47, вы готовы?" << endl;
        cout << "1 - Да || 2 - Нет" << endl;
        cin >> UserInput;
        if (UserInput == 1)
        {
            cout << "Готовьтесь к бою!";
            break;
        }
        if (UserInput == 2) {
            cout << "В следующий раз!";
            break;
        }
    case 2:
        cout << "Вы выбрали СДК, вы готовы?" << endl;
        cout << "1 - Да || 2 - Нет" << endl;
        cin >> UserInput;
        if (UserInput == 1)
        {
            cout << "Готовьтесь к бою!";
            break;
        }
        if (UserInput == 2) {
            cout << "В следующий раз!";
            break;
        }
    case 3:
        cout << "Вы выбрали СВЛК-14С, вы готовы?" << endl;
        cout << "1 - Да || 2 - Нет" << endl;
        cin >> UserInput;
        if (UserInput == 1)
        {
            cout << "Готовьтесь к бою!";
            break;
        }
        if (UserInput == 2) {
            cout << "В следующий раз!";
            break;
        }
    default:
        cout << "Не понятное оружие, попробуйте ещё раз." << endl;
        break;
    }
}




