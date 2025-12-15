func getDescentPeriods(prices []int) int64 {

    var len int64 = 1
    var ans int64 = 0
    prev := -1

    for _, v := range prices {
        if prev - v == 1 {
            len++
            ans += len
        } else {
            ans++;
            len = 1
        }

        prev = v
    }

    return ans
}