-- 코드를 입력하세요
SELECT t1.user_id, t1.product_id
FROM online_sale t1
WHERE t1.online_sale_id in (SELECT online_sale_id
                            FROM online_sale t2
                            GROUP BY t2.user_id, t2.product_id
                            HAVING count(*) > 1)
ORDER BY t1.user_id, t1.product_id desc;