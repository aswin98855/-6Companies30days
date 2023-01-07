bool validSquare(int* p1, int p1Size, int* p2, int p2Size, int* p3, int p3Size, int* p4, int p4Size){
    int c=0,c1=0;
    float d1=pow(p2[0]-p1[0],2)+pow(p2[1]-p1[1],2);
    float d2=pow(p3[0]-p2[0],2)+pow(p3[1]-p2[1],2);
    if(d2==d1){
        c++;
    }
    else if(d2==2*d1 || d1==2*d2){
        c1++;
    }
    float d3=pow(p4[0]-p3[0],2)+pow(p4[1]-p3[1],2);
    if(d3==d1){
        c++;
    }
    else if(d3==2*d1 || d1==2*d3){
        c1++;
    }
    float d4=pow(p1[0]-p4[0],2)+pow(p1[1]-p4[1],2);
    if(d4==d1){
        c++;
    }
    else if(d4==2*d1 || d1==2*d4){
        c1++;
    }
    float d5=pow(p3[0]-p1[0],2)+pow(p3[1]-p1[1],2);
    if(d5==d1){
        c++;
    }
    else if(d5==2*d1 || d1==2*d5){
        c1++;
    }
    float d6=pow(p4[0]-p2[0],2)+pow(p4[1]-p2[1],2);
    if(d6==d1){
        c++;
    }
    else if(d6==2*d1 || d1==2*d6){
        c1++;
    }
    if(((c+1)==4 && c1==2) || ((c+1)==2 && c1==4)){
        return true;
    }
    return false;
}