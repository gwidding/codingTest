-- 코드를 입력하세요
SELECT t2.ingredient_type, 
       sum(t1.total_order) as total_order
FROM first_half t1, icecream_info t2
WHERE t1.flavor = t2.flavor
GROUP BY t2.ingredient_type
ORDER BY total_order;