#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LoadGameSlot.WB_LoadGameSlot_C
// (None)

class UClass* UWB_LoadGameSlot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LoadGameSlot_C");

	return Clss;
}


// WB_LoadGameSlot_C WB_LoadGameSlot.Default__WB_LoadGameSlot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LoadGameSlot_C* UWB_LoadGameSlot_C::GetDefaultObj()
{
	static class UWB_LoadGameSlot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LoadGameSlot_C*>(UWB_LoadGameSlot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get_OldSave_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_LoadGameSlot_C::Get_OldSave_Text_0(bool CallFunc_EqualEqual_StrStr_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "Get_OldSave_Text_0");

	Params::UWB_LoadGameSlot_C_Get_OldSave_Text_0_Params Parms{};

	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get Quest Name
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_LoadGameSlot_C::Get_Quest_Name(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "Get Quest Name");

	Params::UWB_LoadGameSlot_C_Get_Quest_Name_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Set Border Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LoadGameSlot_C::Set_Border_Color(const struct FLinearColor& InBrushColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "Set Border Color");

	Params::UWB_LoadGameSlot_C_Set_Border_Color_Params Parms{};

	Parms.InBrushColor = InBrushColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get Save Type
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_LoadGameSlot_C::Get_Save_Type(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "Get Save Type");

	Params::UWB_LoadGameSlot_C_Get_Save_Type_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Get Date
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue                 (None)

class FText UWB_LoadGameSlot_C::Get_Date(class FText CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "Get Date");

	Params::UWB_LoadGameSlot_C_Get_Date_Params Parms{};

	Parms.CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue = CallFunc_AsTimeZoneDateTime_DateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWB_LoadGameSlot_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LoadGameSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWB_LoadGameSlot_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "OnAddedToFocusPath");

	Params::UWB_LoadGameSlot_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LoadGameSlot.WB_LoadGameSlot_C.ExecuteUbergraph_WB_LoadGameSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// class UTexture2D*                  CallFunc_ImportFileAsTexture2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LoadGameSlot_C::ExecuteUbergraph_WB_LoadGameSlot(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, class UTexture2D* CallFunc_ImportFileAsTexture2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LoadGameSlot_C", "ExecuteUbergraph_WB_LoadGameSlot");

	Params::UWB_LoadGameSlot_C_ExecuteUbergraph_WB_LoadGameSlot_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_ImportFileAsTexture2D_ReturnValue = CallFunc_ImportFileAsTexture2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


