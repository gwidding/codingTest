-- 코드를 입력하세요
SELECT car_type, count(*) as cars
FROM car_rental_company_car
WHERE options like '%시트%'
GROUP BY car_type
ORDER BY car_type;
