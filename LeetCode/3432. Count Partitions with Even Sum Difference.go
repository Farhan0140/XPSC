func countPartitions(nums []int) int {
    prefix := make([]int, len((nums)))
    prefix[0] = nums[0] 

    total_sum := 0

    for i:=1; i<len(nums); i++ {
        prefix[i] = nums[i] + prefix[i-1]
        total_sum = prefix[i]
    }

    cnt := 0

    for i:=0; i<len(nums)-1; i++ {
        right := total_sum - prefix[i]

        if ABS( right - prefix[i] ) % 2 == 0 {
            cnt++
        }
    }

    return cnt
}

func ABS(x int) int {
    if x < 0 {
        return -x
    }

    return x
}