#include "../HeaderFiles/input.h"

Input::Input()
{
}

int Input::get_input(vector<double> &input_arr)
{
    // cout<<"Enter 4 points :"<<endl;
    // for(int i=0;i<4;i++){
    //     cout<<"x : ";
    //     cin>>x;
    //     cout<<"y : ";
    //     cin>>y;
    //     points_input.push_back(x);
    //     points_input.push_back(y);
    // }
    cout<<"Which shape do you want to draw? (Enter number 1-6)"<<endl
        <<"1. Point"<<endl
        <<"2. Line"<<endl
        <<"3. Rectangle (4 points)"<<endl
        <<"4. Rectangle (point and length, breadth)"<<endl
        <<"5. Square (4 points)"<<endl
        <<"6. Square (point and side)"<<endl
        <<"7. Circle"<<endl
        <<"8. Polygon"<<endl
        <<"9. Triangle"<<endl;
    cin>>ch;
    switch (ch)
    {

    case 1:
        cout<<"Enter Point Data :"<<endl;
        cout<<"x : ";
        cin>>x;
        cout<<"y : ";
        cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        break;

    case 2:
        cout<<"Enter Line Data :"<<endl;
        for(int i=0;i<2;i++){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 3:
        cout<<"Enter Rectangle Data :"<<endl;
        for(int i=0;i<4;i++){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;
    
    case 4:
        cout<<"Enter Rectangle Data :"<<endl;
        cout<<"x : ";
        cin>>x;
        cout<<"y : ";
        cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        cout<<"Length : ";
        cin>>length;
        cout<<"Breadth : ";
        cin>>breadth;
        input_arr.push_back(length);
        input_arr.push_back(breadth);
        break;

    case 5:
        cout<<"Enter Square Data :"<<endl;
        for(int i=0;i<4;i++){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 6:
        cout<<"Enter Square Data :"<<endl;
        cout<<"x : ";
        cin>>x;
        cout<<"y : ";
        cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        cout<<"Side : ";
        cin>>side;
        input_arr.push_back(side);
        break;

    case 7:
        cout<<"Enter Circle Data :"<<endl;
        cout<<"x : ";
        cin>>x;
        cout<<"y : ";
        cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        cout<<"Radius : ";
        cin>>radius;
        input_arr.push_back(radius);
        break;

    case 8:
        cout<<"Enter number of points for the polygon data :"<<endl;
        cin>>points_count;
        for(int i=0;i<points_count;i++){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;
    
    case 9:
        cout<<"Enter triangle data : "<<endl;
        for(int i=0;i<3;i++){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    default:
        cout<<"Enter a number between 1-6"<<endl;
        break;
    }
    return ch;
}

Input::~Input()
{
}