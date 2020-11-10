#ifndef __canvas__
#define __canvas__

#include <iostream>
#include <vector>

using namespace std;

class Canvas{
    public:
        Canvas(size_t row, size_t col);
        //~Canvas();

        //void Resize(size_t w, size_t h);

        int getRow();/*{
            return row_;
        }*/
        int getCol();/*{
            return col_;
        }*/

        bool DrawPixel(int x, int y, char brush);/*{
            pstate[x][y] = brush;
            return true;
        }*/

        void Print();/*{
            vector<int>x_axis;
            vector<int>y_axis;
            for(int i = 0; i < col_; i++){
                x_axis.push_back(i);
            }
            for(int i = 0; i < row_; i++){
                y_axis.push_back(i);
            }
            cout << " ";
            for(int i = 0; i < col_; i++){
                cout << x_axis[i] << " ";
            }
            cout << endl;
            for(int i = 0; i < row_; i++){
                cout << y_axis[i] << " ";
                for(int j = 0; j < col_; j++){
                    cout << pstate[i][j] << " ";
                }
                cout << endl;
            }
        }
*/
        void Clear();/*{
            vector<vector<char>>pstate(row_, vector<char>(col_, '.'));
            
        }
*/
    private:
        int row_, col_;
        vector<vector<char>>repository;
        vector<vector<char>>pstate;
        vector<char>p;

        
};

class Shape{
    public:
        //virtual ~Shape();
        virtual void Draw(Canvas* canvas);
        virtual void Dump();
    protected:
        int std_x, std_y;
        char brush;
        string typeName;
};

class Rectangle : public Shape{
    public:
        Rectangle(int std_x, int std_y, int width, int height, char brush);
        //virtual ~Rectangle();
        virtual void Draw(Canvas* canvas);/*{
            for( int i = std_y; i < std_y + height; i++){
                for( int j = std_x; j < std_x + width; j++){
                    if( i < 0|| i > row_ || j < 0 || j > col_){
                        continue;
                    }
                    else{
                        canvas.DrawPixel(i, j, brush);
                    }
                }
            }
            canvas.Print();
        }*/
        /*virtual void Dump();{
            cout << "rect" << std_x<< std_y<<width<<height<< brush << endl;
        }*/

            
            
    private:
        int width, height;
};
class DownTriangle : public Shape{
    public:
        DownTriangle(int std_x, int std_y, int height, char brush);
        virtual void Draw(Canvas* canvas);/*{
            for( int i = 0; i < height; i++){
                for( int j = std_x - i; j < std_x + i + 1; j++){
                    if( std_y - i < 0 || std_y -i > canvas->row_ || j < 0 || j > canvas->col_){
                        continue;
                    }
                    else{
                        canvas->DrawPixel(std_y - i, j, brush);
                    }
                }
            }
        }*/
        /*virtual void Dump();{
            cout << "tri_down "<<std_x<< std_y << height<< brush << endl;
        }*/


    private:
        int height;
};
class UpTriangle : public Shape{
    public:
        UpTriangle(int std_x, int std_y, int height, char brush);
        virtual void Draw(Canvas* canvas);/*{
            for( int i = 0; i < height; i++){
                for( int j = std_x - i; j < std_x + i + 1; j++){
                    if( std_y - i < 0 || std_y -i > canvas->row_ || j < 0 || j 
                        continue;
                    }
                    else{
                        canvas->DrawPixel(std_y - i, j, brush);
                    }
                }
            }
        }*/
        /*virtual void Dump();{
            cout << "tri_up "<<std_x<< std_y << height<< brush << endl;
        }*/


    private:
        int height;
};
class Diamond : public Shape{
    public:
        Diamond(int std_x, int std_y, int distance, char brush);
        //virtual ~Diamond();
        virtual void Draw(Canvas* canvas);/*{
            for( int i = std_y; i < std_y + distance + 1; i++){
                for( int j < std_x + std_y; j < std_x - std_y; j++){
                    if( i < 0|| i > canvas->getRow() || j < 0 || j > getCol()){
                        continue;
                    }
                    else{
                        canvas.DrawPixel(i, j, brush);
                    }
                }
            }
            for( int i = std_y + distance + 1; i < std_y + 2*distance + 1; i++){
                for( int j = std_x - (std_y + 2*distance - i); j < std_x + (std_y + 2*distance - i) + 1; j++){
                    if( i < 0|| i > canvas->getRow() || j < 0 || j > getCol()){
                        continue;
                    }
                    else{
                        canvas.DrawPixel(i, j, brush);
                    }
                }
            }
            canvas.Print();
        }
*/
        /*virtual void Dump();{
            cout << "diamond" << std_x<< std_y<< distance<< brush << endl;
        }*/

    private:
        int distance;
};
#endif
