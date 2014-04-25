int swap(int a,int b){
    int *sw;
    int c;
    sw=&a;
    c=a;
    *sw=b;
    sw=&b;
    *sw=c;
    return 0;
}
