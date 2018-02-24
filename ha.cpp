#include "ha.h"

void hitung(int n){
    int mark = 0;
    int hit = 0;
    for(int i = 0; i<=2*n-1; i++){
        for(int j = 0; j<=2*n-1; j++){
            if(mark==0 || mark==2*n-1){
                cout<<"*";
                if(j==2*n-1){
                    mark++;
                    cout<<endl;
                }
            } else {
                if(j==0||j==mark||j==2*n-mark-1||j==2*n-1){
                    cout<<"*";
                } else {
                    cout<<" ";
                }
                if(j==2*n-1){
                    cout<<endl;
                }
            }
        }
        if(i!=0){
            mark++;
        }
    }
}
