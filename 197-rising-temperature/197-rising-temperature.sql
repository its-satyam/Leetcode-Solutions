# Write your MySQL query statement below
select x.id from Weather x , Weather y where DATEDIFF(x.recordDate, y.recordDate) = 1 and x.temperature>y.temperature