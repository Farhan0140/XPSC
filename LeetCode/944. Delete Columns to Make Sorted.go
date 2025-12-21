func minDeletionSize(strs []string) int {
    cnt := 0

    for i:=0; i<len(strs[0]); i++ {
        for j:=0; j<len(strs)-1; j++ {
            if strs[j][i] > strs[j+1][i] {
                cnt++
                break
            }
        }
    }

    return cnt
}