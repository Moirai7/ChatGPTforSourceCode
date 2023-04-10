
# original code snippet
def carFleet(self, target, pos, speed):
    time = [float(target - p) / s for p, s in sorted(zip(pos, speed))]
    res = cur = 0
    for t in time[::-1]:
        if t > cur:
            res += 1
            cur = t
    return res
  
# obfuscated code snippet
 def asdfsadsdf(self, sdgdfg, asdf, asdfert):
    a12123345 = [float(sdgdfg - p) / s for p, s in sorted(zip(asdf, asdfert))]
    yitiu = vbnv = 0
    for sg in a12123345[::-1]:
        if sg > vbnv:
            yitiu += 1
            vbnv = sg
    return yitiu 
