#include "complex.h"
#include <cmath>
#include <iostream>

Complex2D::Complex2D() : x(0), y(0) {}

Complex2D::Complex2D(double real) : x(real), y(0) {}

Complex2D::Complex2D(double real, double imag) : x(real), y(imag) {}

Complex2D::Complex2D(const Complex2D& other) : x(other.x), y(other.y) {}

std::ostream& Complex2D::printOn(std::ostream& os) const {
   os << "(" << x << ", " << y << ")";
   return os;
}

void Complex2D::set_x(double real) {
   x = real;
}

void Complex2D::set_y(double imag) {
   y = imag;
}

void Complex2D::set_xy(double real, double imag) {
   x = real;
   y = imag;
}

double Complex2D::get_x() {
   return x;
}

double Complex2D::get_y() {
   return y;
}

double Complex2D::get_radius() const {
   return std::sqrt(x * x + y * y);
}

double Complex2D::get_theta() const {
   return std::atan2(y, x);
}

void Complex2D::scale(double factor) {
   x *= factor;
   y *= factor;
}

void Complex2D::rotate(double theta) {
   double real = x * std::cos(theta) - y * std::sin(theta);
   double imag = x * std::sin(theta) + y * std::cos(theta);
   x = real;
   y = imag;
}

Complex2D operator + (const Complex2D& a, const Complex2D& b) {
   return Complex2D(a.x + b.x, a.y + b.y);
}

Complex2D operator - (const Complex2D& a, const Complex2D& b) {
   return Complex2D(a.x - b.x, a.y - b.y);
}

Complex2D operator * (const Complex2D& a, const Complex2D& b) {
   return Complex2D(a.x * b.x - a.y * b.y, a.x * b.y + a.y * b.x);
}

Complex2D operator / (const Complex2D& a, const Complex2D& b) {
   double denom = b.x * b.x + b.y * b.y;
   return Complex2D((a.x * b.x + a.y * b.y) / denom, (a.y * b.x - a.x * b.y) / denom);
}

Complex2D Complex2D::get_bar() const {
   return Complex2D(x, -y);
}

Complex2D Complex2D::get_inverse() const {
   double denom = x * x + y * y;
   return Complex2D(x / denom, -y / denom);
}

bool operator < (const Complex2D& a, const Complex2D& b) {
   return a.x < b.x || (a.x == b.x && a.y < b.y);
}

bool operator > (const Complex2D& a, const Complex2D& b) {
   return a.x > b.x || (a.x == b.x && a.y > b.y);
}
