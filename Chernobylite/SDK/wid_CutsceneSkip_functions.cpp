#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CutsceneSkip.wid_CutsceneSkip_C
// (None)

class UClass* UWid_CutsceneSkip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CutsceneSkip_C");

	return Clss;
}


// wid_CutsceneSkip_C wid_CutsceneSkip.Default__wid_CutsceneSkip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CutsceneSkip_C* UWid_CutsceneSkip_C::GetDefaultObj()
{
	static class UWid_CutsceneSkip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CutsceneSkip_C*>(UWid_CutsceneSkip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.TickHoldProgres
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CutsceneSkip_C::TickHoldProgres(float DeltaTime, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "TickHoldProgres");

	Params::UWid_CutsceneSkip_C_TickHoldProgres_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CutsceneSkip_C::ShowTooltip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "ShowTooltip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.TickTooltipVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CutsceneSkip_C::TickTooltipVisibility(float DeltaTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "TickTooltipVisibility");

	Params::UWid_CutsceneSkip_C_TickTooltipVisibility_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.ShowHoldProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CutsceneSkip_C::ShowHoldProgress(float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "ShowHoldProgress");

	Params::UWid_CutsceneSkip_C_ShowHoldProgress_Params Parms{};

	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLocalizedTextInfo          CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetText_Success                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CutsceneSkip_C::Update(const struct FLocalizedTextInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_SetText_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "Update");

	Params::UWid_CutsceneSkip_C_Update_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SetText_Success = CallFunc_SetText_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.SetText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UWid_CutsceneSkip_C::SetText(class FText& InText, bool* Success, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "SetText");

	Params::UWid_CutsceneSkip_C_SetText_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.PC_Interaction_Accept
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CutsceneSkip_C::PC_Interaction_Accept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "PC_Interaction_Accept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.PC_Interaction_Accept_Release
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CutsceneSkip_C::PC_Interaction_Accept_Release()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "PC_Interaction_Accept_Release");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.ShowUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CutsceneSkip_C::ShowUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "ShowUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.HideUI
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CutsceneSkip_C::HideUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "HideUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CutsceneSkip_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "PreConstruct");

	Params::UWid_CutsceneSkip_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.AnyKeyPressed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CutsceneSkip_C::AnyKeyPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "AnyKeyPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CutsceneSkip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "Tick");

	Params::UWid_CutsceneSkip_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.TriggerPauseMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CutsceneSkip_C::TriggerPauseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "TriggerPauseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CutsceneSkip.wid_CutsceneSkip_C.ExecuteUbergraph_wid_CutsceneSkip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamePaused_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGamePaused_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsGamePaused_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CutsceneSkip_C::ExecuteUbergraph_wid_CutsceneSkip(int32 EntryPoint, bool CallFunc_IsInViewport_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsGamePaused_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsGamePaused_ReturnValue_1, bool CallFunc_IsGamePaused_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CutsceneSkip_C", "ExecuteUbergraph_wid_CutsceneSkip");

	Params::UWid_CutsceneSkip_C_ExecuteUbergraph_wid_CutsceneSkip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsGamePaused_ReturnValue = CallFunc_IsGamePaused_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_IsGamePaused_ReturnValue_1 = CallFunc_IsGamePaused_ReturnValue_1;
	Parms.CallFunc_IsGamePaused_ReturnValue_2 = CallFunc_IsGamePaused_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


