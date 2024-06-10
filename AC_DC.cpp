#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
using namespace std;

class DC
{

    float voltage, current, resistence, capacitance, time;
    float e = 2.72;

public:
    void Inst_voltage(string &sub_type)
    {
        cout << "Enter max voltage : " << endl;
        cin >> voltage;
        cout << "Enter max capacitance : " << endl;
        cin >> capacitance;
        cout << "Enter max resistance : " << endl;
        cin >> resistence;
        cout << "Enter max time : " << endl;
        cin >> time;

        if (sub_type == "charging" || sub_type == " Charging")
        {
            cout << "Instantaneous voltage = ";
            cout << (voltage * (1 - powf(e, -time / resistence * capacitance)));
        }
        else
        {
            cout << "Instantaneous voltage = ";
            cout << (voltage * (powf(e, -time / resistence * capacitance)));
        }
    }
    void Inst_Current(string &sub_type)
    {
        cout << "Enter max voltage : " << endl;
        cin >> voltage;
        cout << "Enter max capacitance : " << endl;
        cin >> capacitance;
        cout << "Enter max resistance : " << endl;
        cin >> resistence;
        cout << "Enter max time : " << endl;
        cin >> time;

        if (sub_type == "charging" || sub_type == " Charging")
        {
            cout << "Instantaneous voltage = ";
            cout << (current * (1 - powf(e, -time / resistence * capacitance)));
        }
        else
        {
            cout << "Instantaneous voltage = ";
            cout << (current * (powf(e, -time / resistence * capacitance)));
        }
    }
    void intitial_max_current(string &sub_type)
    {
        cout << "Enter voltage : " << endl;
        cin >> voltage;
        cout << "Enter max capacitance : " << endl;
        cin >> capacitance;
        cout << "Enter max resistance : " << endl;
        cin >> resistence;
        cout << "max current value is : " << (voltage / resistence);
    }
    void time_constant(string &sub_type)
    {

        cout << "Enter max capacitance : " << endl;
        cin >> capacitance;
        cout << "Enter max resistance : " << endl;
        cin >> resistence;
        cout << "time constant : " << (resistence * capacitance);
    }
};

void DC_Data(string &sub_topic)
{

    int press;
    DC a;
    cout << " Choose your Question :" << endl
         << " 1. Instantaneous Voltage - Press 1 " << endl
         << " 2. Time Constant         - Press 2 " << endl
         << " 3. Intial max current    - Press 3 " << endl
         << " 4. Instanteneous Current - Press 4 " << endl
         << endl;
    cout << "Enter : ";
    cin >> press;
    cout << endl;

    if (press == 1)
    {
        a.Inst_voltage(sub_topic);
    }
    else if (press == 2)
    {
        a.time_constant(sub_topic);
    }
    else if (press == 3)
    {
        a.intitial_max_current(sub_topic);
    }
    else if (press == 4)
    {
        a.Inst_Current(sub_topic);
    }
    else
    {
        cout << "wrong input !" << endl;
    }
}

void chooseDCType()
{

    cout << "Choose your subtopic ( Charging or Discharging ) : ";
    string sub_topic;
    cin >> sub_topic;

    if (sub_topic == "Charging" || sub_topic == "charging")
    {
        DC_Data(sub_topic);
    }
    else if (sub_topic == "Discharging" || sub_topic == "discharging")
    {
        DC_Data(sub_topic);
    }
    else
    {
        cout << " wrong input " << endl;
    }
}

class Type
{
private:
    float z, Irms, Vrms, avg_pow, Xl, Xc, L, V_capacitor, V_inductor, currentT, voltageT, resistanceT, capacitanceT, phi1, time, max_voltageT, w1;

