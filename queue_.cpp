#include<iostream>
using namespace std;

int maksimalAntrianArray =5, front = 0, back = 0;

string antrianBPJS[5];

bool isFullArray(){
    if(back == maksimalAntrianArray){
        return true;
    }else{
        return false;
    }
}

bool isEmptyArray(){
    if(back == 0){
        return true;
    }else{
        return false;
    }
}

void enqueueArray(string data){
	if(isFullArray() ){
        cout<<"Antrian Penuh!!"<<endl;
    }else{
        if(isFullArray()){
            antrianBPJS[0]=data;
            front++;
            back++;
        }else{
            antrianBPJS[back]=data;
            back++;
        }
    }
	
}

void dequeueArray(){
    if(isEmptyArray() ){
        cout<<"Antrian Kosong!!"<<endl;
    }else{
       for(int i = 0; i<back; i++){
           antrianBPJS[i] = antrianBPJS[i+1];
       }
       back--;
    }
}

int countArray(){
    if(isEmptyArray()){
        return 0;
    }else if(isFullArray()){
        return maksimalAntrianArray;
    }else{
        return back;
    }
}

void destroyArray(){
    if(isEmptyArray() ){
        cout<<"Antrian Kosong!!"<<endl;
    }else{
       for(int i = 0; i<maksimalAntrianArray; i++){
           if(back > 1){
            antrianBPJS[i] = "";
            back--;
           }else if(back == 1){
               antrianBPJS[back-1]="";
               back = 0;
               front = 0;
           }
       }
    }
}

void displayArray(){
    cout<<"Jumalah Data Antrian : "<<countArray()<<"data."<
    cout<<"Data Antrian Pada BPJS: "<<endl;
    if(isEmptyArray()){
        cout<<"Antrian Kosong!!"<<endl;
    }else{
        for(int i=0; i<maksimalAntrianArray; i++){
        if(antrianBPJS[i] != ""){
            cout<<i+1<<". "<<antrianBPJS[i]<<endl;
        }else{
            cout<<i+1<<". (kosong) "<<antrianBPJS[i]<<endl;
        }
        }
    }
    cout<<"\n"<<endl;
    
}



int main(){
	
    enqueueArray("Arif");
    displayArray();

    enqueueArray("Gunawan");
    displayArray();

    enqueueArray("Hasiholan");
    enqueueArray("Siboro");
    enqueueArray("Sagala");
    displayArray();

    enqueueArray("Simarmata");
    displayArray();

    dequeueArray();
    displayArray();

    dequeueArray();
    displayArray();

    dequeueArray();
    displayArray();
}
