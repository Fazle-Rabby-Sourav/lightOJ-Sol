#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <utility>

using namespace std;

template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
template< class T > T sq(T x) { return x * x; }
template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
template< class T > T _min(T a, T b) { return (a < b ? a : b); }

//string monthName[]={"","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
//string dayName[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

//int xx[]={1,0,-1,0};              int yy[]={0,1,0,-1}; //4 Direction
//int xx[]={1,1,0,-1,-1,-1,0,1};    int yy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int xx[]={2,1,-1,-2,-2,-1,1,2};   int yy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

#define REP(i,n) for (i=0;i<n;i++)
#define FOR(i,p,k) for (i=p; i<k;i++)
#define FORE(i, p, k) for(i=p; i<=k; i++)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define REP(i,n) for (i=0;i<n;i++)

#define popc(i) (__builtin_popcount(i))
#define MP(x, y) make_pair(x, y)
#define REV(s, e) reverse(s, e)
#define CLR(p) memset(p, 0, sizeof(p))
#define mset(p, v) memset(p, v, sizeof(p))
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define ALL(c) c.begin(), c.end()
#define SZ(c) (int)c.size()
#define pb(x) push_back(x)
#define fs first
#define sc second
#define LL long long int
#define pii pair< int, int >
#define psi pair< string, int >
#define PQ priority_queue
#define VS vector<string>
#define VI vector<int>
#define VII vector< pair<int, int> >
#define LOG(x,BASE) (log10(x)/log10(BASE))
#define DEBUG(x) if(x)
#define CNVRT acos(-1.00)/180.0
#define PI acos(-1)
#define EPS 10E-5


#define bug(x) cout<<"->"<<#x<<": "<<x<<endl;
#define deb(args...)          {cout<<" #--> ";dbg,args; cerr<<endl;}
struct debugger
{
    // Taken from rudradevbasak
    template<typename T> debugger& operator , (const T& v)
    {
     //   deb(v);
        cerr<<v<<" ";
        return *this;
    }
} dbg;

const int INF = 0x7f7f7f7f;

//For debugging
template<class T> void debug(T e){cout<<e<<endl;}
template<class T1,class T2> void debug(T1 e1,T2 e2){cout<<e1<<"\t"<<e2<<endl;}
template<class T1,class T2,class T3> void debug(T1 e1,T2 e2,T3 e3){cout<<e1<<"\t"<<e2<<"\t"<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void debug(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void debug(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<"\t"<<e2<<"\t"<<e3<<"\t"<<e4<<"\t"<<e5<<endl;}
template<class T> void debug(vector<T> e){int i;REP(i,SZ(e)) cout<<e[i]<<" ";cout<<endl;}
template<class T> void debug(vector<T> e,int n){int i;REP(i,n) cout<<e[i]<<" ";cout<<endl;}
template<class T> void debug(vector< basic_string<T> > e){int i,j;REP(i,SZ(e)) {REP(j,SZ(e[i])) cout<<e[i][j];cout<<endl;} cout<<endl;}
template<class T> void debug(vector< basic_string<T> > e,int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j];cout<<endl;} cout<<endl;}
template<class T> void debug(vector< vector<T> > e,int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<"\t";cout<<endl;} cout<<endl;}
//template<class T> void debug(T e[SIZE][SIZE],int row,int col){int i,j;REP(i,row) {REP(j,col) cout<<e[i][j]<<" ";cout<<endl;}}
template<class T> void debug(T e[],int row){int i;REP(i,row) cout<<e[i]<<" ";cout<<endl;}


