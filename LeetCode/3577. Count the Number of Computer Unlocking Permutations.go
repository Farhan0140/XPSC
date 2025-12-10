func countPermutations(cmp []int) int {
    fact := 1

    for i:=0; i<len(cmp); i++ {
        if i >= 1 && cmp[0] >= cmp[i] {
            return 0
        }

        if i >= 1 {
            fact = (fact * i) % 1000000007
        }
    }

    return fact
}