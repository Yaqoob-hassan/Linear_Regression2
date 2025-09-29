#include<iostream>
#include<string>
using namespace std;

#define SDMAX 5 

struct studentinfo {
    string regnum ;
    string name ;
    string father_name ;
    int semester;
    int cgpa ;
    int marks[SDMAX];
    
};
int main(){
    studentinfo S1;
    do {
        cout << "Enter your 6 number registration number :";
        cin >> S1.regnum ;
        if (S1.regnum.length() != 6){
            cout << "Enter a valid registration number :";
            cout << endl;
        }
    }while (S1.regnum.length() != 6);
    cin.ignore();
    
    do {
        cout << "Enter your name : ( No digit )";
        cin >> S1.name;
        bool valid  = true;
        for( int i = 0 ; i < S1.name.length() ; i++){
            if(isdigit(S1.name[i]))
            valid = false;
            break;
        }
        if(!valid){
            cout <<"Enter a valid name (NO DIGIT)";
        }
        else{
            break;
            
        }
    }while(true);
    cin.ignore();
    
    
    cout << "Enter Your Father Name :";
    getline(cin, S1.father_name);
    
    
    cout << "Enter Your semester number : ";
    cin >> S1.semester;
    
    
    cout << "Enter Your CGPA :";
    cin >> S1.cgpa;

    cout << endl;
    cout << "------Your Marks Detail------" << endl;
    for (int i = 0 ; i < SDMAX ; i ++){
        cout << "Enter Your Marks in subject "<< (i + 1) << ":";
        cin>>S1.marks[i];
        
    }
    cout << endl;
    cout << "------------- Student Information ------------" << endl;
    cout << "Your Registration Number is :" << S1.regnum << endl;
    cout << "Your Name is :" << S1.name << endl;
    cout << "Your Father Name is : "<< S1.father_name << endl;
    cout << "Your Semester is :"<<S1.semester << endl;
    cout << "Your CGPA is :" << S1.cgpa << endl;
    cout << endl;
    
     for (int i = 0; i < SDMAX; i++) {
        cout <<"Your marks in subject" << (i+1) << " is :"  << S1.marks[i] << " " << endl;
    }
    cout << endl;
    return 0 ;
    
}