-- 코드를 입력하세요
SELECT book_id,
       DATE_FORMAT(published_date, '%Y-%m-%d') as published_date
FROM book
WHERE published_date like '2021%' AND category like '인문'
ORDER BY published_date;