    /*
z: This variable is not explicitly defined in the provided code snippet. It seems to be unused.
Irms: Root Mean Square (RMS) Current.
Vrms: Root Mean Square (RMS) Voltage.
avg_pow: Average Power.
Xl: Inductive Reactance.
Xc: Capacitive Reactance.
L: Inductance.
V_capacitor: Voltage across the Capacitor.
V_inductor: Voltage across the Inductor.
currentT: Current (used in various contexts, such as total current).
voltageT: Voltage (used in various contexts, such as total voltage).
resistanceT: Total Resistance.
capacitanceT: Total Capacitance.
phi1: Phase Difference.
time: Time Period.
max_voltageT: Maximum Voltage.
w1: Angular Frequency.
    */
public:
    void sub_types(int a);
    void sub_circuits(int k);
    void Purely_resistive()
    {
        sub_types(1);
    }
    void Purely_inductive()
    {
        sub_types(2);
    }
    void Purely_capacitive()
    {
        sub_types(3);
    }
    void RL()
    {
        sub_circuits(1);
    }
    void RC()
    {
        sub_circuits(2);
    }
    void RLC()
    {
        sub_circuits(3);
    }
};

void Type ::sub_types(int a)
{
    cout << "Choose sub question :" << endl;
    cout << "1. Maximum current       - press 1" << endl;
    cout << "2. Instanteneous current - press 2" << endl;
    cout << "3. Average power         - press 3" << endl;
    cout << "4. Instanteneous power   - press 4" << endl;
    cout << "5. Power factor          - press 5" << endl;
    int select1;
    cout << "Enter : ";
    cin >> select1;

    if (select1 == 1)
    {
        cout << "Enter max voltage : ";
        cin >> max_voltageT;
        cout << "Enter resistance / inductive reactance / capacitive reactance : ";
        cin >> resistanceT;
        cout << "Maximum current = " << (max_voltageT / resistanceT) << endl;
    }
    else if (select1 == 2)
    {
        cout << "Enter max current : ";
        cin >> currentT;
        cout << "Enter angular frequency : ";
        cin >> w1;
        cout << "Enter time period : ";
        cin >> time;
        if (a == 1)
            cout << "Instanteneous current = " << (currentT * sinf(w1 * time)) << endl;
        if (a == 2)
            cout << "Instanteneous current = " << (currentT * sinf(w1 * time - 1.571)) << endl;
        if (a == 3)
            cout << "Instanteneous current = " << (currentT * sinf(w1 * time + 1.571)) << endl;
    }
    else if (select1 == 3)
    {
        if (a == 1)
        {
            cout << "Enter Vrms : ";
            cin >> Vrms;
            cout << "Enter Irms : ";
            cin >> Irms;
            cout << "Average power = " << (Vrms * Irms) << endl;
        }
        if (a == 2 || a == 3)
        {
            cout << "Average power = 0" << endl;
        }
    }
    else if (select1 == 4)
    {
        cout << "Enter Irms  : ";
        cin >> Irms;
        cout << "Enter Vrms : ";
        cin >> Vrms;
        cout << "Enter angular frequency : ";
        cin >> w1;
        cout << "Enter time period : ";
        cin >> time;
        if (a == 1)
        {
            cout << "Instanteneous Power = " << ((Vrms * Irms) * (cosf(w1 * time))) << endl;
        }
        if (a == 2)
        {
            cout << "Instanteneous Power = " << ((Vrms * Irms) * (cosf(w1 * time - 1.571))) << endl;
        }
        if (a == 3)
        {
            cout << "Instanteneous Power = " << ((Vrms * Irms) * (cosf(w1 * time + 1.571))) << endl;
        }
    }
    else if (select1 == 5)
    {
        if (a == 1)
            cout << "Power Factor = 1" << endl;
        if (a == 2 || a == 3)
            cout << "Power factor = 0" << endl;
    }
    else
    {
        cout << "wrong input !" << endl;
    }
}
void Type ::sub_circuits(int k)
{

    cout << "choose your subtopic :" << endl;
    cout << "Voltage accross resistance  Press 1" << endl;
    if (k == 1 || k == 3)
    {
        cout << "Volatage accross inductor  Press 2" << endl;
    }
    if (k == 2 || k == 3)
    {
        cout << "-> Volatage accross capacitor  Press 3" << endl;
    }
    cout << "-> Total voltage               Press 4" << endl;
    cout << "-> Average power               Press 5" << endl;
    cout << "-> Phase angle                 Press 6" << endl;
    if (k == 3)
    {
        cout << "Resonant frequency          Press 7\n ";
    }
    cout << endl;

    cout << "Enter : ";
    int select2;
    cin >> select2;

    if (select2 == 1)
    {
        cout << "Enter Current : ";
        cin >> currentT;
        cout << "Enter resistance : ";
        cin >> resistanceT;
        cout << "Voltage across resistance = " << (currentT * resistanceT) << endl;
    }
    else if (select2 == 2)
    {
        cout << "Enter current : ";
        cin >> currentT;
        cout << "Enter inductive reactance : ";
        cin >> Xl;
        cout << "Voltage across inductor = " << (currentT * Xl) << endl;
    }
    else if (select2 == 3)
    {
        cout << "Enter Current : ";
        cin >> currentT;
        cout << "Enter Capacitive reactance : ";
        cin >> Xc;
        cout << "Voltage across capacitor = " << (currentT * Xc) << endl;
    }
    else if (select2 == 4)
    {
        cout << "Enter Voltage across resistor : ";
        cin >> voltageT;
        if (k == 1 || k == 3)
        {
            cout << "Enter voltage across inductor : ";
            cin >> V_inductor;
        }
        else if (k == 2 || k == 3)
        {
            cout << "Enter voltage across capacitor : ";
            cin >> V_capacitor;
        }
        if (k == 1)
            cout << "Total Voltage Across RL circuit = " << sqrtf(powf(voltageT, 2) + powf(V_inductor, 2)) << endl;
        if (k == 2)
            cout << "Total Voltage Across RC circuit = " << sqrtf(powf(voltageT, 2) + powf(V_capacitor, 2)) << endl;
        if (k == 3)
            cout << "Total Voltage Across RLC circuit = " << sqrtf(powf(voltageT, 2) + powf((V_capacitor - V_inductor), 2)) << endl;
    }
    else if (select2 == 5)
    {
        cout << "Enter Vrms : ";
        cin >> Vrms;
        cout << "Enter Irms : ";
        cin >> Irms;
        cout << "Enter phase difference : ";
        cin >> phi1;
        cout << "Average power of circuit = " << ((Vrms * Irms) * cosf(phi1)) << endl;
    }
    else if (select2 == 6)
    {
        Xl = 0, Xc = 0;
        cout << "Enter resistance : ";
        cin >> resistanceT;
        if (k == 1 || k == 3)
        {
            cout << "Enter inductive reactance : ";
            cin >> Xl;
        }
        if (k == 2 || k == 3)
        {
            cout << "Enter capacitive reactance : ";
            cin >> Xc;
        }
        cout << "Phase angle is = " << atanf((Xl - Xc) / resistanceT) << endl;
    }
    else if (select2 == 7)
    {
        cout << "Enter capacitance : ";
        cin >> capacitanceT;
        cout << "Enter inductance : ";
        cin >> L;
        cout << "Resonant frequency is = " << (0.1592 / sqrtf(L * capacitanceT)) << endl;
    }
    else
    {
        cout << "wrong input!" << endl;
    }
}

