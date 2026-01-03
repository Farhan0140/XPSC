func countNegatives(grid [][]int) int {
    cnt := 0

    for _, arr := range grid {
        var (
            l = 0
            r = len(arr) - 1
        )

        for l <= r {
            mid := (l + r) / 2
            if arr[mid] < 0 {
                r = mid - 1
            } else {
                l = mid + 1
            }
        }

        cnt += len(arr) - l
    }

    return cnt
}