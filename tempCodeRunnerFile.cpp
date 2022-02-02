 int first=0;
    int end=n;
   while(first<=end){
    if(arr[midterm]==search){
        cout<<"number is present at index : "<<midterm;
            break;
    }
    else if(search>arr[midterm]){
        first=midterm+1;

    }else if(search<arr[midterm]){
        end=midterm-1;
    }else{
        cout<<"Number not found.";
    }
    midterm=(first+end)/2;
    }