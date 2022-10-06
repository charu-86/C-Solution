//C Program to Compute Charges for Sending Parcels as per its Weight

#include<stdio.h>
#include<conio.h>
int main()
{
    float weight, initCharge=32.50, perCharge=10.50, tempWeight, addCharge, totalCharge;
    printf("Enter weight of the parcel (in Kg): ");
    scanf("%f", &weight);
    printf("\n");
    if(weight<=2)
        printf("Charge = %0.2f", initCharge);
    else
    {
        tempWeight = weight-2;
        addCharge = tempWeight * perCharge;
        totalCharge = addCharge + initCharge;
        printf("Charge = %0.2f", totalCharge);
    }
    getch();
    return 0;
}
