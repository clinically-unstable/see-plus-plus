/*Matthew Ren
3/18/2026
math cpp stuff
Mrs. Alblas*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    // question one
    double guru = pow(pow(pow(2, 3), 3), 3);   // 134217728
    double mason = sqrt(225);                 // 15
    double tri = 5.75 * (hypot(2.4, 2.4));    // 19.5
    double tri2 = (round(tri * 10)) / 10;    

    double ans[] = {guru, mason, -mason, tri2, 19.6};

    double answer;

    cout << "Adam has two errors in his code.\n";
    cout << "Gurusaran Sathish proceeds to edit the code and commit his changes to the main branch.\n";
    cout << "If Guru's errors scale exponentially by 3 per session, how many errors will the code have after Guru edits it three times?\n";

    cin >> answer;
// question two
    if (answer == int(ans[0])) {
        cout << "good job\n";
        cout << "if mason multiplied by himself is 225, what does mason equal\n";
        cin >> answer;

        while (answer != ans[1] && answer != ans[2]) {
            cout << "do it again pal\n";
            cin >> answer;
        }
// question three
        cout << "good job\n";
        cout << "If a right triangle with the degrees 45-45-90, what is the hypotenuse in feet if side A is equal to 2.4 Guru's and one Guru is equal to 5'9\n";
        cout << "round to the nearest inch\n";
        cin >> answer;


        while (fabs(answer - ans[3]) > 0.01 && fabs(answer - ans[4]) > 0.01) {
            cout << "do it again pal\n";
            cin >> answer;
        }

        cout << "good job\n";
    } else {
        cout << "bad job\n";
        cout << "the answer was " << int(ans[0]) << "\n";
    }

    return 0;
}
