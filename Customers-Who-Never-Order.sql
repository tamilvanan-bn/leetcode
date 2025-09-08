# Write your MySQL query statement below

SELECT name as Customers
FROM customers
WHERE id NOT IN (
    SELECT customerid 
    FROM orders
)