#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C
// (None)

class UClass* UUMG_MultipleOptionsOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MultipleOptionsOption_C");

	return Clss;
}


// UMG_MultipleOptionsOption_C UMG_MultipleOptionsOption.Default__UMG_MultipleOptionsOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MultipleOptionsOption_C* UUMG_MultipleOptionsOption_C::GetDefaultObj()
{
	static class UUMG_MultipleOptionsOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MultipleOptionsOption_C*>(UUMG_MultipleOptionsOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsKeyEventFromAction_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsKeyEventFromAction_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsKeyEventFromAction_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUMG_MultipleOptionsOption_C::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_IsKeyEventFromAction_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsKeyEventFromAction_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsOption_C", "OnPreviewKeyDown");

	Params::UUMG_MultipleOptionsOption_C_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_IsKeyEventFromAction_ReturnValue = CallFunc_IsKeyEventFromAction_ReturnValue;
	Parms.CallFunc_IsKeyEventFromAction_ReturnValue_1 = CallFunc_IsKeyEventFromAction_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsKeyEventFromAction_ReturnValue_2 = CallFunc_IsKeyEventFromAction_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UUMG_MultipleOptionsOption_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsOption_C", "OnFocusReceived");

	Params::UUMG_MultipleOptionsOption_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C.RefreshPages
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MultipleOptionsOption_C::RefreshPages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsOption_C", "RefreshPages");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C.SetActivePage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleOptionsOption_C::SetActivePage(int32 NewIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsOption_C", "SetActivePage");

	Params::UUMG_MultipleOptionsOption_C_SetActivePage_Params Parms{};

	Parms.NewIndex = NewIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MultipleOptionsOption_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsOption_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MultipleOptionsOption.UMG_MultipleOptionsOption_C.ExecuteUbergraph_UMG_MultipleOptionsOption
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_NewIndex                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumAvailableOptions_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MultipleOptionsOption_C::ExecuteUbergraph_UMG_MultipleOptionsOption(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_NewIndex, float CallFunc_Conv_IntToFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 CallFunc_GetNumAvailableOptions_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MultipleOptionsOption_C", "ExecuteUbergraph_UMG_MultipleOptionsOption");

	Params::UUMG_MultipleOptionsOption_C_ExecuteUbergraph_UMG_MultipleOptionsOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NewIndex = K2Node_CustomEvent_NewIndex;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetNumAvailableOptions_ReturnValue = CallFunc_GetNumAvailableOptions_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


