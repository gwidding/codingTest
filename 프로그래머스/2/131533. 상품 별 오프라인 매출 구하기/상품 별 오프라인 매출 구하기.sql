-- 코드를 입력하세요
SELECT t1.product_code, sum(t1.price * t2.sales_amount)as sales
FROM product t1
    INNER JOIN offline_sale t2 ON t1.product_id = t2.product_id
GROUP BY t2.product_id
ORDER BY sales desc, t1.product_code;

# select product_id, sum(sales_amount) from offline_sale
# group by product_id;

# select * from product;

