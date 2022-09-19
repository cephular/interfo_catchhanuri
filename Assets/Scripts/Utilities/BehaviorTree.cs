
using System.Collections.Generic;

namespace com.evehour.ai.behaviortree
{
    public enum NodeStatus { Nomal, Progressing };
    public enum NodeType { Root, Selector, Sequence, Task };

    public abstract class Node
    {
        public abstract NodeType GetNodeType();
        public abstract NodeStatus GetNodeStatus();
        public abstract void SetNodeStatus(NodeStatus val);
        public abstract bool Run();
    }

    class BehaviorTree
    {
        public abstract class CompositeNode : Node
        {
            protected List<Node> childs;
            public List<Node> ChildNodes { get { return childs; } }
            void AddChild(Node child) { childs.Add(child); }
            public void RemoveChild(Node targetChild) { childs.Remove(targetChild); }
            public void RemoveChilds() { childs.Clear(); }

            protected List<Node> conditions;
            public List<Node> ConditionNodes { get { return conditions; } }
            void AddCondition(Node condition) { conditions.Add(condition); }
            public void RemoveCondition(Node targetCondition) { conditions.Remove(targetCondition); }
            public void RemoveConditions() { conditions.Clear(); }
            protected bool CheckCondition()
            {
                foreach (Node n in ConditionNodes)
                {
                    if (n.Run() != false)
                        return false;
                }

                return true;
            }
        }

        // 하나라도 성공하면 true 반환.
        public class Selector : CompositeNode
        {
            NodeStatus status;
            public Selector()
            {
                conditions = new List<Node>();
                childs = new List<Node>();
                status = NodeStatus.Nomal;
            }

            public override NodeType GetNodeType() { return NodeType.Selector; }
            public override NodeStatus GetNodeStatus() { return status; }
            public override void SetNodeStatus(NodeStatus val) { status = val; }
            public override bool Run()
            {
                if (CheckCondition() == false) return false;

                foreach (Node n in ChildNodes)
                {
                    if (n.Run() == true)
                        return true;
                }

                return false;
            }
        }

        // 하나라도 실패하면 false 반환.
        class Sequence : CompositeNode
        {
            NodeStatus status;
            public Sequence()
            {
                conditions = new List<Node>();
                childs = new List<Node>();
                status = NodeStatus.Nomal;
            }

            public override NodeType GetNodeType() { return NodeType.Sequence; }
            public override NodeStatus GetNodeStatus() { return status; }
            public override void SetNodeStatus(NodeStatus val) { status = val; }
            public override bool Run()
            {
                if (CheckCondition() == false) return false;

                foreach (Node n in ChildNodes)
                {
                    if (n.Run() == false)
                        return false;
                }

                return true;
            }
        }

        class Root : Node
        {
            NodeStatus status;
            internal Node child;

            public Root()
            {
                child = null;
                status = NodeStatus.Nomal;
            }

            internal void SetChild(Node newChild) { child = newChild; }

            public override NodeType GetNodeType() { return NodeType.Root; }
            public override NodeStatus GetNodeStatus() { return status; }
            public override void SetNodeStatus(NodeStatus val) { status = val; }
            public override bool Run() {
                if (child == null) return false;
                return child.Run();
            }
        }

        private Root root;
        public BehaviorTree()
        {
            root = new Root();
        }

        public BehaviorTree(Node childNode) : this()
        {
            root.SetChild(childNode);
        }

        public void SetRootChild(Node node) { root.SetChild(node); }
        public virtual bool Run() { return root.Run(); }
    }
}
