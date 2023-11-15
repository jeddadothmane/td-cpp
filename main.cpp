#include "complex.h"
#include <iostream>
#include <cmath>

int main() {

   Complex2D complex1(3.0, 4.0);
   Complex2D complex2(1.0, 2.0);

   cout << "Complex1: ";
   complex1.printOn(cout) << endl;
   cout << "Complex2: ";
   complex2.printOn(cout) << endl;

   // Perform some operations
   Complex2D complex3 = complex1 + complex2;
   cout << "Complex3 (Complex1 + Complex2): ";
   complex3.printOn(cout) << endl;

   Complex2D complex4 = complex1 - complex2;
   cout << "Complex4 (Complex1 - Complex2): ";
   complex4.printOn(cout) << endl;

   Complex2D complex5 = complex1 * complex2;
   cout << "Complex5 (Complex1 * Complex2): ";
   complex5.printOn(cout) << endl;

   Complex2D complex6 = complex1 / complex2;
   cout << "Complex6 (Complex1 / Complex2): ";
   complex6.printOn(cout) << endl;

   // Get the radius and theta of the complex numbers
   cout << "Radius of Complex1: " << complex1.get_radius() << endl;
   cout << "Theta of Complex1: " << complex1.get_theta() << endl;

   // Perform some other operations
   complex1.scale(2.0);
   cout << "Complex1 after scaling: ";
   complex1.printOn(cout) << endl;

   complex1.rotate(M_PI / 2);
   cout << "Complex1 after rotation: ";
   complex1.printOn(cout) << endl;

   Complex2D complex7 = complex1.get_bar();
   cout << "Complex7 (bar of Complex1): ";
   complex7.printOn(cout) << endl;

   Complex2D complex8 = complex1.get_inverse();
   cout << "Complex8 (inverse of Complex1): ";
   complex8.printOn(cout) << endl;

   return 0;
}
