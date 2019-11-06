
drop function	busses();
create function busses()
returns char(10) as $$
declare 
a char(10);
begin 
select driver.dname into a from driver,bus,bus_dri where driver.dno=bus_dri.dno AND
bus_dri.shift='Morning' AND bus_dri.dateofduty='2018-11-14' AND dname in(select dname from driver,bus_dri where driver.dno=bus_dri.dno AND bus_dri.shift='Evening' AND bus_dri.dateofduty='2018-11-14');
if a=0  then
raise exception 'NOT FOUND!!!';
end if;
return a;
end;
$$ language 'plpgsql'

