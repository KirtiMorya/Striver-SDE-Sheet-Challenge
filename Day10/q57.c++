bool isSafe(int mat[9][9], int r,int c, int x){
    for(int i=0; i<9; i++){
        if(mat[i][c]==x)
            return false;
        
        if(mat[r][i]==x)
            return false;
        
        int dr=3*(r/3)*i/3;
        int dc=3*(c/3)*i%3;
        if(mat[dr][dc]==x)
            return false;
        
    }
    return true;
}
bool isItSudoku(int mat[9][9]) {
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(mat[i][j]==0){
                for(int ch=1; ch<=9; ch++){
                    if(isSafe(mat,i,j,ch)){
                        mat[i][j]=ch;

                        if(isItSudoku(mat))
                            return true;
                        else
                            mat[i][j]=0;
                    }
                  
                }
                 return false;
            }
        }
    }
    return true;
}