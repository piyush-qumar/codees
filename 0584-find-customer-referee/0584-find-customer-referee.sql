# Write your MySQL query statement below
Select name from Customer where referee_id is null or referee_id !=2;
# IFNULL(referee_id,0) <> 2;
# referee_id is null or referee_id !=2;
