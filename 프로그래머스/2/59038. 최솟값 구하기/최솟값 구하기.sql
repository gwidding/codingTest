-- 코드를 입력하세요
SELECT datetime as 시간
FROM animal_ins
WHERE datetime = ( SELECT min(datetime) from animal_ins );