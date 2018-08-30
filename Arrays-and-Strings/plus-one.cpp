vector<int> plusOne(vector<int>& digits) {
    int last_index = digits.size() - 1;
    
    for (int i = last_index; i >= 0; --i) {
        if (digits[i] == 9) digits[i] = 0;
        else {
            digits[i] += 1;
            return digits;
        }
    }
    if (digits.front() == 0) digits.insert(digits.begin(), 1);
    
    return digits;
}

int main() {
    cout << plusOne([1, 2, 3, 4]) << endl;
}