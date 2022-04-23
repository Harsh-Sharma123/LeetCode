class Solution {
public:
    map<string, string> m;
    int i=1;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s = to_string(i);
        i++;
        m[s] = longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return m[shortUrl];
    }
};
