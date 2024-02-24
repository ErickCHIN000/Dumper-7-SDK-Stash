#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GenericItemListEntry.WBP_GenericItemListEntry_C
// (None)

class UClass* UWBP_GenericItemListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GenericItemListEntry_C");

	return Clss;
}


// WBP_GenericItemListEntry_C WBP_GenericItemListEntry.Default__WBP_GenericItemListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GenericItemListEntry_C* UWBP_GenericItemListEntry_C::GetDefaultObj()
{
	static class UWBP_GenericItemListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GenericItemListEntry_C*>(UWBP_GenericItemListEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.SetIcon
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_ReturnValue                                 (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericItemListEntry_C::SetIcon(TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "SetIcon");

	Params::UWBP_GenericItemListEntry_C_SetIcon_Params Parms{};

	Parms.CallFunc_GetItemIcon_ReturnValue = CallFunc_GetItemIcon_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// enum class EItemQuality            CallFunc_GetItemQualityFromEntry_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Get_Item_Quality_Colour_QualityColour_Linear            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_        (None)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_GenericItemListEntry_C::Initialize(bool Temp_bool_Variable, class FText Temp_text_Variable, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, const struct FLinearColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Linear, const struct FSlateColor& CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "Initialize");

	Params::UWBP_GenericItemListEntry_C_Initialize_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetItemQualityFromEntry_ReturnValue = CallFunc_GetItemQualityFromEntry_ReturnValue;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Linear = CallFunc_Get_Item_Quality_Colour_QualityColour_Linear;
	Parms.CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_ = CallFunc_Get_Item_Quality_Colour_QualityColour_Slate__UI_;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.GetDefaultFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GenericItemListEntry_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "GetDefaultFocusWidget");

	Params::UWBP_GenericItemListEntry_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_GenericItemListEntry_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "OnRemovedFromFocusPath");

	Params::UWBP_GenericItemListEntry_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_GenericItemListEntry_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "OnAddedToFocusPath");

	Params::UWBP_GenericItemListEntry_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.OnUsingGamepadChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericItemListEntry_C::OnUsingGamepadChanged(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "OnUsingGamepadChanged");

	Params::UWBP_GenericItemListEntry_C_OnUsingGamepadChanged_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GenericItemListEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GenericItemListEntry.WBP_GenericItemListEntry_C.ExecuteUbergraph_WBP_GenericItemListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericItemListEntry_C::ExecuteUbergraph_WBP_GenericItemListEntry(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue_1, bool K2Node_Event_bUsingGamepad, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericItemListEntry_C", "ExecuteUbergraph_WBP_GenericItemListEntry");

	Params::UWBP_GenericItemListEntry_C_ExecuteUbergraph_WBP_GenericItemListEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue_1 = CallFunc_IsUsingGamepad_ReturnValue_1;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


