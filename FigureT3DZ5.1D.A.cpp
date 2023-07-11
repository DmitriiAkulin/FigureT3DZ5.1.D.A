// FigureT3DZ5.1.D.A

#include <iostream>
#include <windows.h>



class Figure {
          protected:
             int _side_count;
             std::string  name = "фигура:\t\t ";

             Figure(int _side_count): _side_count(_side_count){}

          public:
            Figure():Figure(0){}
            int get_sides_count(){return _side_count;}          
            std::string get_name(){return name;}
};

class Triangle : public Figure {
         
             Triangle(int _side_count) : Figure(3) { name = "треугольник:\t ";}
             
         public:
             Triangle():Triangle(_side_count){}
};

class Quadrangle : public Figure {         
             
             Quadrangle(int _side_count) : Figure(4) {name = "четырехугольник: ";}
              
          public:
             Quadrangle():Quadrangle(_side_count){}
};

int main()
{
    setlocale(LC_ALL, "rus");
    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);

    std::cout << "Количество сторон:\n";
    Figure figure; std::cout << figure.get_name() << figure.get_sides_count() << std::endl;;
    Triangle triangle; std::cout << triangle.get_name() << triangle.get_sides_count() << std::endl;;
    Quadrangle quadrangle;  std::cout << quadrangle.get_name() << quadrangle.get_sides_count() << std::endl;;

    return 0;

}