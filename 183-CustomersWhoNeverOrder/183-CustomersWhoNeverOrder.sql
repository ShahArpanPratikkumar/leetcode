-- Last updated: 30/07/2026, 10:08:05
# Write your MySQL query statement below
select name as Customers from Customers
where id not in (select customerId from Orders) 