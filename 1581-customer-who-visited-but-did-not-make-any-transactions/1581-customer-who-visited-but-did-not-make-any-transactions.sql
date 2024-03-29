# Write your MySQL query statement below
select customer_id,count(v.visit_id) as count_no_trans from Visits v 
  natural left join Transactions t
  where t.visit_id is NULL
  group by customer_id
  order by count_no_trans DESC;