//Câu 1//
#include <iostream>

using namespace std;

void timcap(int a[], int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == k) {
                cout <<  a[i] << a[j];
                return;
            }
        }
    }
    cout << "Khong tim thay cap so.";
}

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    timcap(a,n,k);
    return 0;
}


//Câu 2//
#include <iostream>
#include <vector>

using namespace std;

int main (){
 	int m , n , k , q ; cin >> m >> n >> k >> q;
 	
 	vector<vector<int>> array(m , vector<int> (n , 0));
 	
 	for (int i = 0 ; i < k ; i++){
 		int x_k , y_k , val;
 		cin >> x_k >> y_k >> val;
 		array[x_k][y_k] = val;
 	}
 	
 	
 	int sum = 0;
 	for (int i = 0 ; i < q ; i++){
 		int x_q , y_q;
 		cin >> x_q >> y_q;
 		
 		for (int dx = -1 ; dx <= 1 ; dx++){
 			for (int dy = -1 ; dy <= 1 ; dy++){
 				int nx = x_q + dx;
 				int ny = y_q + dy;
 				
 				if (nx >= 0 && nx <= m && ny >= 0 && ny <= n){
 					sum += array[nx][ny];
 				}
 			}
 		}
 		cout << sum << endl;
 	}
 	
 	return 0;
 }


//Câu 3//

#include <iostream>
#include <algorithm>

using namespace std;

void BubbleSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
// ưu điểm :
// - đơn giản, dễ hiểu và dễ cài đặt
// - không yêu cầu bộ nhớ bổ sung lớn
// - có thể sắp xếp một mảng trong khi duyệt nó
// - có thể dừng lại nếu không có sự hoán đổi nào xảy ra trong một lần lặp, cho thấy rằng mảng đã được sắp xếp
// nhược điểm :
// - không hiệu quả cho các mảng lớn vì độ phức tạp thời gian là O(n^2)
// - không thể sắp xếp các mảng lớn hơn 10^6 phần tử trong thời gian hợp lý


//Câu 4//
#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int left = 0, right = n - 1, mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == x){
            cout << mid << endl;
            return 0;
        }
        else if(a[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    cout << "Khong tim thay" << endl;
    return 0;
}

