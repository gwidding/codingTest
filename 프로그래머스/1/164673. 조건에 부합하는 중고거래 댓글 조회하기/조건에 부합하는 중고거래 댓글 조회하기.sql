-- 코드를 입력하세요
SELECT title, 
       t2.board_id,
       reply_id,
       t2.writer_id,
       t2.contents,
       date_format(t2.created_date, '%Y-%m-%d') AS created_date
FROM used_goods_board t1
    right join 
    used_goods_reply t2 ON t1.board_id = t2.board_id 
WHERE t1.created_date like '2022-10%'
ORDER BY t2.created_date, title;