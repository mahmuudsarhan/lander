#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

void clearScrean() {
#ifdef _WIN32
    system("cls");
#else 
    system("clear");
#endif
}

void drawgauge(string label, double value, double maxVal, string unit) {
    const int barWidth = 20;
    double percentage = value / maxVal;
    if (percentage > 1.0) percentage = 1.0;
    if (percentage < 0.0) percentage = 0.0;
    
    if (label == "FUEL" && percentage < 0.2){
        cout << "\033[1;31m";
    } else {
        cout << "\033[1;32m";
    } cout << "\033[0m";

    int progress = static_cast<int>(barWidth * percentage);
    cout << left << setw(12) << label << " [";
    for (int i = 0; i < barWidth; ++i) {
        if (i < progress) cout << "#";
        else cout << " ";
    }
    cout << "] " << value << " " << unit << "\n";
    
}

int main() {
    double myAltitude = 1000.0;
    double myVelocity = 50.0;
    double fuel = 150.0;
    double gravity = 1.62;
    int timePassed = 0;
    double PlayerBurn = 0.0;

    clearScrean();

    cout << "==================================================\n";
    cout << "                 WELCOME TO MY GAME               \n";
    cout << "==================================================\n";
    cout << "You must land with a speed less than 5 (obviously)\n";
    cout << "Type a number and hit enter if you want to play\n";

    double startInput;
    if (!(cin >> startInput)) return 0;

    while (myAltitude > 0) {
        timePassed += 1;
        cout << "\n===========================================\n";
        cout << "Time PAST: " << timePassed << " seconds\n"; 
        cout << "=============================================\n";

        drawgauge("ALTITUDE", myAltitude, 1000.0, "meters");
        drawgauge("SPEED", myVelocity, 100.0, "m/s");
        drawgauge("FUEL", fuel, 150.0, "liters");
        cout << "---------------------------------------------\n";

        if (fuel > 0) {
            cout << "How much fuel do you want to burn (0 to 20): ";
            cin >> PlayerBurn;

            if (PlayerBurn < 0) PlayerBurn = 0;
            if (PlayerBurn > 20) PlayerBurn = 20;
            if (PlayerBurn > fuel) PlayerBurn = fuel;

            fuel -= PlayerBurn;
        } else {
            cout << "You are out of fuel, dude (Press Enter to drop) \n";
            PlayerBurn = 0;
        }
    
        double thrustForce = PlayerBurn * 0.4;
        double acceleration = gravity - thrustForce;
        myVelocity += acceleration;
        myAltitude -= myVelocity;

        if (myAltitude > 2000.0) {
            cout << "\033[1;31m You are lost in space, Game Over \033[0m\n";
        }
    }
    clearScrean();
    cout << "==================================================\n";
    cout << "              Your Final Reuslts                  \n";
    cout << "==================================================\n";
    cout << "Final Speed: " << myVelocity << " m/s\n";
    cout << "Fuel Left :" << fuel << " liters\n\n";

    if (myVelocity <= 5.0) {
        cout << "YOU WIN!!!!!!!";
    } else {
        cout << "Loser, you crashed like kaboom";
    }
    cout << "===================================================\n";

    return 0;
}

