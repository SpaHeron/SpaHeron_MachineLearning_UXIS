#include <iostream>
#include "student.h"
using namespace std;

int main(){
    Student st;
    pair<float,float> pupil;
    while(1){
        //pupil ���� ����
        cin>>pupil.first>>pupil.second;

        st.chk_state(pupil);
        st.change_state();
        
        //web���� state ����, ���絵 ����� ���� file ����
        cout<<st.state<<endl;
    }
    return 0;
}