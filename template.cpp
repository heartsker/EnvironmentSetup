/*
 * Created by heartsker.
 * Do not judge strictly.
 */

//  ----------------    INCLUDES    ----------------    //

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <deque>
#include <algorithm>
#include <tuple>

using namespace std;

//  ----------------    TYPEDEFS    ----------------    //

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> ii;
typedef pair<ld, ld> dd;
typedef vector<ll> vi;
typedef vector<ld> vd;
typedef vector<bool> vb;
typedef vector<string> vs;
typedef vector<ii> vii;
typedef vector<dd> vdd;
typedef vector<vi> vvi;
typedef vector<vb> vvb;
typedef set<ll> si;
typedef set<string> ss;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef map<ll, string> mis;
typedef map<ll, vi> mivi;
typedef queue<ll> qi;
typedef queue<ii> qii;

//  ----------------    MACROS      ----------------    //

#define forin(x) for (auto &t : (x))
#define fori(x) for (ll i = 0; i < (x); i++)
#define forj(x) for (ll j = 0; j < (x); j++)
#define xfor(i, a, b) for (ll i = (a); (i) < (b); (i)++)
#define xford(i, a, b) for (ll i = (a); (i) >= (b); (i)--)
#define improve(a, b) a = max((ll)(a), (ll)(b))
#define deprove(a, b) a = min((ll)(a), (ll)(b))
#define is_2_power(x) ((x) && (!((x) & ((x) - 1)))
#define sqr(x) ((x) * (x))
#define uniq(x) ((x).resize(unique(all(x)) - (x).begin()))
#define fastIO() ios::sync_with_stdio(false); In.tie(NULL); Out.tie(NULL)
#define dbg(x) cout << (#x) << " --> " << (x) << endl
#define get_time { (clock() / (double) CLOCKS_PER_SEC) }
#define in(x) forin(x) In >> t
#define out(x) forin(x) Out << t << ' '
#define precision(x) Out << fixed << setprecision(x);
#define all(x) (x).begin(), (x).end()
#define dosort(x) sort(all(x))
#define doreverse(x) reverse(all(x))
#define doperm(x) next_permutation(all(x))
#define get(x) ll x; In >> (x)
#define prt(x) Out << (x)
#define endl '\n'
#define sz size
#define mp(a, b) make_pair((a), (b))
#define min3(a, b, c) min(ll(a), min(ll(b), ll(c)))
#define max3(a, b, c) max(ll(a), max(ll(b), ll(c)))
#define abs0(x) max(L0, ll(x))
#define close_int(x) (ll)((ld)(x) + 0.5)
#define fi first
#define se second
#define pb push_back
#define po pop_back

//  ----------------    CONSTS      ----------------    //

const ld ZERO = 1e-15;
const ld EPS = 1e-10;
const ll N = 1005;
const ll MOD = 1000000007;
const ll INF9 = 1e9;
const ll INF = 1e18;
const ll L0 = 0;
const ll L1 = 1;
const ld PI = acos(-1);

//  ----------------    FUNCTIONS   ----------------    //

// returns whether the number is prime
bool is_prime(ll n) {
    if (n <= 1) return false;
    ll cnt = 0;
    for (ll i = 2; i * i <= n; i++) cnt += !(n % i);
    return !cnt;
}

// returns (a ^ p) % m
ll modulo_power(ll a, ll p, ll m) {
    ll x = 1;
    ll y = a;
    while (p > 0) {
        if (p & 1) x = (x * y) % m;
        y = (y * y) % m;
        p >>= 1;
    }
    return x % m;
}

// returns (a * b) % m
ll mult(ll a, ll b, ll m = INF) {
    if (!a || !b) return 0;
    if (a & 1) return (b + mult(a-1, b, m)) % m;
    return (mult(a / 2, b, m) * 2) % m;
}

// returns sorted list of all prime divisors of number
vi prime_divisors(ll number) {
    vi divisors;
    if (number % 2 == 0) {
        divisors.push_back(2);
        while (!(number % 2)) number /= 2;
    }
    ll start_number = number;
    for (ll p = 3; p <= number && p * p <= start_number; p += 2) {
        if (number % p) continue;
        divisors.push_back(p);
        while (!(number % p)) number /= p;
    }
    if (number - 1) divisors.push_back(number);
    return divisors;
}

// returns GCD(a, b) [GCD(0, 0) = 1]
ll gcd(ll a, ll b) {
    if (!(a || b)) return 1;
    return (b ? gcd(b, a % b) : a);
}

// returns factorial of N (N!)
ll factorial(ll n) {
    return (n > 1) ? n * factorial(n - 1) : 1;
}

//  ----------------    FILES       ----------------    //

//#define FILEINOUT
#ifdef FILEINOUT
ifstream In("Input.txt");
ofstream Out("Output.txt");
#else
#define In cin
#define Out cout
#endif

//  ----------------    CODE        ----------------    //

inline void solve() {
    Out << "hello";
}

signed main() {
    fastIO();
    precision(2);
    setlocale(LC_ALL, "");
    srand(time(nullptr));

    solve();

    return 0;
}