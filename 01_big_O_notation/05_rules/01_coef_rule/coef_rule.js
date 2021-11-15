/*
Coeficient rule
f(n) == O(g(n)) -> c * f(n) == O(g(n)); c > 0

It means that if n -> oo, then c is not important, 'cause it's not related
to the input (n) lengh

# TIP: think in infite when form bigO notations
*/

// n -> O(n)
function linear(n) {
	let accum = 0;
	for (let i = 0; i < n; i ++) {
		accum += 1
	}
	return accum
}

// constant * n -> O(n)
function c_linear(n) {
	let accum = 0
	let c = 10
	for (let i = 0; i < c * n; i ++) {
		accum += 1
	}

	return accum
}

n = 4
console.log("linear   -> " + linear(n))
console.log("c_linear -> " + c_linear(n))