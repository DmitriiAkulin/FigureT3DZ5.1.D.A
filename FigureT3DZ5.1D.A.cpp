// FigureT3DZ5.1.D.A

#include <iostream>
#include <windows.h>


//фигура
class Figure {
          protected:
             int _side_count;//число сторон
             std::string  name = "фигура:\t\t ";//bvz abuehs

             Figure(int _side_count): _side_count(_side_count){}//конструктор с параметром

          public:
            Figure():Figure(0){}//конструктор
            int get_sides_count(){return _side_count;}//метод для доступа к полю _side_count      
            std::string get_name(){return name;}//метод для доступа к полю name
};
//треугольник
class Triangle : public Figure {
         
             
         public:

              Triangle() : Figure(3) { name = "треугольник:\t "; }
};             
//четырехугольник
class Quadrangle : public Figure {         
                                     
          public:
            
              Quadrangle() : Figure(4) { name = "четырехугольник: "; }
};         

int main()
{
    setlocale(LC_ALL, "rus"); 
    
    //создаем экземпляры класса, выводим данные
    std::cout << "Количество сторон:\n";
    Figure figure; std::cout << figure.get_name() << figure.get_sides_count() << std::endl;;
    Triangle triangle; std::cout << triangle.get_name() << triangle.get_sides_count() << std::endl;;
    Quadrangle quadrangle;  std::cout << quadrangle.get_name() << quadrangle.get_sides_count() << std::endl;;

    return 0;

}