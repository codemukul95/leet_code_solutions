class Solution(object):
    def uncommonFromSentences(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: List[str]
        """
        listA = A.split(' ')
        listB = B.split(' ')
        dictA = {}
        dictB = {}
        for s in listA:
            if s not in dictA:
                dictA[s] = 1
            else:
                dictA[s] += 1
        
        for s in listB:
            if s not in dictB:
                dictB[s] = 1
            else:
                dictB[s] += 1
        
        listUncommon = []
        
        for s in dictA.keys():
            if dictA[s] == 1 and s not in dictB.keys():
                listUncommon.append(s)
        
        for s in dictB.keys():
            if dictB[s] == 1 and s not in dictA.keys():
                listUncommon.append(s)
        
        return listUncommon
    
