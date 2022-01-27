// Program to display something similar to acid corrosion

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

// function for the final step of acid corrosion

void acidcorrosionfinalstep(int arr[6][6])
{
    int i,j;

    /*  i = rows of matrix
        j = columns of matrix
    */

    // finding and storing the first/lowest indices element with value 0

    int starti, startj; 

    /*  starti = row number of first 0 value element in the matrix
        startj = column number of first 0 value element in the matrix
    */

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if (arr[i][j] == 0)
            {
                starti = i;
                startj = j;

                goto endelementfind;

                // searching ends after finding and storing the first/lowest indices element with value 0
            }
        }
    }


    endelementfind:

    // finding and storing the last/highest indices element with value 0

    int endi, endj; 

    /*  endi = row number of last 0 value element in the matrix
        endj = column number of last 0 value element in the matrix
    */

    int a,b;

    for(a = 5; a >= 0; a--)
    {
        for(b = 5; b >=0; b--)
        {
            if (arr[a][b] == 0)
            {
                endi = a;
                endj = b;

                goto finalcorrosion;
                
                // searching ends after finding and storing the last/highest indices element with value 0
            }
            
        }
    }

    finalcorrosion:

    /* 

    for debugging purposes

    cout<<"starti="<<starti<<endl;
    cout<<"startj="<<startj<<endl;
    cout<<"endi="<<endi<<endl;
    cout<<"endj="<<endj<<endl;

    */
    

    // filling up surrounding elements with 0's

    int x,y;


    /*  setting lowest and highest indices of the first and last elements containing 0 of the
        new matrix containing 0s after final step of acid corrosion
    */

    int toplefti = starti - 1;

    if (toplefti < 0) // to avoid stack smashing
    {
        toplefti == 0;
    }


    int topleftj = startj - 1;

    if (topleftj < 0) // to avoid stack smashing
    {
        topleftj = 0;
    }


    int bottomrighti = endi + 1;

    if (bottomrighti > 5) // to avoid stack smashing
    {
        bottomrighti = endi;
    }


    int bottomrightj = endj + 1;

    if (bottomrightj > 5) // to avoid stack smashing
    {
        bottomrightj = endj;
    }


    // final acid corrosion - changing surrounding 1s to 0s

    for (x = toplefti; x <= bottomrighti; x++)
    {
        for (y = topleftj; y <= bottomrightj; y++)
        {
            arr[x][y] = 0;
        }
    
    }


    // printing final matrix after acid corrosion

    cout<<"\nAfter step-3 of acid corrosion, the matrix is:\n\n";

    int p,q;

    for (p = 0; p < 6; p++)
    {
        for (q = 0; q < 6; q ++)
        {
            cout<<arr[p][q]<<" ";
        }

        cout<<"\n";
    } 

}


// function for second step of acid corrosion

