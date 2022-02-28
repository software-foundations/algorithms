function quadraticCost(n) {
	for (let i = 0; i < n; i++) {
		console.log(i)

		for (let j = 0; j < n; j++) {
			console.log(j)
		}
	}
}

function quadraticCostWay02(n) {
	for (let i = 0; i < n ** 2; i++) {
		console.log(i)
	}
}

quadraticCost(3)
quadraticCostWay02(3)
