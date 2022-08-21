
int increment(){
    int var = 7;
    static int count = 0;
    count = count + 1;
    return count;
}