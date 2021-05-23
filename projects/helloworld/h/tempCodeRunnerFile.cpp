
    int marks;
    string name;
    // char name[12];

    public:
    int roll_no;
    student(int a,string b,int c){
        marks=a;
        name=b;
        roll_no=c;
    }
    int t;
    void in();
    void ou();

};

void student::in()
{
   // cout<<"\nname:";
    // gets(name);
   cin>>name;

   // cout<<"marks:";
    cin>>marks;
   // cout<<"\nroll_no:";