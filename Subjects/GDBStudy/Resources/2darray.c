

int main(){

    int arr[5][5];
    int counter=0;

    for(int i=0; i < 5; i++){
        for(int j=0; j < 5; j++){
            arr[i][j] = counter;
            counter++;
        }
    }

    return 0;
}
