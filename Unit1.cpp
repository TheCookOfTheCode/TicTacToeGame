//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

   char p1, p2, p3, p4, p5, p6, p7, p8, p9;
   //p1...p9 pola w grze ( ich zawartosc: p1='n'; nic lub 'j' lub 'k')
   char kto;

   void sprawdz()
   {
        if ((p1==p2 && p2==p3 && p1!='n')||
           (p4==p5 && p5==p6 && p4!='n')||
           (p7==p8 && p8==p9 && p7!='n')||
           (p1==p4 && p4==p7 && p1!='n')||
           (p2==p5 && p5==p8 && p2!='n')||
           (p3==p6 && p6==p9 && p3!='n')||
           (p1==p5 && p5==p9 && p1!='n')||
           (p3==p5 && p5==p7 && p3!='n'))
           {
              char * w;

              if (kto=='k') w="Wygrywa Jarz¹bek!";
              else w="Wygrywa Kozak!";

              Application->MessageBox(w, "Koniec gry", MB_OK);

           }
   }

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
     pole1->Picture->LoadFromFile("img/nic.bmp");
     pole2->Picture->LoadFromFile("img/nic.bmp");
     pole3->Picture->LoadFromFile("img/nic.bmp");
     pole4->Picture->LoadFromFile("img/nic.bmp");
     pole5->Picture->LoadFromFile("img/nic.bmp");
     pole6->Picture->LoadFromFile("img/nic.bmp");
     pole7->Picture->LoadFromFile("img/nic.bmp");
     pole8->Picture->LoadFromFile("img/nic.bmp");
     pole9->Picture->LoadFromFile("img/nic.bmp");
     tura->Picture->LoadFromFile("img/smallj.bmp");

     p1='n'; p2='n'; p3='n';
     p4='n'; p5='n'; p6='n';
     p7='n'; p8='n'; p9='n';

     kto='j';

     pole1->Enabled = true;
     pole2->Enabled = true;
     pole3->Enabled = true;
     pole4->Enabled = true;
     pole5->Enabled = true;
     pole6->Enabled = true;
     pole7->Enabled = true;
     pole8->Enabled = true;
     pole9->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole1Click(TObject *Sender)
{
    if(p1=='n')
    {
     if(kto=='j')
     {
      pole1->Picture->LoadFromFile("img/j.bmp");
      p1='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole1->Picture->LoadFromFile("img/k.bmp");
      p1='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole1->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::pole2Click(TObject *Sender)
{
    if(p2=='n')
    {
     if(kto=='j')
     {
      pole2->Picture->LoadFromFile("img/j.bmp");
      p2='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole2->Picture->LoadFromFile("img/k.bmp");
      p2='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole2->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole3Click(TObject *Sender)
{
 if(p3=='n')
    {
     if(kto=='j')
     {
      pole3->Picture->LoadFromFile("img/j.bmp");
      p3='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole3->Picture->LoadFromFile("img/k.bmp");
      p3='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole3->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole4Click(TObject *Sender)
{
 if(p4=='n')
    {
     if(kto=='j')
     {
      pole4->Picture->LoadFromFile("img/j.bmp");
      p4='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole4->Picture->LoadFromFile("img/k.bmp");
      p4='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole4->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole5Click(TObject *Sender)
{
  if(p5=='n')
    {
     if(kto=='j')
     {
      pole5->Picture->LoadFromFile("img/j.bmp");
      p5='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole5->Picture->LoadFromFile("img/k.bmp");
      p5='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole5->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole6Click(TObject *Sender)
{
 if(p6=='n')
    {
     if(kto=='j')
     {
      pole6->Picture->LoadFromFile("img/j.bmp");
      p6='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole6->Picture->LoadFromFile("img/k.bmp");
      p6='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole6->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole7Click(TObject *Sender)
{
 if(p7=='n')
    {
     if(kto=='j')
     {
      pole7->Picture->LoadFromFile("img/j.bmp");
      p7='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole7->Picture->LoadFromFile("img/k.bmp");
      p7='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole7->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole8Click(TObject *Sender)
{
 if(p8=='n')
    {
     if(kto=='j')
     {
      pole8->Picture->LoadFromFile("img/j.bmp");
      p8='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole8->Picture->LoadFromFile("img/k.bmp");
      p8='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole8->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole9Click(TObject *Sender)
{
 if(p9=='n')
    {
     if(kto=='j')
     {
      pole9->Picture->LoadFromFile("img/j.bmp");
      p9='j';
      kto='k';
      tura->Picture->LoadFromFile("img/smallk.bmp");
     }
     else
     {
      pole9->Picture->LoadFromFile("img/k.bmp");
      p9='k';
      kto='j';
      tura->Picture->LoadFromFile("img/smallj.bmp");
     }
     pole9->Enabled=false;
     sprawdz();
    }
}
//---------------------------------------------------------------------------

