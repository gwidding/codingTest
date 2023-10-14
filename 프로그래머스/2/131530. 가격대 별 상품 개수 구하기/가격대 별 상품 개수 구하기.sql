-- 코드를 입력하세요
SELECT case when price < 10000 then 0
            else (price div 10000) * 10000 end as price_group,
       count(*) as products
FROM product
GROUP BY price_group
ORDER BY price_group;