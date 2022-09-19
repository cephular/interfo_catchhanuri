using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class IndexComparer : IEqualityComparer<int> {
    public bool Equals(int x, int y) { return x == y; }
    public int GetHashCode(int x) { return x; }
}
public class ObjMgr<DATA> where DATA : class, new() {
    const int EXTRA_CAPACITY = 100;

    Queue<int> m_unusedIdx = new Queue<int>();
    List<DATA> m_listPileOfData = new List<DATA>();
    Dictionary<int, bool> m_dicIsIndexAvailable = new Dictionary<int, bool>(EXTRA_CAPACITY, new IndexComparer());

    public DATA this[int id] {
        get {
            //if(!m_isIndexAvailable.ContainsKey(idx)) { return null; }
            Debug.Assert(m_dicIsIndexAvailable.ContainsKey(id));
            return m_listPileOfData[id];
        }
        set {
            Debug.Assert(m_dicIsIndexAvailable.ContainsKey(id));
            m_listPileOfData[id] = value;
        }
    }
    public DATA Acquire(out int id) {
        if(m_unusedIdx.Count == 0) {
            m_listPileOfData.Add(new DATA());
            id = m_listPileOfData.Count - 1;
            m_dicIsIndexAvailable.Add(id, false);
        }
        else { id = m_unusedIdx.Dequeue(); }

        return m_listPileOfData[id];
    }
    public void Unacquire(int id) {
        Debug.Assert(m_dicIsIndexAvailable.ContainsKey(id));
        m_unusedIdx.Enqueue(id);
        m_dicIsIndexAvailable[id] = true;
    }
}
