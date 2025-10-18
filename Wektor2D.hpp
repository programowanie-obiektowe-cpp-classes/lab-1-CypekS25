class Wektor2D
{
private:
    // Wspó³rzêdne wektora
    double x;
    double y;

public:
    // Konstruktor domyœlny – ustawia [0,0]
    Wektor2D()
    {
        x = 0.0;
        y = 0.0;
    }

    // Konstruktor z parametrami – ustawia [x, y]
    Wektor2D(double x_, double y_)
    {
        x = x_;
        y = y_;
    }

    // Settery
    void setX(double val) { x = val; }
    void setY(double val) { y = val; }

    // Gettery
    double getX() const { return x; }
    double getY() const { return y; }

    // Operator dodawania dwóch wektorów
    Wektor2D operator+(const Wektor2D& other) const { return Wektor2D(x + other.x, y + other.y); }

    // Operator iloczynu skalarnego
    double operator*(const Wektor2D& other) const { return x * other.x + y * other.y; }
};
