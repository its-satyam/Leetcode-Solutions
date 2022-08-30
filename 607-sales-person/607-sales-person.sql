# Write your MySQL query statement below
select s.name from salesperson s where s.sales_id not in(
    select orders.sales_id from orders join company using(com_id) where company.name = "RED"
)