void acidcorrosionsecondstep(int arr[6][6])
{
    int i,j;

    /*  i = rows of matrix
        j = columns of matrix
    */

    // finding and storing the first/lowest indices element with value 0

    int starti, startj; 

    /*  starti = row number of first 0 value element in the matrix
        startj = column number of first 0 value element in the matrix
    */

    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 6; j++)
        {
            if (arr[i][j] == 0)
            {
                starti = i;
                startj = j;

                goto endelementfind;

                // searching ends after finding and storing the first/lowest indices element with value 0
            }
        }
    }


    endelementfind:

    // finding and storing the last/highest indices element with value 0

    int endi, endj; 

    /*  endi = row number of last 0 value element in the matrix
        endj = column number of last 0 value element in the matrix
    */

    int a,b;

    for(a = 5; a >= 0; a--)
    {
        for(b = 5; b >=0; b--)
        {
            if (arr[a][b] == 0)
            {
                endi = a;
                endj = b;

                goto finalcorrosion;
                
                // searching ends after finding and storing the last/highest indices element with value 0
            }
            
        }
    }

    finalcorrosion:

    /* 

    for debugging purposes

    cout<<"starti="<<starti<<endl;
    cout<<"startj="<<startj<<endl;
    cout<<"endi="<<endi<<endl;
    cout<<"endj="<<endj<<endl;

    */
    

    // filling up surrounding elements with 0's

    int x,y;


    /*  setting lowest and highest indices of the first and last elements containing 0 of the
        new matrix containing 0s after final step of acid corrosion
    */

    int toplefti = starti - 1;

    if (toplefti < 0) // to avoid stack smashing
    {
        toplefti == 0;
    }


    int topleftj = startj - 1;

    if (topleftj < 0) // to avoid stack smashing
    {
        topleftj = 0;
    }


    int bottomrighti = endi + 1;

    if (bottomrighti > 5) // to avoid stack smashing
    {
        bottomrighti = endi;
    }


    int bottomrightj = endj + 1;

    if (bottomrightj > 5) // to avoid stack smashing
    {
        bottomrightj = endj;
    }


    // final acid corrosion - changing surrounding 1s to 0s

    for (x = toplefti; x <= bottomrighti; x++)
    {
        for (y = topleftj; y <= bottomrightj; y++)
        {
            arr[x][y] = 0;
        }
    
    }


    // printing matrix after second step of acid corrosion

    cout<<"\nAfter step-2 of acid corrosion, the matrix is:\n\n";

    int p,q;

    for (p = 0; p < 6; p++)
    {
        for (q = 0; q < 6; q ++)
        {
            cout<<arr[p][q]<<" ";
        }

        cout<<"\n";
    } 


    // passing matrix for final step of acid corrosion

    acidcorrosionfinalstep(arr);

}



// function for first step of acid corrosion

