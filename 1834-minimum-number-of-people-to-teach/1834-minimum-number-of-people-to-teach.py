class Solution:
    def minimumTeachings(self, n: int, languages: List[List[int]], friendships: List[List[int]]) -> int:
        peo_notcomm= set()

        for u,v in friendships:
            comm_poss=False
            u_set=set(languages[u-1])
            for lang in languages[v-1]:
                if lang in u_set:
                    comm_poss=True
                    break
            if comm_poss==False:
                peo_notcomm.add(u-1)
                peo_notcomm.add(v-1)
            
        
        if not peo_notcomm :
            return 0
        
        cnt=[0]*n
        for man in peo_notcomm:
            for lang in languages[man]:
                cnt[lang-1]+=1
            
        max_cnt=0
        for c in cnt:
            max_cnt=max(max_cnt,c)

        return len(peo_notcomm)-max_cnt