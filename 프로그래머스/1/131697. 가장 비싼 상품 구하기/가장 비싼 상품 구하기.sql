-- 코드를 입력하세요
SELECT price as max_price
FROM product
WHERE price = (SELECT max(price) FROM product);