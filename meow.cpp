void Frobenius(float a[][50], int row, int col)
{
    int colBelow = -1;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            if (i == j && a[i][j] != 1) //Check các phần tử ở đường
            {                           //chéo chính
                cout << "No"; //Nếu # 1 -> No
                return;       //End
            }
            if (i < j && a[i][j] != 0) //Check các phần tử ở nửa trên đường
            {                          //đường chéo chính
                cout << "No"; //Nếu # 0 -> No
                return; //End
            }
            if (i > j) //Check các phần tử ở nửa dưới đường chéo
            {          //chính
                if (colBelow == -1) { //Nếu chưa tìm được cột nào chứa số # 0 ở đường chéo dưới
                    if (a[i][j] != 0) {
                        colBelow = j;
                    }
                }
                else { //Nếu đã tìm được 1 cột chứa số khác 0 dưới đường chéo chính
                    if (a[i][j] != 0 && j != colBelow) {//Nếu số này khác không VÀ khác cột với colBelow
                        cout << "No"; //Nếu # 0 -> No
                        return; //End
                    }
                }
            }
        }
}
