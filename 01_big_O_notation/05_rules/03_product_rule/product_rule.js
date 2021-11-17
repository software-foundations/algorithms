/*
 f(n) = O(p(n))
                -> O(p(n)q(n))
 g(n) = O(q(n))
*/

function product_fg(n) {
    let accum = 0

    // f
    for (let i = 0; i < n; i ++) {
        accum += 1

        // g
        for (let j = 0; j < n; j ++) {
            accum += 1
        }
    }

    return accum;
}

n = 5
console.log(product_fg(n))
