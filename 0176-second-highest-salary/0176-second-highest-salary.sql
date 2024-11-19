# Write your MySQL query statement below

select (
    select case when count(*) > 1 then (select distinct salary as SecondHighestSalary 
    from employee 
    order by salary desc
    limit 1,1)
    else NULL
    end as SecondHighestSalary
    from employee
) as SecondHighestSalary
