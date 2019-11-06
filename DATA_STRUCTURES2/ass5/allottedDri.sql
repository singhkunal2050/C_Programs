

drop function   allottedDri(b_no int, d_date date);
create function allottedDri(b_no int, d_date date)
returns char(10) as $$
declare
a char(10);
begin
select driver.dname into a from driver,bus,bus_dri where driver.dno=bus_dri.dno AND bus.bno=bus_dri.bno AND bus_dri.bno=b_no AND bus_dri.dateofduty=d_date group by dname ;

if not found  then
raise exception 'NOT FOUND!!!';
end if;
return a;
end;
$$ language 'plpgsql'


