/**
 * Complexity
 * 
 * PrimeFacors -> O(sqrt(n))
 **/

/**
 * @name primeFactors
 * @descriptions return prime numbers wich return number when are multipyed
 **/
function primeFactors(number) {
	console.log(`---${number}---`)

	while ( number % 2 == 0 ) {		
		console.log(2)
		number = number / 2
	}

	// skip one element
	for ( let i = 3; i * i <= number; i = i + 2 ) {

		while ( number % i == 0 ) {
			console.log(i)
			number = number / i
		}
	}

	// when n is a prime number greather than 2
	if ( number > 2 ) {
		console.log(number)
	}
}



function main() {
	for ( let x = 1; x <= 30; x ++) {
		primeFactors(x)
	}

}

main()