-- 코드를 입력하세요
select t3.author_id, t3.author_name, t2.category, sum(sales * price) as total_sales
from book_sales as t1 
	inner join book as t2 on t1.book_id = t2.book_id
    inner join author as t3 on t2.author_id = t3.author_id
where sales_date like '2022-01%'
group by t3.author_id, t3.author_name, t2.category
order by t3.author_id, t2.category desc;
