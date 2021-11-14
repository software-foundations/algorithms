// O(log n)

function logarithmicCost(n) {
	for (var i = 2; i<= n; i = i*2) {
		console.log(i)
	}
}

logarithmicCost(100)
