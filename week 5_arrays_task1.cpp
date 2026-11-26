#include <iostream>
using namespace std;

int main() {
    // PART 1: 1D ARRAY - WEEKLY REVENUE TRACKER
    
    double revenue[7];
    double totalRevenue = 0.0;
    double averageRevenue = 0.0;
    

    string days;

    cout<<"===== WEEKLY REVENUE TRACKER ====="<<endl;
    	cout<<"name:TABITHA KIMANI:"<<endl;
	cout<<"REG.NO:CT101/G/26591/25:"<<endl;
    
    for (int i = 0; i < 7; i++) {
        cout <<"Enter revenue for:"<< days[i]<< ":ksh";
        cin >> revenue[i];
        
        while (revenue[i] < 0) {
            cout<<"Revenue cannot be negative.Please re-enter:$"<<endl;;
            cin>>revenue[i];
        }
        
        totalRevenue += revenue[i];
    }
    
    averageRevenue = totalRevenue / 7.0;
    
    cout << "--- Weekly Summary ---" << endl;
    cout << "Total Weekly Revenue:ksh"<< totalRevenue << endl;
    cout << "Average Daily Revenue:ksh"<< averageRevenue << endl;


    // PART 2: 2D ARRAY - ROOM OCCUPANCY (ONE BRANCH)
    
    
    int occupancy[5][10];
    int occupied, vacant;

    cout <<"===== ROOM OCCUPANCY - ONE BRANCH =====" << endl;


    for (int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        cout << "Floor "<< i + 1 << " Occupancy Status:"<< endl;

        for (int j = 0; j < 10; j++) {

            if (occupancy[i][j] == 1) {
                occupied++;
            } else {
                vacant++;
            }

        }

        cout << "  -> Occupied rooms: " << occupied << endl;
        cout << "  -> Vacant rooms:   " << vacant << endl;
    }



    //PART 3: 3D ARRAY - MULTIPLE BRANCHES
    
    
    int chain[3][5][10];
    int totalOccupiedChain = 0;
    

    cout << "\n===== MULTIPLE BRANCHES OCCUPANCY =====" << endl;

    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 5; j++) { 
            for (int k = 0; k < 10; k++) { 

                if (chain[i][j][k] == 1) {
                    totalOccupiedChain++;
                }
            }
        }
    }

    cout << "\nTotal occupied rooms across all 3 branches: " << totalOccupiedChain << endl;
    cout << "Total rooms available (3 branches * 5 floors * 10 rooms): 150" << endl;

    double occupancyRate = (static_cast<double>(totalOccupiedChain) / 150.0) * 100.0;
    cout << "Overall Occupancy Rate:"<< occupancyRate << "%" << endl;

    return 0;
}