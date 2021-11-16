/*
 f(n) = O(p(n))
                ->  O(p(n) + q(n))
 g(n) = O(q(n))
*/

function f(n) {
    let accum = 0
    for (let i = 0; i < n; i ++) {
        accum +=1
    }    
    return accum
}

function g(n) {
    let accum = 0
    let c = 10
    for (let i = 0; i < c * n; i ++) {
        accum += 1
    }
    return accum
}

function sum_fg(n) {
    f(n)
    g(n)
    return 0
}

function sum_fg_v2(n) {
    let accum = 0
    let c = 10

    for (let i = 0; i < n; i ++) {
        accum += 1
    }

    for (let i = 0; i < c * n;  i ++) {
        accum +=1
    }

    return accum

}

n = 5
console.log( sum_fg(n) )
console.log( sum_fg_v2(n) )
