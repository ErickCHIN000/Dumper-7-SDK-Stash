#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_ActionProgressBar.WBP_HUD_ActionProgressBar_C
// (None)

class UClass* UWBP_HUD_ActionProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_ActionProgressBar_C");

	return Clss;
}


// WBP_HUD_ActionProgressBar_C WBP_HUD_ActionProgressBar.Default__WBP_HUD_ActionProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_ActionProgressBar_C* UWBP_HUD_ActionProgressBar_C::GetDefaultObj()
{
	static class UWBP_HUD_ActionProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_ActionProgressBar_C*>(UWBP_HUD_ActionProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HUD_ActionProgressBar.WBP_HUD_ActionProgressBar_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_ActionProgressBar_C::UpdateVisibility(bool Visible, bool ShowImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_ActionProgressBar_C", "UpdateVisibility");

	Params::UWBP_HUD_ActionProgressBar_C_UpdateVisibility_Params Parms{};

	Parms.Visible = Visible;
	Parms.ShowImage = ShowImage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_HUD_ActionProgressBar.WBP_HUD_ActionProgressBar_C.UpdateActionBarProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ShowImage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Image                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HUD_ActionProgressBar_C::UpdateActionBarProgress(bool Visible, double CurrentProgress, class FText Label, bool ShowImage, TSoftObjectPtr<class UTexture2D> Image, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HUD_ActionProgressBar_C", "UpdateActionBarProgress");

	Params::UWBP_HUD_ActionProgressBar_C_UpdateActionBarProgress_Params Parms{};

	Parms.Visible = Visible;
	Parms.CurrentProgress = CurrentProgress;
	Parms.Label = Label;
	Parms.ShowImage = ShowImage;
	Parms.Image = Image;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


