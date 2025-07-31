# 📘 PLD Interview Prep – C Language

---

## 🔗 Singly Linked Lists

### ❓ What is a singly linked list?
A singly linked list is a linear data structure where each node contains:
- a value (data),
- a pointer to the next node.  
It allows traversal in only one direction.

---

### 🟢 How do you initialize an empty singly linked list?
```c
node_t *head = NULL;
```

---

### ➕ Logical steps to add a node at the beginning
1. Allocate a new node.  
2. Set its `next` to point to the current `head`.  
3. Update `head` to point to the new node.

---

### ➕ Logical steps to add a node at the end
1. Traverse the list until the last node (`next == NULL`).  
2. Allocate a new node.  
3. Set the last node’s `next` to the new node.

---

### ❌ Logical steps to delete the node at index 4 (from a list of 7 nodes)
1. Traverse to the node at index 3.  
2. Keep a reference to the node at index 4.  
3. Update `node3->next` to point to `node5`.  
4. Free the memory of `node4`.

---

### ➕ Logical steps to insert a node at index 3 (in a list of 7 nodes)
1. Traverse to the node at index 2.  
2. Allocate a new node.  
3. Set `new->next` to `node3`, and `node2->next` to `new`.

---

## 🔁 Doubly Linked Lists

### ❓ What is a doubly linked list?
A doubly linked list is a data structure where each node contains:
- data,
- a pointer to the next node,
- a pointer to the previous node.  
It allows forward and backward traversal.

---

### 🟢 How to check if a doubly linked list is empty?
```c
if (head == NULL) {
    // list is empty
}
```

---

### 🔄 How to traverse a doubly linked list in reverse order
1. Go to the last node using `while (current->next != NULL)`.  
2. Traverse back using `prev` pointers.

---

### ➕ Logical steps to add a node at the beginning
1. Allocate a new node.  
2. Set `new->next = head`, and `new->prev = NULL`.  
3. Set `head->prev = new`.  
4. Update `head = new`.

---

### ➕ Logical steps to add a node at the end
1. Traverse to the last node.  
2. Allocate a new node.  
3. Set `last->next = new` and `new->prev = last`.

---

### ➕ Logical steps to add a node at index 3 (in a list of 6 nodes)
1. Traverse to the node at index 2.  
2. Allocate a new node.  
3. Set:
   - `new->prev = node2`
   - `new->next = node3`  
4. Update:
   - `node2->next = new`
   - `node3->prev = new`

---

### ❌ Logical steps to delete node at index 3 (from a list of 6 nodes)
1. Traverse to node at index 3.  
2. Update:
   - `node2->next = node4`
   - `node4->prev = node2`  
3. Free node 3.

---

## 📁 File I/O in C

### ❓ What is a file descriptor?
A **file descriptor** is an integer that uniquely identifies an open file or I/O resource within a process.

---

### 🔢 What are the 3 standard file descriptors?

| FD  | Name     | Description         |
|-----|----------|---------------------|
| 0   | `stdin`  | Standard input      |
| 1   | `stdout` | Standard output     |
| 2   | `stderr` | Standard error      |

---

### ⚙️ What are the following flags used for?

| Flag       | Description                          |
|------------|--------------------------------------|
| `O_RDONLY` | Open in read-only mode               |
| `O_WRONLY` | Open in write-only mode              |
| `O_RDWR`   | Open in read/write mode              |
| `O_CREAT`  | Create file if it does not exist     |
| `O_APPEND` | Append writes to the end of file     |

---

### 🧠 What is the Kernel?
The **kernel** is the core of the operating system. It handles:
- memory management,
- process scheduling,
- I/O operations,
- system calls,
- device control.  
It acts as a **bridge between applications and hardware**.

---

### 🔌 What is a system call?
A **system call** is a request made by a user-level program to the operating system’s kernel to perform a specific service (e.g. reading a file, creating a process, etc.).

---

### 🛠️ Operations that require system calls:
- `open`, `read`, `write`, `close`  
- `fork`, `exec`  
- `socket`, `bind`, `listen`, `accept`  
- memory allocation via the OS

---

### 🔍 Difference between a function and a system call

| Function (e.g. `strlen`)         | System Call (e.g. `write`)              |
|----------------------------------|-----------------------------------------|
| Runs in **user space**           | Switches to **kernel space**            |
| Fast, doesn't access hardware    | Slower, accesses hardware/kernel data   |
| Doesn’t need kernel privileges   | Requires kernel interaction             |
