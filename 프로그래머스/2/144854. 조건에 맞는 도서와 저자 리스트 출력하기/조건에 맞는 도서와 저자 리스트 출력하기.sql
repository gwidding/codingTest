-- 코드를 입력하세요
SELECT book_id, 
       author_name,
       date_format(published_date, '%Y-%m-%d') as published_date
FROM book, author
WHERE book.author_id = author.author_id
    AND category = '경제'
ORDER BY published_date;