void acidcorrosion1(int arr[6][6])
{
    int a,b,c; 
    
    /*  a = to control the number of times we enter the matrix for searching for 0
        b = rows of matrix
        c = columns of matrix
    */

    int flaga, flagb; // for keeping track of the row number and column number of current element

    // row number and column number for surrounding elements

    int flaga1, flagb1;
    int flaga2, flagb2;
    int flaga3, flagb3;
    int flaga4, flagb4;
    int flaga5, flagb5;
    int flaga6, flagb6;
    int flaga7, flagb7;
    int flaga8, flagb8;


            // resetting flag values before entering matrix for searching each time

            flaga = -2;
            flagb = -2;
            flaga1 = -2;
            flagb1 = -2;
            flaga2 = -2;
            flagb2 = -2;
            flaga3 = -2;
            flagb3 = -2;
            flaga4 = -2;
            flagb4 = -2;
            flaga5 = -2;
            flagb5 = -2;
            flaga6 = -2;
            flagb6 = -2;
            flaga7 = -2;
            flagb7 = -2;
            flaga8 = -2;
            flagb8 = -2;   


        for (b = 0; b < 6; b++)
        {
            
            for (c = 0; c < 6; c++)
            {
                
                if (arr[b][c] == 0)
                {
                    flaga = b; // keeping track of row number of current element
                    flagb = c; // keeping track of column number of current element


                        /*
                            checking if the current element has already been changed
                            in the same searching loop
                        */

                        if 
                        (
                            ((flaga == flaga1) && (flagb == flagb1)) || 
                            ((flaga == flaga2) && (flagb == flagb2)) ||
                            ((flaga == flaga3) && (flagb == flagb3)) ||
                            ((flaga == flaga4) && (flagb == flagb4)) ||
                            ((flaga == flaga5) && (flagb == flagb5)) ||
                            ((flaga == flaga6) && (flagb == flagb6)) ||
                            ((flaga == flaga7) && (flagb == flagb7)) ||
                            ((flaga == flaga8) && (flagb == flagb8))
                        )

                        {
                            break;
                        }

                        
                        else
                        {
                            if ((arr[b-1][c-1] != 0) && ((b-1) >= 0 && (b-1) <= 5) && ((c-1) >= 0 && (c-1) <= 5))
                            {
                                arr[b-1][c-1] = 0;

                                flaga1 = b-1; // keeping track of row number of element that's been changed
                                flagb1 = c-1; // keeping track of column number of element that's been changed
                            }

                            if ((arr[b][c-1] != 0) && ((b) >= 0 && (b) <= 5) && ((c-1) >= 0 && (c-1) <= 5))
                            {
                                arr[b][c-1] = 0;

                                flaga2 = b; // keeping track of row number of element that's been changed
                                flagb2 = c-1; // keeping track of column number of element that's been changed
                            }

                            if ((arr[b+1][c-1] != 0) && ((b+1) >= 0 && (b+1) <= 5) && ((c-1) >= 0 && (c-1) <= 5))
                            {
                                arr[b+1][c-1] = 0;

                                flaga3 = b+1; // keeping track of row number of element that's been changed
                                flagb3 = c-1; // keeping track of column number of element that's been changed
                            }

                            if ((arr[b+1][c] != 0) && ((b+1) >= 0 && (b+1) <= 5) && ((c) >= 0 && (c) <= 5))
                            {
                                arr[b+1][c] = 0;

                                flaga4 = b+1; // keeping track of row number of element that's been changed
                                flagb4 = c; // keeping track of column number of element that's been changed
                            }

                            if ((arr[b+1][c+1] != 0) && ((b+1) >= 0 && (b+1) <= 5) && ((c+1) >= 0 && (c+1) <= 5))
                            {
                                arr[b+1][c+1] = 0;

                                flaga5 = b+1; // keeping track of row number of element that's been changed
                                flagb5 = c+1; // keeping track of column number of element that's been changed
                            }

                            if ((arr[b][c+1] != 0) && ((b) >= 0 && (b) <= 5) && ((c+1) >= 0 && (c+1) <= 5))
                            {
                                arr[b][c+1] = 0;

                                flaga6 = b; // keeping track of row number of element that's been changed
                                flagb6 = c+1; // keeping track of column number of element that's been changed
                            }

                            if ((arr[b-1][c+1] != 0) && ((b-1) >= 0 && (b-1) <= 5) && ((c+1) >= 0 && (c+1) <= 5))
                            {
                                arr[b-1][c+1] = 0;

                                flaga7 = b-1; // keeping track of row number of element that's been changed
                                flagb7 = c+1; // keeping track of column number of element that's been changed
                            }

                            if ((arr[b-1][c] != 0) && ((b-1) >= 0 && (b-1) <= 5) && ((c) >= 0 && (c) <= 5))
                            {
                                arr[b-1][c] = 0;

                                flaga8 = b-1; // keeping track of row number of element that's been changed
                                flagb8 = c; // keeping track of column number of element that's been changed
                            }

                        }

                }

                else
                {
                    continue;
                }

            }     

    }


    // printing matrix after first step of acid corrosion

            cout<<"\nAfter step-1 of acid corrosion, the matrix is:\n\n";

            int p,q;

            for (p = 0; p < 6; p++)
            {
                for (q = 0; q < 6; q ++)
                {
                    cout<<arr[p][q]<<" ";
                }

                cout<<"\n";
            }   


    // passing matrix for second step operation    
    
    acidcorrosionsecondstep(arr);
    
}


// driver code

int main()
{
    // initialising 6x6 matrix with all elements having value 1

    int arr[6][6]={
                    {1,1,1,1,1,1},
                    {1,1,1,1,1,1},
                    {1,1,1,1,1,1},
                    {1,1,1,1,1,1},
                    {1,1,1,1,1,1},
                    {1,1,1,1,1,1}
                };


    // accepting user input for the starting point of acid corrosion

    int zeroi, zeroj;

    cout<<"Enter the row number of the element to be given value 0:"<<endl;
    cin>>zeroi;

    cout<<"Enter the column number of the element to be given value 0:"<<endl;
    cin>>zeroj;

    // setting value of 0 to the cell specified by the user

    arr[zeroi][zeroj] = 0;


   // Printing original matrix

    cout<<"The original matrix is:\n"<<endl;

    int i,j;

    for (i = 0; i < 6; i++)
    {
        for (j=0; j < 6; j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }

    cout<<endl; 

   // calling function for acid corrosion

    acidcorrosion1(arr);

    return 0;
}
