#include <iostream>

using namespace std;


int main()
{
    double N;
    cout << "Enter N: ";
    cin >> N;
    double K=N;
    double S = 0.0; //�����, ������� ����� �����
    for (int i = 1; i <= N; i++)
    {
        double P = 1.0;
        for (int j = 1; j <= K; j++) //���������� � ������� ������� ����������
            P = P * i;
        S = S + P;
    }
    cout << "Answer: " << S << endl;
    return 0;
}
