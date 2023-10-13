-- 코드를 입력하세요
SELECT mcdp_cd as 진료과코드,
    count(*) as 5월예약건수
FROM appointment
WHERE apnt_ymd like '2022-05%'
GROUP BY 진료과코드
ORDER BY 5월예약건수, 진료과코드;