//int,double is converted to string
template<class T> string toString(T n){ostringstream oss;oss<<n;oss.flush();return oss.str();}
//string is converted to int
int toInt(string s){int r=0;istringstream sin(s);sin>>r;return r;}
//string is converted to Long long
bool IsVowel(char ch){ch=tolower(ch);if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')return true;return false;}
//isUpperCase
bool isUpper(char c){return c>='A' && c<='Z';}
//isLowerCase
bool isLower(char c){return c>='a' && c<='z';}
//compute b^p
LL Pow(LL B,LL P){  LL R=1; while(P>0)  {if(P%2==1) R=(R*B);P/=2;B=(B*B);}return R;}
//compute b^p%m
int BigMod(LL B,LL P,LL M){ LL R=1; while(P>0)  {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return (int)R;}
//print a number in binary format with n length
//void binprint(LL mask,LL n){LL i;string s="";do{s+=(mask%2+'0');mask/=2;}while(mask);Reverse(s);s=string(max(n-SZ(s),0LL),'0')+s;for(i=SZ(s)-n;i<SZ(s);i++) printf("%c",s[i]);printf("\n");}
//ASCII Chart
void ASCII_Chart(){int i,j,k;printf("ASCII Chart:(30-129)\n");FOR(i,30,50){REP(j,5){k=i+j*20;printf("%3d---> '%c'   ",k,k);}printf("\n");}}
//LL Pow (LL B, LL P){    LL result ; LL i;    for( i=0, result=1; i<P; i++) {result*=B;}    return result;}
//LL bigmod(LL B, LL P, LL M){LL R=1;while(P>0){if(P%2==1)R=((R*B)%M);P/=2;B= (B*B)%M;}return R;}
//void sieve(){int k=0;prime_series[k++]=2; for(int i=3; i<MAX; i+=2){   if(is_prime[i]==0)   {  prime_series[k++]=i;  if(i<=MAX/i) for(int j=i*i;j<MAX;j+=i*2)is_prime[j]=1; } } Limit= k;return;}

#define MAX 714730
#define N 100000
int arr[MAX], tree[4*MAX];

void initialize(int node, int left, int right)
{
    if(left==right)
    {
        arr[left]= (left*2)-1;
        tree[node]= 1;
        return ;
    }
    int mid;
    mid= (left+right)/2;

    initialize(node*2, left, mid);
    initialize( (node*2)+1, mid+1, right);

    tree[node]= tree[node*2]+tree[node*2 +1];
    return ;
}

int find_ind(int node, int left, int right, int val)
{
    int indx, i, j, k;

    //beyond limit
    if(tree[node]<val)
        return -1;

    if(left==right)
        return left;

    int mid;
    mid= (left+right)/2;
    if(val<=tree[node*2])
        indx= find_ind(node*2, left, mid, val);
    else
        indx= find_ind( (node*2)+1, mid+1, right, val-tree[node*2]);

    return indx;
}

void update(int node, int left, int right, int pos)
{
    if(left==right)
    {
        tree[node]=0;
        return;
    }

    int mid;
    mid= (left+right)/2;

    if(pos<=tree[node*2])
        update(node*2, left, mid, pos);
    else
        update((node*2)+1, mid+1, right, (pos-tree[node*2]) );

    tree[node]= tree[node*2]+tree[node*2 +1];
    return;
}

void gen_lucky_num(void)
{
    int val, pos,  i, x, j, k, indx;
    for(i=2; i<=N; i++)
    {
        VI deleted;
        deleted.clear();
        indx= find_ind(1, 1, MAX-1, i);
        val= arr[indx];
        x=0;
        while(1)
        {
            x+= val;
            pos= find_ind(1, 1, MAX-1, x);

            if(pos==-1)
                break;

            deleted.pb(x);
        }
        for(int k=0; k<SZ(deleted); k++)
        {
            update(1, 1, MAX-1, deleted[k]-k);
        }
    }
    return;
}

int main()
{
    int i, j, k, n, result, t=0, tcase, pos;
    initialize(1, 1, MAX-1);
    gen_lucky_num();

    cin>>tcase;
    while(tcase--)
    {
        scanf("%d", &n);
        pos= find_ind(1, 1, MAX-1, n);
        printf("Case %d: %d\n", ++t, arr[pos]);
    }
}


VOLUME
Volume Home
Problem Set
Problem Category
Problem Setters
Submit Problem
My Submissions
Judge Status
Ranklist
User Statistics
Compare User Statistics

Developed and Maintained by
JANE ALAM JAN
Copyright � 2012
LightOJ, Jane Alam Jan
