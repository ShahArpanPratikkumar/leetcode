-- Last updated: 01/08/2026, 21:30:05
# Write your MySQL query statement below
SELECT e.name AS Employee
FROM Employee e
JOIN Employee m
  ON e.managerId = m.id
WHERE e.salary > m.salary;