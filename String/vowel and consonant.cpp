int mod = 1e9+7;

int Solution::solve(string A) {
    long long int consonants = 0, vowels = 0;
    for(long long int i = 0; i<A.length(); i++){
        if(A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'){
            vowels = (vowels+1)%mod;
        }
        else{
            consonants = (consonants+1)%mod;
        }
    }
    long long int ans = (consonants*vowels)%mod;
    return (int)ans;
}
