#ifdef __GLIBCXX__  // using libstdc++
#	include <bits/extc++.h>
#else
#	include <algorithm>
#	include <array>
#	include <cassert>
#	include <cctype>
#	include <climits>
#	include <cmath>
#	include <cstddef>
#	include <cstdint>
#	include <deque>
#	include <functional>
#	include <iomanip>
#	include <iterator>
#	include <limits>
#	include <map>
#	include <numeric>
#	include <queue>
#	include <set>
#	include <sstream>
#	include <string>
#	include <type_traits>
#	include <utility>
#	include <vector>
#	if __cplusplus >= 202002L  // using C++20
#		include <bit>
#		include <numbers>
#	endif
#endif

#ifdef LOCAL
#	include "local/debugging.h"
#else
#	define DUMP(...)
#	define cerr	if (false) cerr
#endif

using namespace std;
#define	ALL(v)	begin(v),end(v)
#define	RALL(v)	rbegin(v),rend(v)
template<typename T, int N> constexpr int len(const T (&)[N]) { return N; }
template<typename C> constexpr int len(const C& v) { return int(v.size()); }

const auto large_odd = uint64_t(4e18 * acos(0)) | 71;
const auto ticks_since_epoch = uint64_t(chrono::high_resolution_clock::now().time_since_epoch().count());
struct Hash {
	uint64_t operator()(int64_t x) const
	{
		return __builtin_bswap64((x ^ ticks_since_epoch) * large_odd);
	}
};

#ifdef __GLIBCXX__  // using libstdc++
	template<typename T> using Hash_map = __gnu_pbds::gp_hash_table<int64_t, T, Hash>;
	// example: Hash_map<string> map({}, {}, {}, {}, {1 << 16});
	// constructor: gp_hash_table(const hash_fn& h, const eq_fn& e, const comb_probe_fn& cp, const probe_fn& p, const resize_policy& rp)
#endif

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int casenum = 0;

void solve()
{
	;
}

int main()
{
	ios_base::sync_with_stdio(false);
#ifndef LOCAL
	cin.tie(nullptr);
#endif

	int T = 1;
	//cin >> T;
	while (++casenum <= T) {
		cerr << "Case " << casenum << ":\n-------\n";
		solve();
		cerr << '\n';
	}
}
