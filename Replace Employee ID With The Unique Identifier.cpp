# Write your MySQL query statement below
select unique_id ,name from Employees e left join employeeuni eu on e.id=eu.id;
