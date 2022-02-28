// O(n³)

function cubicCost(n) {

  for (let i = 0; i <= n; i++) {
    console.log(i)

    for (let j = 0; j <= n; j++) {
      console.log(j)

      for (let k = 0; k <= n; k++) {
        console.log(k)
      }
    }
  }
}

function cubicCostWay02(n) {

  for (let i = 0; i <= n ** 3; i++) {
    console.log(i)
  }
}

cubicCost(3)
// cubicCostWay02(3)
