#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropshipEntry.UMG_DropshipEntry_C
// (None)

class UClass* UUMG_DropshipEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropshipEntry_C");

	return Clss;
}


// UMG_DropshipEntry_C UMG_DropshipEntry.Default__UMG_DropshipEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropshipEntry_C* UUMG_DropshipEntry_C::GetDefaultObj()
{
	static class UUMG_DropshipEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropshipEntry_C*>(UUMG_DropshipEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropshipEntry.UMG_DropshipEntry_C.SetSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Selected                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FButtonStyle                Style                                                            (Edit, BlueprintVisible)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropshipEntry_C::SetSelected(bool Selected, const struct FButtonStyle& Style, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEntry_C", "SetSelected");

	Params::UUMG_DropshipEntry_C_SetSelected_Params Parms{};

	Parms.Selected = Selected;
	Parms.Style = Style;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEntry.UMG_DropshipEntry_C.SetDropship
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropship                   Dropship                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Valid                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue                               (ContainsInstancedReference)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue_1                             (ContainsInstancedReference)
// struct FItemData                   CallFunc_ConvertToItem_ReturnValue_2                             (ContainsInstancedReference)

void UUMG_DropshipEntry_C::SetDropship(const struct FDropship& Dropship, bool Valid, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FItemData& CallFunc_ConvertToItem_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FItemData& CallFunc_ConvertToItem_ReturnValue_1, const struct FItemData& CallFunc_ConvertToItem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEntry_C", "SetDropship");

	Params::UUMG_DropshipEntry_C_SetDropship_Params Parms{};

	Parms.Dropship = Dropship;
	Parms.Valid = Valid;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_ConvertToItem_ReturnValue = CallFunc_ConvertToItem_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_ConvertToItem_ReturnValue_1 = CallFunc_ConvertToItem_ReturnValue_1;
	Parms.CallFunc_ConvertToItem_ReturnValue_2 = CallFunc_ConvertToItem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEntry.UMG_DropshipEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DropshipEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropshipEntry.UMG_DropshipEntry_C.BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_DropshipEntry_C::BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEntry_C", "BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DropshipEntry.UMG_DropshipEntry_C.ExecuteUbergraph_UMG_DropshipEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropshipEntry_C::ExecuteUbergraph_UMG_DropshipEntry(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEntry_C", "ExecuteUbergraph_UMG_DropshipEntry");

	Params::UUMG_DropshipEntry_C_ExecuteUbergraph_UMG_DropshipEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipEntry.UMG_DropshipEntry_C.DropshipSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipEntry_C::DropshipSelected__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipEntry_C", "DropshipSelected__DelegateSignature");

	Params::UUMG_DropshipEntry_C_DropshipSelected__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


