-- Last updated: 30/07/2026, 10:08:08
# Write your MySQL query statement below
select email as email from person 
group by email having count(email) > 1