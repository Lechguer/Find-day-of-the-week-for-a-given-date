# 📅 Day of the Week Calculator (C)

A C program that calculates the **day of the week** for any given date (past or future) using a **formula-based arithmetic approach**, without relying on built-in date libraries. This is an educational project that demonstrates **modular arithmetic, century adjustment, and leap year handling**.

---

## 📝 Description

Given a date `(day, month, year)`, this program determines the day of the week. The program returns an integer from **0 to 6**, where:

| Value | Day       |
|-------|-----------|
| 0     | Sunday    |
| 1     | Monday    |
| 2     | Tuesday   |
| 3     | Wednesday |
| 4     | Thursday  |
| 5     | Friday    |
| 6     | Saturday  |

**Examples:**

| Date                     | Output | Day       |
|---------------------------|--------|-----------|
| 30 August 2010           | 1      | Monday    |
| 15 June 1995             | 4      | Thursday  |
| 29 February 2016         | 1      | Monday    |

---

## 🧠 Algorithm (Formula-Based Approach)

The program uses the following formula:

```c
dayOfWeek = (day + monthCode + yearCode) % 7;
