#include <stdio.h>
#include <unistd.h>
#include <string.h>

void help(){
    printf("aaaa\n");
}


void createConfig(char *cwd){
    FILE *filePointer;

    char startAssets[15], PTimeCost[15], CTimeCost[15],
        WorkerTeamNum[15], EngTeamNum[15], PNeededC[15],
        StoreC[15], StroeP[15], TrainWorker[15], TrainEng[15], Trans[15];

    filePointer = fopen(cwd, "w");

    printf("Note that if your comptition is no value, enter <0>\n");

    printf("please enter your starting assets : ");
    scanf("%s", &startAssets);
    fprintf(filePointer, "\nstartAssets: ");
    fprintf(filePointer, startAssets);

    printf("please enter the time needed to produce one Product : ");
    scanf("%s", &PTimeCost);
    fprintf(filePointer, "\nTimeCostOfProduct: ");
    fprintf(filePointer, PTimeCost);

    printf("please enter the time needed to produce one Component : ");
    scanf("%s", &CTimeCost);
    fprintf(filePointer, "\nTimeCostOfComponent: ");
    fprintf(filePointer, CTimeCost);

    printf("please enter the Worker needed in formula : ");
    scanf("%s", &WorkerTeamNum);
    fprintf(filePointer, "\nnumberOfWorker: ");
    fprintf(filePointer, WorkerTeamNum);

    printf("please enter the Engineer needed in formula : ");
    scanf("%s", &EngTeamNum);
    fprintf(filePointer, "\nnumberOfEngineer: ");
    fprintf(filePointer, EngTeamNum);

    printf("please enter How many Component needed to produce one Product : ");
    scanf("%s", &PNeededC);
    fprintf(filePointer, "\nPNeededC: ");
    fprintf(filePointer, PNeededC);

    printf("please enter the Storage cost of Component : ");
    scanf("%s", &StoreC);
    fprintf(filePointer, "\nStorageOfC: ");
    fprintf(filePointer, StoreC);

    printf("please enter the Storage cost of Product : ");
    scanf("%s", &StroeP);
    fprintf(filePointer, "\nStorageOfP: ");
    fprintf(filePointer, StroeP);

    printf("please enter the Training cost of Worker : ");
    scanf("%s", &TrainWorker);
    fprintf(filePointer, "\nTrainWorker: ");
    fprintf(filePointer, TrainWorker);

    printf("please enter the Training cost of Engineer : ");
    scanf("%s", &TrainEng);
    fprintf(filePointer, "\nTrainEng: ");
    fprintf(filePointer, TrainEng);

    printf("please enter the Transportation costs : ");
    scanf("%s", &Trans);
    fprintf(filePointer, "\nTrans: ");
    fprintf(filePointer, Trans);

    fclose(filePointer);
}


int main(int argc, char *argv[]){
    printf("Please Follow the instraction!!!!!! This program didn't fixing any eatra-bug.\n");

    char cwd[100];
    char test[50] = "/config.txt";
    char BOolen[5];
    FILE *configFilePointer;


    getcwd(cwd,100);
    printf("Your current working path is %s\n", cwd);
    printf("Hello/You\n");

    strcat(cwd,test);

    if (!access(cwd, 0)){
        printf("Already exisit config, loading-----------------\n");
        printf("Do you need reset the config?<y/n(defualt)> :\n");
        scanf("%s", &BOolen);
        if (BOolen == "y"){
            createConfig(cwd);
        }

    }else{
        createConfig(cwd);

    }
    
    printf("Config is ready, processing------------------------\n");
    printf("dude, are you ready for calculation?\n");
    printf("                                           \n");
    printf("                     .............         \n");
    printf(" ....              ...            ...      \n");
    printf("    ........             ###               \n");
    printf("         ##...           ###               \n");
    printf("         ###             ###               \n");
    printf("         ###                               \n");
    printf("                                           \n");
    printf("             ....                  ___     \n");
    printf("              \\...              ____ |    \n");
    printf("      __                      ____         \n");
    printf("        __                ____             \n");
    printf("           _______________                 \n");
    printf("                                           \n");
    printf("...........................................\n");
    printf("..          Hey  Are  You  Sad?          ..\n");
    printf("..        Nice  To  See  You  Sad!---Xin ..\n");
    printf("...........................................\n");

    sleep(2);

    printf("Of course I won't ask about your opinion, time does not wait:D!!!!!!!\n");


    

    return 0;
}
