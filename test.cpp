#include "pystring.h"
#include <iostream>
#include <string>

using namespace std;


int main(){

    string str = "hello world, this is a string for test";

    ///////////////////////////////////////////////////////////////////////////////////////////////
    //test pystring::split()
    //
    cout<< "pystring::split()"<<"------------------------------------------------------------------>>>>"<<endl<<endl;
    vector<string> res;
    pystring::split(str, res);
    for(int i = 0; i<res.size(); i++){
        cout<<res[i]<<endl;
    }
    cout<<endl;


    ///////////////////////////////////////////////////////////////////////////////////////////////
    //test pystring::endwith()
    //
    cout<< "pystring::endswith()"<<"------------------------------------------------------------------>>>>"<<endl<<endl;
    cout<<pystring::endswith(str,"test")<<endl;
    cout<<endl;


    ///////////////////////////////////////////////////////////////////////////////////////////////
    //test pystring::istitle()
    //
    cout<< "pystring::istitle()"<<"------------------------------------------------------------------>>>>"<<endl<<endl;
    string s = "Hello World, This Is";
    cout<<"pystring::istitle(\"Hello World, This Is\")";
    cout<<endl;
    cout<<pystring::istitle(s)<<endl;
    cout<<endl;


    ///////////////////////////////////////////////////////////////////////////////////////////////
    //test os.path.basename()
    //
    cout<< "basename()"<<"------------------------------------------------------------------>>>>"<<endl<<endl;
    cout<< "pystring::os::path::basename(\"D:/iloveacm/src/d\")"<<endl;
    cout<< pystring::os::path::basename("D:/iloveacm/src/d")<<endl;
    cout<<endl;
}