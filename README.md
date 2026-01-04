# TRON Vanity Address Generator

[English](#english) | [中文](#中文)

---

## English

High-performance TRON vanity address generator with GPU/CPU OpenCL acceleration.

### 🎬 Demo

![Running Demo](images/2026-01-04%2023-18-38.gif)

### ✨ Features

| Mode | Description | Example |
|------|-------------|---------|
| 🐆 Leopard | Trailing repeated characters | `T...AAAA`, `T...8888` |
| 📈 Sequential | Trailing sequential characters | `T...12345`, `T...abcde` |
| 🎯 Custom Suffix | Match specific suffix | `T...888`, `T...666` |
| 🍀 Lucky Number | Chinese lucky numbers | `T...5211314`, `T...168888` |

### 🔧 Build

```bash
make
```

### 📖 Usage

```bash
# Show help
./tron-vanity --help

# Leopard number (default: 4+ repeated chars)
./tron-vanity --tron-repeat

# Leopard number (at least 6 repeated chars)
./tron-vanity --tron-repeat --repeat-count 6

# Sequential number (default: 4+ sequential chars)
./tron-vanity --tron-sequential

# Sequential number (at least 5 sequential chars)
./tron-vanity --tron-sequential --sequential-count 5

# Custom suffix (single)
./tron-vanity --tron-suffix 888

# Custom suffix (multiple, comma-separated)
./tron-vanity --tron-suffix 888,999,666

# Custom suffix with wildcard
./tron-vanity --tron-suffix 888XXX

# Lucky number
./tron-vanity --tron-lucky
```

### ⚙️ Device Control

```bash
# Force GPU
./tron-vanity --tron-suffix 888 --device gpu

# Force CPU
./tron-vanity --tron-suffix 888 --device cpu

# Limit CPU cores
./tron-vanity --tron-suffix 888 --device cpu --cpu-cores 4

# Limit GPU memory usage
./tron-vanity --tron-suffix 888 --gpu-mem 50
```

### 📊 Parameters

| Parameter | Description | Default |
|-----------|-------------|---------|
| `-R, --tron-repeat` | Leopard number mode | - |
| `-r, --repeat-count` | Min repeated chars | 4 |
| `-S, --tron-sequential` | Sequential number mode | - |
| `-s, --sequential-count` | Min sequential chars | 4 |
| `-T, --tron-suffix` | Custom suffix (max 18 chars, total 20 chars) | - |
| `-L, --tron-lucky` | Lucky number mode | - |
| `-d, --device` | Device type: gpu, cpu | Auto |
| `-c, --cpu-cores` | CPU cores limit | All |
| `-g, --gpu-mem` | GPU memory percentage | 100 |

### 📁 Output

Generated addresses are saved to `output/` directory:
- Filename: Address (e.g., `TW7Kze8zohyiJjk9Y9BDtP4w94ew3So888.txt`)
- Content: Private key

### 🔐 Security

- Auto-generates seed keypair
- Private keys displayed with masking
- Full private key only saved locally
- Private Key = Seed Private Key + Offset
- No third-party trust required

---

## 中文

高性能 TRON 网络靓号地址生成器，使用 GPU/CPU OpenCL 加速计算。

### 🎬 运行演示

![运行演示](images/2026-01-04%2023-18-38.gif)

### ✨ 功能特点

| 模式 | 说明 | 示例 |
|------|------|------|
| 🐆 豹子号 | 末尾重复字符 | `T...AAAA`, `T...8888` |
| 📈 顺子号 | 末尾连续字符 | `T...12345`, `T...abcde` |
| 🎯 自定义后缀 | 匹配指定后缀 | `T...888`, `T...666` |
| 🍀 谐音靓号 | 中国吉祥数字 | `T...5211314`, `T...168888` |

### 🔧 编译

```bash
make
```

### 📖 使用方法

```bash
# 查看帮助
./tron-vanity --help

# 豹子号（默认至少4位重复）
./tron-vanity --tron-repeat

# 豹子号（至少6位重复）
./tron-vanity --tron-repeat --repeat-count 6

# 顺子号（默认至少4位连续）
./tron-vanity --tron-sequential

# 顺子号（至少5位连续）
./tron-vanity --tron-sequential --sequential-count 5

# 自定义后缀（单个）
./tron-vanity --tron-suffix 888

# 自定义后缀（多个，逗号分隔）
./tron-vanity --tron-suffix 888,999,666

# 自定义后缀（使用通配符）
./tron-vanity --tron-suffix 888XXX

# 谐音靓号
./tron-vanity --tron-lucky
```

### ⚙️ 设备控制

```bash
# 强制使用 GPU
./tron-vanity --tron-suffix 888 --device gpu

# 强制使用 CPU
./tron-vanity --tron-suffix 888 --device cpu

# 限制 CPU 核心数
./tron-vanity --tron-suffix 888 --device cpu --cpu-cores 4

# 限制 GPU 显存使用
./tron-vanity --tron-suffix 888 --gpu-mem 50
```

### 📊 参数说明

| 参数 | 说明 | 默认值 |
|------|------|--------|
| `-R, --tron-repeat` | 豹子号模式 | - |
| `-r, --repeat-count` | 最少重复位数 | 4 |
| `-S, --tron-sequential` | 顺子号模式 | - |
| `-s, --sequential-count` | 最少连续位数 | 4 |
| `-T, --tron-suffix` | 自定义后缀（单个最长18字符，总长不超20字符） | - |
| `-L, --tron-lucky` | 谐音靓号模式 | - |
| `-d, --device` | 设备类型: gpu, cpu | 自动检测 |
| `-c, --cpu-cores` | CPU 核心数限制 | 全部 |
| `-g, --gpu-mem` | GPU 显存百分比 | 100 |

### 📁 输出

生成的地址保存到 `output/` 目录：
- 文件名：地址（如 `TW7Kze8zohyiJjk9Y9BDtP4w94ew3So888.txt`）
- 文件内容：私钥

### 🔐 安全说明

- 自动生成种子密钥对
- 私钥加密显示（中间部分用*号遮蔽）
- 完整私钥仅保存在本地文件
- 私钥 = 种子私钥 + 偏移量
- 无需信任第三方

### 💻 运行示例

```
自动生成密钥对...
种子私钥: 0x62299d****************************************************e41e86

模式: tron-suffix (自定义后缀)
设备:
  GPU0: Apple M1 Pro
      内存: 12124 MB, 计算单元: 14, 频率: 1000 MHz

[00:00:36] 速度: 8.890 MH/s | 已搜索: 52M | 已找到: 1
  地址: TSMJHADGjtae7UHMLMs8iWebDwfh1tY888
  私钥: 0x622a5f****************************************************3abab5
  已保存: output/TSMJHADGjtae7UHMLMs8iWebDwfh1tY888.txt
```

---

## 🖥️ System Requirements | 系统要求

- OpenCL compatible GPU or CPU | 支持 OpenCL 的 GPU 或 CPU
- macOS / Linux / Windows

## 🙏 Credits | 致谢

- Based on [profanity2](https://github.com/1inch/profanity2)
- Original project [profanity](https://github.com/johguse/profanity) by Johan Gustafsson

## 📬 Contact | 联系方式

- Telegram: [@jason20260101](https://t.me/jason20260101)

## 📄 License

MIT License

