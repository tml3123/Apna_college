/* Question2:
Enter cost of 3 items from the user(using float datatype)-a pencil,a pen and an eraser.
You have to out put the total cost of the items back to the user as their bill.
(Addon:You can also try adding 18% GST tax total items in the bill as an advanced problem)*/

#include <iostream>
using namespace std;
int main()
{

    float pen, pencil, eraser;
    float gst_rate = 18;
    cout << "enter the amount of pen"
         << endl;
    cin >> pen;
    cout << "enter the amount of pencil"
         << endl;
    cin >> pencil;

    cout << "enter the amount of eraser"
         << endl;
    cin >> eraser;

    float pen_with_tax = pen * (gst_rate / 100);
    float pencil_with_tax = pencil * (gst_rate / 100);
    float eraser_with_tax = eraser * (gst_rate / 100);

    float total_item_with_tax = (pen_with_tax + pencil_with_tax + eraser_with_tax);
    cout << "total gst of items= " << total_item_with_tax << endl;

    float total_amount_of_items = (pen + pencil + eraser);
    cout << "Actuall amount of items" << total_amount_of_items << endl;

    float overall_amount = (total_amount_of_items + total_item_with_tax);

    cout << "overall amount = " << overall_amount << endl;

    return 0;
}