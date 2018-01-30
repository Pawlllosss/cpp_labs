#include "Lab02.h"

void AddStudent(int *numberOfStudents, char *** namesList, char ***surnamesList,
                int **yearsList, const char *firstName, const char*secondName, const char *surname, int year)
{
    char * tmp = new char[strlen(firstName)+2+strlen(secondName)];
    strcat(tmp, firstName);
    strcat(tmp, " ");
    strcat(tmp, secondName);

    char * tmpsur=new char[strlen(surname) +1 ];
    strcpy(tmpsur, surname);

    if(*(numberOfStudents) == 0)
    {
        *namesList = NULL;
        *namesList = new char*[1];
        (*namesList)[0] = tmp;

        //surname
        *surnamesList = NULL;
        *surnamesList = new char*[1];
        (*surnamesList)[0] = tmpsur;
        //year
        *yearsList = NULL;
        *yearsList = new int [1];
        (*yearsList)[0] = year;
    }
    else
    {
        char **tmpptr = new char*[*numberOfStudents];

        for(int i=0 ; i<(*numberOfStudents) ; i++)
        {
            tmpptr[i]=(*namesList)[i];
        }

        delete [] *namesList;

        *namesList = NULL;

        int newstudents = (*numberOfStudents) + 1;


        *namesList = new char*[newstudents];

        for(int i=0 ; i<(*numberOfStudents) ; i++)
            (*namesList)[i] = tmpptr[i];

        delete [] tmpptr;

        (*namesList)[newstudents-1]=tmp;

        //----------SURNAME-------------

        char ** tmpptrsurname = new char *[*numberOfStudents];

        for(int i=0 ; i<*numberOfStudents ; i++)
            tmpptrsurname[i] = (*surnamesList)[i];

        delete [] *surnamesList;

        *surnamesList = NULL;
        *surnamesList = new char*[newstudents];

        for(int i = 0; i<(*numberOfStudents) ; i++)
            (*surnamesList)[i] = tmpptrsurname[i];

        (*surnamesList)[newstudents-1] = tmpsur;

        delete [] tmpptrsurname;

        //---------_YEAR-------------------

        int * tmpnumb = new int[*numberOfStudents];

        for(int i=0 ; i<*numberOfStudents ; i++)
            tmpnumb[i] = (*yearsList)[i];

        delete [] *yearsList;

        *yearsList = NULL;
        *yearsList = new int[newstudents];

        for(int i=0 ; i<*numberOfStudents ; i++)
            (*yearsList)[i] = tmpnumb[i];

        delete [] tmpnumb;
        (*yearsList)[newstudents-1]=year;

    }

    (*numberOfStudents)++;
}




void PrintListContent(int numberOfStudents, char ** namesList)
{
    for(int i =0 ; i<numberOfStudents ; i++)
    {
        std::cout<<*(namesList+i)<<std::endl;
    }

}

void  PrintListContent (int numberOfStudents, int * yearsList)
{
    for(int i =0 ; i<numberOfStudents ; i++)
    {
        std::cout<<*(yearsList+i)<<std::endl;
    }

}


void PrintListContent (int numberOfStudents, char ** namesList, char ** surnamesList, int * yearsList)
{
    for(int i =0 ; i<numberOfStudents ; i++)
    {
        std::cout<<*(surnamesList+i)<<", "<<*(namesList+i)<<" - year "<<*(yearsList+i)<<std::endl;
    }
}

void ClearStudents (int * numberOfStudents, char *** namesList, char ***surnamesList, int ** yearsList)
{
    delete [] *yearsList;
    *yearsList = NULL;

    for(int i =0 ; i<*numberOfStudents ; i++)
    {
        delete (*namesList)[i];
    }

    delete [] *namesList;

    *namesList = NULL;

    //-----SURNAMES-----------

    for(int i =0 ; i<*numberOfStudents ; i++)
    {
        delete (*surnamesList)[i];
    }

    delete [] *surnamesList;

    *surnamesList = NULL;


    *numberOfStudents = 0;
}