class AC : Type
{

    float max_current, max_voltage, w, phase_d, time1, magnitude, angle, real, imaginary;

public:
    void avg_rms_current()
    {
        cout << "Enter max current :" << endl;
        cin >> max_current;

        cout << "average current :" << (0.637 * max_current) << endl;
        cout << "RMS current :" << (0.707 * max_current) << endl;
    }
    void avg_rms_voltage()
    {
        cout << "Enter max voltage :" << endl;
        cin >> max_voltage;

        cout << "average votage :" << (0.637 * max_voltage) << endl;
        cout << "RMS votage :" << (0.707 * max_voltage) << endl;
    }
    void inst_current()
    {
        cout << "Enter current :" << endl;
        cin >> max_current;
        cout << "Enter angular freq  :" << endl;
        cin >> w;
        cout << "Enter phase difference :" << endl;
        cin >> phase_d;
        cout << "Enter time period :" << endl;
        cin >> time1;

        cout << "Instanteneous Current = " << (max_current * sin(((w * time1) + ((3.14 / 180) * phase_d)))) << endl;
    }
    void inst_voltage()
    {
        cout << "Enter voltage :" << endl;
        cin >> max_voltage;
        cout << "Enter angular freq  :" << endl;
        cin >> w;
        cout << "Enter phase difference :" << endl;
        cin >> phase_d;
        cout << "Enter time period :" << endl;
        cin >> time1;

        cout << "Instanteneous Voltage = " << (max_voltage * sin(((w * time1) + ((3.14 / 180) * phase_d)))) << endl;
    }
    void types()
    {
        int select;
        string tell = "yes";

        while (tell == "yes")
        {
            cout << endl;
            cout << "Choose the type of circuit :" << endl;
            cout << "1. Purely resistive  - Press 1" << endl;
            cout << "2. Purely inductive  - Press 2" << endl;
            cout << "3. Purely capacitive - Press 3" << endl;
            cout << "4. RL circuit        - Press 4" << endl;
            cout << "5. RC circuit        - Press 5" << endl;
            cout << "6. RLC circuit       - Press 6" << endl;
            cout << "7. Exit              - Press 7" << endl;
            cout << endl;

            cout << "Enter :";
            cin >> select;
            cout << endl;

            if (select == 1)
            {
                this->Purely_resistive();
            }
            else if (select == 2)
            {
                this->Purely_inductive();
            }
            else if (select == 3)
            {
                this->Purely_capacitive();
            }
            else if (select == 4)
            {
                this->RL();
            }
            else if (select == 5)
            {
                this->RC();
            }
            else if (select == 6)
            {
                this->RLC();
            }
            else if (select == 7)
            {
                tell="NO";
            }
            else
            {
                cout << "wrong input" << endl;
            }
        }
    }
};

