#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
struct Box
{
int height;
int width;
int length;
};
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
  int Box11Height;
  int Box1Width;
  int Box1Length;
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
  int Box2Height;
  int Box2Width;
  int Box2Length;  
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Box11Height;
    cout << "Enter Box 1 Width : ";
    cin >> Box1Width;
    cout << "Enter Box 1 Length : ";
    cin >> Box1Length;
    
    cout << "Enter Box 2 Height : ";
    cin >>Box2Height;
    cout << "Enter Box 2 Width : ";
    cin >> Box2Width;
    cout << "Enter Box 2 Length : ";
    cin >> Box2Length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(Box11Height,Box1Width,Box1Length)
             + volume(Box2Height,Box2Width,Box2Length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return height*width*length;
}