#define ON 1
#define OFF 0
#define unsigned short int WORD

int event;
float time;
float timeE1;
float timeE2;
float timeE3;
float timeE4;
float timeE5;

// other variables
float t;
float t1;
float t2;
float t3;
float velocityMis;
float heightMis;
float uk;
float ts;
float control;
float S1tailoffCheck;
float timeE;

void init() {
    event = 1;
    time = 0.0;
    timeE1 = 0.0;
    timeE2 = 0.0;
    timeE3 = 0.0;
    timeE4 = 0.0;
    timeE5 = 0.0;

    // other variables initialization
    t = 0.0;
    t1 = 0.0;
    t2 = 0.0;
    t3 = 0.0;
    velocityMis = 0.0;
    heightMis = 0.0;
    uk = 0.0;
    ts = 0.0;
    control = 0.0;
    S1tailoffCheck = 0.0;
    timeE = 0.0;
}

void interface() {
    t = ;
    t1 = ;
    t2 = ;
    t3 = ;
    velocityMis = ;
    heightMis = ;
    uk = ;
    ts = ;
    control = ;
    S1tailoffCheck = ;
    timeE = ;
}

int main() {
    WORD dopNos[10];

    switch(event) {
        case 1:
            if (t < 6 || t1 += 2 || t += 12) {
                dopNos[0] = "A2";
                dopNos[1] = "A6";
                func(bus_2, ss6, dopNos, 2, OFF);
                timeE1 = time;
                event = 2;
            }
            break;

        case 2:
            ts = 0;
            if (time > timeE1 + 0.200 && velocityMis > 15.0 || heightMis > 10.0) {
                dopNos[0] = "A7";
                dopNos[1] = "A4";
                func(bus_1, ss4, dopNos, 2, ON);
                timeE2 = time;
                event = 3;
            }
            break;

        // And so on for more events...
        default:
            break;
    }
}
