/*types of pointers 
wild pointer : we declare a pointer variable and not define it its is called wild pointer 
declare but not initialize it due to this a ramdom memory is allocated it cause a problematic;and segmentation fault
drawback was if we did'nt want to define it at time and further we can use it as per requirement which is not possible


Null pointer :if we want to have a pointer var which is just decalred but will get address later in that 
case use null pointer like int * ptr=null;
drawback is if you dereference it in null gives you segmentation fault 
e.g=
int main(){
int *ptr=null;
cout<<ptr ;is okay// 
cout<<*ptr ; will give error}

dangling pointer (dang) : it isa type of pointer that pointes to a memory location not valid 
int *ptr=null;
{
int x=10;
ptr=&x;
}
cout<<ptr;

void pointer : generic pointer like a reusable pointer that can point to any datatype value 
void pointer cannot be directly derefernced 
int main(){
float f=10.2;
int x=10;
void *ptr=&f;
ptr=&x;
int *integerpointer = (int * )ptr;
cout<<*integerpointer<<"\n";

return 0;}

*/