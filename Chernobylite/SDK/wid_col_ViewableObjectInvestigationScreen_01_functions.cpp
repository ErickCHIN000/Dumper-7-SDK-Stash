#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_col_ViewableObjectInvestigationScreen_01.wid_col_ViewableObjectInvestigationScreen_01_C
// (None)

class UClass* UWid_col_ViewableObjectInvestigationScreen_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_col_ViewableObjectInvestigationScreen_01_C");

	return Clss;
}


// wid_col_ViewableObjectInvestigationScreen_01_C wid_col_ViewableObjectInvestigationScreen_01.Default__wid_col_ViewableObjectInvestigationScreen_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_col_ViewableObjectInvestigationScreen_01_C* UWid_col_ViewableObjectInvestigationScreen_01_C::GetDefaultObj()
{
	static class UWid_col_ViewableObjectInvestigationScreen_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_col_ViewableObjectInvestigationScreen_01_C*>(UWid_col_ViewableObjectInvestigationScreen_01_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_col_ViewableObjectInvestigationScreen_01.wid_col_ViewableObjectInvestigationScreen_01_C.PlayFORAnalyzeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_col_ViewableObjectInvestigationScreen_01_C::PlayFORAnalyzeAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInvestigationScreen_01_C", "PlayFORAnalyzeAnimation");

	Params::UWid_col_ViewableObjectInvestigationScreen_01_C_PlayFORAnalyzeAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInvestigationScreen_01.wid_col_ViewableObjectInvestigationScreen_01_C.PlayDOSAnalyzeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_col_ViewableObjectInvestigationScreen_01_C::PlayDOSAnalyzeAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInvestigationScreen_01_C", "PlayDOSAnalyzeAnimation");

	Params::UWid_col_ViewableObjectInvestigationScreen_01_C_PlayDOSAnalyzeAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInvestigationScreen_01.wid_col_ViewableObjectInvestigationScreen_01_C.PlayBIOAnalyzeAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_col_ViewableObjectInvestigationScreen_01_C::PlayBIOAnalyzeAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInvestigationScreen_01_C", "PlayBIOAnalyzeAnimation");

	Params::UWid_col_ViewableObjectInvestigationScreen_01_C_PlayBIOAnalyzeAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_col_ViewableObjectInvestigationScreen_01.wid_col_ViewableObjectInvestigationScreen_01_C.SetInformationText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InformationText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_col_ViewableObjectInvestigationScreen_01_C::SetInformationText(class FText InformationText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_col_ViewableObjectInvestigationScreen_01_C", "SetInformationText");

	Params::UWid_col_ViewableObjectInvestigationScreen_01_C_SetInformationText_Params Parms{};

	Parms.InformationText = InformationText;

	UObject::ProcessEvent(Func, &Parms);

}

}


