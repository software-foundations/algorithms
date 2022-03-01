/*
f(n) is polynominal of dregree k -> f(n) = O(n^k)
*/

function f(n) {
	let accum = 0

	for (let i = 0; i < n * n; i++) {
		accum += 1
	}

	return accum
}

n=5
console.log(f(n))
