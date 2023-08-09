// Hacker Rank Question Link : https://www.hackerrank.com/challenges/rectangle-area/problem?isFullScreen=true
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle
{
    public: 
    int width, height;
    void read_input()
    {
        cin >> width;
        cin >> height;
    }    
    void display()
    {
        cout << width << " " << height << endl;
    }
      
};
class RectangleArea : public Rectangle // inheritance
{
    public:
    void display()
    {
        cout << width * height;
    }  
};
