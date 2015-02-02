//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("uElevation.cpp", Main);
USEFORM("nsi.cpp", NSInfo);
USEFORM("Uchastki.cpp", fUchastki);
USEFORM("Puti.cpp", fPuti);
USEFORM("Doroga.cpp", fDoroga);
USEFORM("dataUnit.cpp", MainData); /* TDataModule: File Type */
USEFORM("Tune.cpp", fTune);
USEFORM("fRaschet.cpp", frUchastki);
USEFORM("rPuti.cpp", frPuti);
USEFORM("Zadanie.cpp", fZadanie);
USEFORM("newZadanie.cpp", newZad);
USEFORM("usplash.cpp", splash);
#include "usplash.h"
#include "uElevation.h"
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 //splash = new Tsplash(Application);
                 Application->Initialize();
                 Application->CreateForm(__classid(TMain), &Main);
                 Application->CreateForm(__classid(Tsplash), &splash);
                 splash->Show();
                 splash->Update();
                 splash->splGaug->MaxValue = 12;
                 int a=1;
                 splash->splGaug->Progress = a++;
                 splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TNSInfo), &NSInfo);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TfUchastki), &fUchastki);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TfPuti), &fPuti);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TfDoroga), &fDoroga);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TMainData), &MainData);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TfTune), &fTune);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TfrUchastki), &frUchastki);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TfrPuti), &frPuti);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TfZadanie), &fZadanie);
                  splash->splGaug->Progress = a++;
                 Application->CreateForm(__classid(TnewZad), &newZad);
                  splash->splGaug->Progress = a++;
                 splash->Hide();
                 splash->Close();
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
