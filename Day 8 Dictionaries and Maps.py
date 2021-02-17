#!/usr/bin/env python
# coding: utf-8

# In[ ]:


n=int(input())
d={}
for i in range(n):
    s=input().split()
    d[s[0]]=s[1]
    
while True:
    try:
        k=input()
        if k in d.keys():
            print("{0}={1}".format(k,d[k]))
        else:
            print("Not found")
    except:
        break


# In[ ]:




