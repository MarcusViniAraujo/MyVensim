#include "unit_flow.h"
#include "unit_model.h"
#include "unit_system.h"

int main()
{
    run_unit_test_model();
    cout << "\nModel tests passed!\n" << endl;

    run_unit_test_system();
    cout << "System tests passed!\n" << endl;

    run_unit_test_flow ();
    cout << "Flow tests passed!\n" << endl;


    cout << "All tests passed!\n" << endl;
}