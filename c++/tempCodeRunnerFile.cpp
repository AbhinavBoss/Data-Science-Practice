ain(){
    int n,m;
    cout << "Enter the rows of the 2D-array; ";
    cin >> n;
    cout << "Enter the columns of the 2D-array; ";
    cin >> m;
    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << "Enter " << i << " " << j << "th element: ";
            cin >> array[i][j]; 
        }
    }
    cout <<"original array"<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << array[i][j] << " ";
        }
    cout << endl;
    }
    cout <<"transpose array"<< endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << array[j][i] << " ";
        }
    cout << endl;
    }
}