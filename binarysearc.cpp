int linearsearch(int arr[], int n, int key) {
    if(index==n) return -1;
    if (arr[index] == key) {
            return index; 
        return linearSearch(arr, n, key, index + 1); 
}
int main(){
    int arr[5]={1,2,3,4,5};
    int key=3;
    int result=linearsearch(arr,5,key,0);
    if(res==-1){
        cout<<"Unsuccessful Search"<<endl;
    }
    else{
        cout<<"Element found at index: "<<result<<endl;
    }
}