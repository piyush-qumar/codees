# Write your MySQL query statement below
# SELECT
#     Examinations.student_id,
#     Students.student_name,
#     Examinations.subject_name,
    
#     COUNT(*) AS attended_exams
# FROM
#     Examinations left join Students on Examinations.student_id = Students.student_id
# GROUP BY
#     student_id,
#     subject_name
# ORDER BY
#     student_id,
#     subject_name,
#     attended_exams DESC;
SELECT s.student_id, s.student_name, sub.subject_name, count(e.student_id) as attended_exams 
from Students s 
cross join Subjects sub
left join Examinations e 
on s.student_id = e.student_id and sub.subject_name = e.subject_name
group by s.student_id, sub.subject_name, s.student_name
ORDER BY s.student_id, sub.subject_name;
