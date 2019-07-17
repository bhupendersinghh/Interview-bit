#define F first
#define S second
 
class TrieNode {
    public:
      TrieNode* children[26];
      bool isEnd;
};
 
TrieNode* getNode() {
    TrieNode* newNode = new TrieNode;
    newNode->isEnd = false;
    for(int i = 0; i < 26; i++)
        newNode->children[i] = NULL;
    return newNode;
}
 
void insertTrieNode(TrieNode* root, string key) {
    TrieNode* curr = root;
    for(int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if(!curr->children[index])
            curr->children[index] = getNode();
        curr = curr->children[index];
    }
    curr->isEnd = true;
}
 
bool searchKey(TrieNode* root, string key) {
    TrieNode* curr = root;
    for(int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if(!curr->children[index])
            return false;
        curr = curr->children[index];
    }
    return (curr && curr->isEnd);
}
 
vector<string> split(string A) {
    string temp = "";
    vector<string> res;
    int length = A.length();
    for(int i = 0; i < length; i++) {
        if(i == length - 1 || A[i] == '_' && temp != "") {
            A[i] == '_' ? temp : temp += A[i];
            res.push_back(temp);
            temp = "";
            continue;
        }
        else {
            temp += A[i];
        }
    }
    return res;
}
 
bool cmp(const pair<int, int>& a, const pair<int, int>& b){
        if(a.F == b.F) return a.S < b.S;
    return a.F > b.F;
}
vector<int> Solution::solve(string A, vector<string> &B) {
    vector<int> sol(B.size());
    vector<string> words = split(A);
    TrieNode* root = getNode();
    for(int j = 0; j < words.size(); j++) {
        insertTrieNode(root, words[j]);
    }
    vector<pair<int, int> > rating;
    int count;
    for(int i = 0; i < B.size(); i++) {
        count = 0;
        vector<string> temp = split(B[i]);
        // for(int j = 0; j < temp.size(); j++) {
        //     insertTrieNode(root, temp[j]);
        // }
        for(int j = 0; j < temp.size(); j++) {
            if(searchKey(root, temp[j])) {
                count++;
            }
        }
        rating.push_back(make_pair(count, i));
    }
    sort(rating.begin(), rating.end(), cmp);
    for(int i = 0; i < B.size(); i++) {
        sol[i]=rating[i].S;
    }

    return sol;
}