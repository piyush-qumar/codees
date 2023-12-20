# Write your MySQL query statement below
Select Sales.price, Sales.year, Product.product_name from Product right join Sales on Sales.product_id = Product.product_id;