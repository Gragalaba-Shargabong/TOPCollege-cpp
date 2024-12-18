#include <iostream>
#include <queue>

struct SetElement
{
    int value;
    SetElement* left;
    SetElement* right;

    SetElement(int v)
    {
        value = v;
        left = nullptr;
        right = nullptr;
    }
};

struct IntSet
{
    SetElement* root;

    IntSet()
    {
        root = nullptr;
    }

    ~IntSet()
    {
        std::queue<SetElement*> q;
        q.push(root);
        while (!q.empty())
        {
            SetElement* cur = q.front();
            q.pop();
            if (cur != nullptr)
            {
                q.push(cur->left);
                q.push(cur->right);
                delete cur;
            }
        }
        root = nullptr;
    }

    void add(int key)
    {
        if (root == nullptr)
        {
            root = new SetElement(key);
        }
        else
        {
            SetElement* cur = root;
            while (cur != nullptr)
            {
                if (key < cur->value)
                {
                    if (cur->left == nullptr)
                    {
                        cur->left = new SetElement(key);
                        break;
                    }
                    else
                    {
                        cur = cur->left;
                    }
                }
                else if (key > cur->value)
                {
                    if (cur->right == nullptr)
                    {
                        cur->right = new SetElement(key);
                        break;
                    }
                    else
                    {
                        cur = cur->right;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }


    void remove(int key)
    {
        root = removeRecursive(root, key);
    }

    SetElement* removeRecursive(SetElement* node, int key)
    {
        if (node == nullptr)
            return nullptr;

        if (key < node->value)
            node->left = removeRecursive(node->left, key);
        else if (key > node->value)
            node->right = removeRecursive(node->right, key);
        else
        {
            // Случай 1: Узел с одним или 0 дочерними элементами
            if (node->left == nullptr) {
                SetElement* temp = node->right;
                delete node;
                return temp;
            }
            else if (node->right == nullptr) {
                SetElement* temp = node->left;
                delete node;
                return temp;
            }

            // Случай 2: Узел с двумя дочерними элементами
            SetElement* temp = findMin(node->right); // Находим минимальный в правом поддереве

            node->value = temp->value; // Копируем значение преемника

            node->right = removeRecursive(node->right, temp->value); // Удаляем преемника из правого поддерева
        }
        return node;
    }

    SetElement* findMin(SetElement* node) {
        SetElement* current = node;
        while (current && current->left != nullptr) {
            current = current->left;
        }
        return current;
    }

    void print()
    {
        std::queue<SetElement*> q;
        q.push(root);
        while (!q.empty())
        {
            SetElement* cur = q.front();
            q.pop();
            if (cur != nullptr)
            {
                q.push(cur->left);
                q.push(cur->right);
                std::cout << cur->value << " ";
            }
        }
        std::cout << std::endl;
    }
};

int main()
{
    IntSet set;
    set.add(5);
    set.add(10);
    set.add(2);
    set.add(2);
    set.add(4);
    set.add(3);
    set.add(8);
    set.add(0);
    set.add(6);
    set.add(1);


    std::cout << "Initial set: ";
    set.print();

    set.remove(5);
    std::cout << "Set after removing 5: ";
    set.print();


    set.remove(0);
    std::cout << "Set after removing 0: ";
    set.print();

    set.remove(8);
    std::cout << "Set after removing 8: ";
    set.print();

    set.remove(2);
    std::cout << "Set after removing 2: ";
    set.print();

    set.remove(10);
    std::cout << "Set after removing 10: ";
    set.print();


    return 0;
}