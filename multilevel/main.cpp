#include <iostream>

using namespace std;


class apple{
private:
protected:

int a;
int b;

public:

apple(){

   cout<<"apple const"<<endl;
};

apple(int a , int b){

this->a=a;
this->b=b;

   cout<<"apple const para"<<endl;
};

int sum(){
  return a+b;
};


void display(){

cout<<"a ="<<a<<"\t b ="<<b<<endl;
cout<<"a + b ="<<sum()<<endl;
}

~apple(){

cout<<"apple desc"<<endl;
}

};

class phone :public apple{

private:

protected:

int c;

public:

phone():apple(){

 cout<<"phone const"<<endl;
};

phone(int a , int b, int c):apple(a,b){

 this->c=c;
 cout<<"phone const para"<<endl;
};

int sum(){

return a+b+c;
}

void display(){

cout<<"a = "<<a<<"\tb = "<<b<<"\tc = "<<c<<endl;
cout<<"a+b+c = "<<sum()<<endl;
}

~phone(){

cout<<"phone desc"<<endl;
};
};

class promax:public phone{
private:

protected:

int d;

public:

promax():phone(){

cout<<"promax const"<<endl;
};

promax(int a, int b , int c ,int d):phone(a,b,c){
 this->d=d;
cout<<"promax const para"<<endl;
};

int sum(){

return a+b+c+d;

};

void display(){
cout<<"a = "<<a<<"\tb = "<<b<<"\tc = "<<c<<"\td = "<<d<<endl;
cout<<"a+b+c+d = "<<sum()<<endl;
};

~promax(){

cout<<"promax desc"<<endl;

};


};

int main()
{
apple a(1,2);
a.display();

phone p(1,2,3);
p.display();

promax m(1,2,3,4);
m.display();
    return 0;
}
