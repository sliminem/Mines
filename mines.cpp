#include <iostream>
using namespace std;

int arr[5][5];

void putFlags(int x, int y)
{
    for(int i = x-1 ; i <= x+1; i++)
    {
        for(int j= y-1 ; j <= y+1; j++)
        {
            if(i > 0 || i <= 4 || j > 0 || j <= 4 )
            {
                if(arr[i][j] != -1)
                {
                    arr[i][j]++;
                }
            }
        }
    }
}

void markMines()
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]== -1)
            {
                putFlags(i,j);
            }
        }
    }
}



void putMines(void)
{
    arr[0][3] = -1;
    arr[1][2] = -1;
    arr[2][0] = -1;
    arr[2][4] = -1;
    arr[4][2] = -1;
}

// Initialize all array elements to -1
void initialize(void)
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            arr[i][j] = 0;
        }
    }
}

// Function for viewing the array
void printArray(void)
{
    cout<<"---------------\n";
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j] != -1)
            {
                std::cout<<" "<<arr[i][j]<<" ";
            }
            else
            {
                std::cout<<arr[i][j]<<" ";
            }
        }
        std::cout << "\n";
    }
    cout<<"---------------\n";
}

int main()
{
    initialize();
    printArray();
    putMines();
    printArray();
    markMines();
    printArray();

    return 0;
}
















