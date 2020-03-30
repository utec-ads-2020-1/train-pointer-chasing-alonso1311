#include"chasing.h"

void chasing(int **A[], int a, int *B[], int b, int C[], int c){
    string line;
    vector<int> result;    

    while(getline(cin, line)) {
        string letter_1, letter_2;
        int answer, n, m;

        if(line.empty() == true)
            break;

        vector<string> temp_line;
        
        boost::split(temp_line, line, boost::is_any_of(" "));
        
        if(temp_line.size() == 4){
            letter_1 = temp_line[0]; 
            n = stoi(temp_line[1]); 
            letter_2 = temp_line[2]; 
            m = stoi(temp_line[3]); 

            if(letter_1 == "A" && letter_2 == "B" and n < a && m < b){
                A[n] = &B[m];
                answer = 1;
            } else if(letter_1 == "B" && letter_2 == "C" and n < b && m < c){
                B[n] = &C[m];
                answer = 1;
            } else {
                answer = 0;
            }
        } else {
            answer = 0;
        }
    
        result.push_back(answer);
    }

    for(auto const& i : result)
        cout << i << endl;
}

