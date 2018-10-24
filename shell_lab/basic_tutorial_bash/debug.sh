#!/bin /bash                  
# bash have an extensive debugging provision.in debugging actually it igves step by step what is happenning.
# use bash -x to debugging then run examplle: bash -x debug.sh.
set -x
echo "pid is $$"
while (( COUNT  < 10 ))
do
sleep 10
(( COUNT ++ ))
echo $COUNT
done
exit 0
# debug in commad line as bash -x ./debug.sh
# but in script use as set keyword of bash. so used write as #!/bin/bash -x
# or you can write set -x from where u want to debug. from that point debugging is start .
# and from where u wanr to deactivate debugging write set +x at that point.
