-- 코드를 입력하세요
SELECT history_id, 
       car_id,
       DATE_FORMAT(start_date, '%Y-%m-%d')  start_date,
       DATE_FORMAT(end_date, '%Y-%m-%d') end_date,
       case when DATEDIFF(end_date, start_date) + 1 >= 30 then '장기 대여' else '단기 대여' END as rent_type
FROM car_rental_company_rental_history
WHERE start_date like '2022-09%'
ORDER BY history_id DESC;