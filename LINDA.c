
int main()
{
    //c program to show seven cases of food preferences
    int food;

    printf("enter food number(1 to 7)");
    scanf("%d",&food);
    switch(food)
    {
        case 1:
        printf("pizza");
        break;
          case 2:
        printf("Eggs");
        break;
          case 3:
        printf("Pilau");
        break;
         case 4:
        printf("Fish");
        break;
          case 5:
        printf("Fillets");
        break;
          case 6:
        printf("creamy chicken");
        break;
          case 7:
        printf("roasted meat");
        break;
        default:
            printf("only enter value 1 to 7");

    }
    return 0;
}
