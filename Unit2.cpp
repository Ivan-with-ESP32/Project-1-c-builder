#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#pragma package(smart_init)
#pragma resource "*.dfm"

TForm2 *Form2;

// Конструктор форми
__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{
}

// Обробник натискання кнопки "Обчислити"
void __fastcall TForm2::ButtonConvertClick(TObject *Sender)
{
    try
    {
        double amount = StrToFloat(EditAmount->Text); // Зчитування суми
		double rateUSDToUAH = 41.2; // Курс USD → UAH
        double rateUAHToUSD = 0.0243; // Курс UAH → USD
        double result = 0.0;

        if (RadioUSDToUAH->Checked)
            result = amount * rateUSDToUAH; // Конвертація USD → UAH
        else if (RadioUAHToUSD->Checked)
            result = amount * rateUAHToUSD; // Конвертація UAH → USD
        else
        {
            ShowMessage(L"Будь ласка, виберіть напрямок конвертації!");
            return;
        }

        LabelResult->Caption = L"Результат: " + FloatToStrF(result, ffFixed, 8, 2);
    }
    catch (...)
    {
        ShowMessage(L"Будь ласка, введіть правильну суму!");
    }
}

// Обробник натискання кнопки "Закрити"
void __fastcall TForm2::ButtonCloseClick(TObject *Sender)
{
    Close(); // Закриття форми
}
