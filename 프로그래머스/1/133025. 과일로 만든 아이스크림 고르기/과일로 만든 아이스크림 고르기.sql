-- 코드를 입력하세요
SELECT distinct t1.flavor
FROM first_half t1, icecream_info t2
WHERE total_order >= 3000 and ingredient_type = 'fruit_based' and t1.flavor = t2.flavor
ORDER BY total_order desc;