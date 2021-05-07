    //
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(0);


        int L=0,U=0,i;
        string s;
        char m;
        cin >> s;
        for( i=0; s[i]!='\0'; ++i)
        {
            m=s[i];
            if(islower(m))
            {
                ++L;
            }
            else if (isupper(m))
            {
                ++U;
            }
        }
        if(L==U)
        {
            for_each(s.begin(), s.end(), [](char & s)
            {
                s = ::tolower(s);
            });
            cout << s << endl;
        }
        else if(L>U)
        {
            for_each(s.begin(), s.end(), [](char & s)
            {
                s = ::tolower(s);
            });
            cout << s << endl;
        }
        else if(U>L)
        {
            for_each(s.begin(), s.end(), [](char & s)
            {
                s = ::toupper(s);
            });

            cout << s << endl;
        }



        return 0;
    }
