-- 코드를 입력하세요
SELECT history_id, 
       car_id,
       DATE_FORMAT(start_date, '%Y-%m-%d') as start_date,
       DATE_FORMAT(end_date, '%Y-%m-%d') as end_date,
       case when DATEDIFF(end_date, start_date) + 1 >= 30 then '장기 대여' else '단기 대여' END as rent_type
FROM car_rental_company_rental_history
WHERE start_date like '2022-09%'
ORDER BY history_id DESC;

# SELECT  HISTORY_ID,
#         CAR_ID,
#         date_format(START_DATE,'%Y-%m-%d') START_DATE,
#         date_format(END_DATE,'%Y-%m-%d') END_DATE,
#         case when datediff(END_DATE, START_DATE)+1 >= 30
#             then '장기 대여'
#             else '단기 대여'
#             end RENT_TYPE
#   from CAR_RENTAL_COMPANY_RENTAL_HISTORY
#   where date_format(START_DATE,'%Y-%m') = '2022-09'
#   order by HISTORY_ID desc;