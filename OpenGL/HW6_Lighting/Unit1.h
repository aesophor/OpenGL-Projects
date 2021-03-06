//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "GLCtrl.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TGLBox *GLBox1;
    TGroupBox *RotationGroupBox;
    TScrollBar *RotationXScrollBar;
    TScrollBar *RotationYScrollBar;
    TScrollBar *RotationZScrollBar;
    TLabel *RotationXAxisLabel;
    TLabel *RotationYAxisLabel;
    TLabel *RotationZAxisLabel;
    TLabel *RotationXValueLabel;
    TLabel *RotationYValueLabel;
    TLabel *RotationZValueLabel;
    TButton *ResetRotationBtn;
    TGroupBox *TranslationGroupBox;
    TLabel *TranslationXAxisLabel;
    TLabel *TranslationYAxisLabel;
    TLabel *TranslationZAxisLabel;
    TLabel *TranslationXValueLabel;
    TLabel *TranslationYValueLabel;
    TLabel *TranslationZValueLabel;
    TScrollBar *TranslationXScrollBar;
    TScrollBar *TranslationYScrollBar;
    TScrollBar *TranslationZScrollBar;
    TButton *ResetTranslationBtn;
    TGroupBox *ScalingGroupBox;
    TLabel *ScalingXAxisLabel;
    TLabel *ScalingYAxisLabel;
    TLabel *ScalingZAxisLabel;
    TLabel *ScalingXValueLabel;
    TLabel *ScalingYValueLabel;
    TLabel *ScalingZValueLabel;
    TScrollBar *ScalingXScrollBar;
    TScrollBar *ScalingYScrollBar;
    TScrollBar *ScalingZScrollBar;
    TButton *ResetScalingBtn;
    TGroupBox *GroupBox1;
    TButton *Iso1Btn;
    TButton *IsoBtn2;
    TButton *Iso3Btn;
    TButton *Iso4Btn;
    TButton *Iso5Btn;
    TButton *Iso6Btn;
    TButton *Iso7Btn;
    TButton *Iso8Btn;
    TGroupBox *GroupBox2;
    TCheckBox *RedLightBox;
    TCheckBox *GreenLightBox;
    TCheckBox *BlueLightBox;
    void __fastcall draw(TObject *Sender);
    void __fastcall init(TObject *Sender);
    void __fastcall RotationXScrollBarChange(TObject *Sender);
    void __fastcall RotationYScrollBarChange(TObject *Sender);
    void __fastcall RotationZScrollBarChange(TObject *Sender);
    void __fastcall ResetRotationBtnClick(TObject *Sender);
    void __fastcall TranslationXScrollBarChange(TObject *Sender);
    void __fastcall TranslationYScrollBarChange(TObject *Sender);
    void __fastcall TranslationZScrollBarChange(TObject *Sender);
    void __fastcall ResetTranslationBtnClick(TObject *Sender);
    void __fastcall ScalingXScrollBarChange(TObject *Sender);
    void __fastcall ScalingYScrollBarChange(TObject *Sender);
    void __fastcall ScalingZScrollBarChange(TObject *Sender);
    void __fastcall ResetScalingBtnClick(TObject *Sender);
    void __fastcall SetRotation(int new_theta_x, int new_theta_y, int new_theta_z);
    void __fastcall Iso1BtnClick(TObject *Sender);
    void __fastcall IsoBtn2Click(TObject *Sender);
    void __fastcall Iso3BtnClick(TObject *Sender);
    void __fastcall Iso4BtnClick(TObject *Sender);
    void __fastcall Iso8BtnClick(TObject *Sender);
    void __fastcall Iso5BtnClick(TObject *Sender);
    void __fastcall Iso6BtnClick(TObject *Sender);
    void __fastcall Iso7BtnClick(TObject *Sender);
    void __fastcall RedLightBoxClick(TObject *Sender);
    void __fastcall GreenLightBoxClick(TObject *Sender);
    void __fastcall BlueLightBoxClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
