#include<bits/stdc++.h>
using namespace std;

int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++) 
    {
        int j;

        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return i;
    }
    return -1;
}


int main()
{   
    string url, s1="tinyurl";

    cout<<"Enter URL to be checked(in lowercase): ";
    cin>>url;
    cout<<url<<endl;

    int result1=isSubstring(s1,url), flag=0, susp=0, usize, result5;//Using URL Shortening Services “TinyURL”
    if(result1 == -1)
    exit;
    else
    flag++;


    int result2=isSubstring("@",url);//URL’s having “@” Symbol
    if(result2 == -1)
    exit;
    else
    flag++;

    int result3=isSubstring("//",url);//Redirecting using “//”
    result3=url.find("//",result3+1);
    if(result3 < 7)
    exit;
    else if(result3 >7)
    flag++;

    int result4=isSubstring("https",url);//The Existence of “HTTPS” Token in the Domain Part of the URLl
    if(result4 == -1)
    flag++;
    else
    exit;


    result5 =isSubstring("-",url);//Adding Prefix or Suffix Separated by (-) to the Domain
    if(result5 == -1)
    exit;
    else
    flag++;

    usize= url.size();//URL size check condition 54 & 75
    if(usize < 54)
        exit;
    else if( usize >=54 && usize<=75 )
        susp=4;
    else
    flag++;
    
    //final check
    if(flag==0)
    {
        if(susp==1)
        {
            cout<<"Given URL is suspicious";
        }

        else if(susp !=1)
        cout<<"Given URL is legitimate\n";
    }
    else if(flag>0)
    cout<<"Given URL is phishing link";

    //cout<<usize<<endl<<susp;
    cout<<"\nFlags raised: "<<flag;
    return 0;
}



