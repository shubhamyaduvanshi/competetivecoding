public class MacorPc
{
public static void main(String[] args) {
int luck = 10;
if((luck>10 ? luck++: --luck)<10)
{
System.out.print("MAC");
}
if(luck<10)
System.out.print("PC");
}
}