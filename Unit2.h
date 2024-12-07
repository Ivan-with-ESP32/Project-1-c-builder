#ifndef Unit2H
#define Unit2H
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>

class TForm2 : public TForm
{
__published:
    TImage *Image1;
    TImage *Image2;
    TButton *Button1;
    TButton *Button2;
    void __fastcall Button1Click(TObject *Sender);
    void __fastcall Button2Click(TObject *Sender);
public:
    __fastcall TForm2(TComponent* Owner);
};

extern PACKAGE TForm2 *Form2;
#endif

