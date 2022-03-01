function primeNumber(number) {
	if (number <= 1) {
		return
	}

	for (let i = 2; i < number; i++) {
		if (number%i == 0) {
			return
		}
	}

	console.log(`${number} is Prime`)

}

for (let x = 0; x <= 11; x++) {
	primeNumber(x)
}
