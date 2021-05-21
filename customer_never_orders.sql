-- https://leetcode.com/problems/customers-who-never-order/

SELECT Name as Customers from Customers WHERE Id NOT IN (
    SELECT CustomerId from Orders
);