void AC_Data()
{

    int press;
    cout << "Choose your question ->" << endl;
    cout << "1. avg, rms current Press 1 :" << endl;
    cout << "2. avg, rms voltage Press 2 :" << endl;
    cout << "3. Instantanious current Press 3 :" << endl;
    cout << "4. Instantanious voltage Press 4 :" << endl;
    cout << "5. Circiur types  Press 5 :" << endl;
    cout << "Enter :";

    cin >> press;

    AC a;

    if (press == 1)
    {
        a.avg_rms_current();
    }
    else if (press == 2)
    {
        a.avg_rms_voltage();
    }
    else if (press == 3)
    {
        a.inst_current();
    }
    else if (press == 4)
    {
        a.inst_voltage();
    }
    else if (press == 5)
    {
        a.types();
    }
    else
    {
        cout << "wrong input !" << endl;
    }
}

int main()
{

    string name;
    string note = "yes";
    cout << endl;
    cout << "<<< Welcome to AC-DC Circuit Assistant >>>" << endl
         << endl
         << " Which circuit do you want to explore ?" << endl
         << endl
         << " Enter your choice ( AC or DC ) :";
    cin >> name;
    cout << endl;
    while (note == "yes")
    {
        if ((name == "DC" || name == "dc"))
        {

            chooseDCType();
            cout << endl;
            cout << "Do you have more questions about DC ? : ";
            cin >> note;
            cout << endl;
        }
        if ((name == "AC" || name == "ac"))
        {

            AC_Data();
            cout << endl;
            cout << "Do you have more questions about AC ? : ";
            cin >> note;
            cout << endl;
        }
    }
    if (note == "No" || note == "no")
    {

        cout << "Thanks!!" << endl;
    }
    else
    {

        cout << "wrong input!" << endl;
    }
}
