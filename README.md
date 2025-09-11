# C++ 練習專案（使用 GitHub Codespaces）

> 全部在雲端完成：註冊 GitHub → 建新 repo → 用 Codespaces 打開 → 編譯執行。  
> 不需在本地安裝任何東西。

---

## 0. 你需要
- 一個 GitHub 帳號（沒有就先註冊：https://github.com → Sign up）

---

## 1. 建立 Repository
1. 登入 GitHub。
2. 右上角 **+** → **New repository**。
3. 取名（例如 `cpp-algorithm-class`），Visibility 選 **Public**。
4. 勾選「**Add a README file**」方便之後直接打開 Codespaces。
5. 點 **Create repository**。

---

## 2. 用 Codespaces 打開
1. 進到你剛建立的 repo。
2. 點綠色 **Code** 按鈕 → **Open with Codespaces** → **Create codespace on main**。  
   （第一次建立大約需要 1–2 分鐘）

> 小知識：Codespaces 是雲端開發環境，預設是 Ubuntu，通常已內建 `g++`。沒裝也可一鍵安裝（下面有指令）。

---

## 3. 新增教材檔案
1. 在左側檔案樹按右鍵 → **New Folder** → 輸入 `test1` 建立資料夾。  
2. 在 `test1` 資料夾上按右鍵 → **New File** → 輸入 `main.cpp`。  
3. 貼上老師提供的「**全部註解、逐行解鎖**」範例檔內容。  
4. 按 **Ctrl+S / Cmd+S** 存檔。  

---

## 4. 編譯與執行（雲端 Terminal）
在 Codespaces 下方 **Terminal** 輸入：

```bash
# 進到 test1 資料夾
cd test1

# 編譯
g++ -std=c++17 -Wall -Wextra main.cpp -o main

# 執行
./main
```

---


## 5. 修改程式 → Commit → Push

> 這一步很重要：把你修改過的程式存回 GitHub！
- 什麼是 git (https://gitbook.tw/chapters/introduction/what-is-git)
- 簡單 4 步驟 (https://www.maxlist.xyz/2018/11/02/git_tutorial/)


### Step 1：修改程式
- 打開 `main.cpp`
- 移除某段註解（`//`），或改變變數內容
- 存檔（**Ctrl+S / Cmd+S**）

### Step 2：Commit
#### 方法 A：GUI（推薦）
1. 點左側 **Source Control** 圖示（小樹枝圖案）
2. 在訊息框輸入提交訊息，例如：`解鎖第一段 main`
3. 點 **Commit**

#### 方法 B：Terminal
```bash
git add main.cpp
git commit -m "解鎖第一段 main"