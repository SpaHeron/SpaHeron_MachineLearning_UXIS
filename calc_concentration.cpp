#include <iostream>
#include <ctime>//timestamp
#include "student.cpp"
using namespace std;

int main(){
    Student st;
    pair<float,float> pupil;
    clock_t start = clock();
    while(1){
        //pupil ���� ����
        if(((float)(clock()-start)/CLOCKS_PER_SEC)<1) continue;
        
        //cin>>pupil.first>>pupil.second;
        cout<<"get pupil"<<endl;

        st.chk_state(pupil);
        st.change_state();
        
        //web���� state ����, ���絵 ����� ���� file ����
        cout<<st.state<<endl;
        start = clock();
    }
    return 0;
}