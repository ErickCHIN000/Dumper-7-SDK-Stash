#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_BG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_BG_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_BG_C WBP_CC_DynamicSubPanel_BG.Default__WBP_CC_DynamicSubPanel_BG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_BG_C* UWBP_CC_DynamicSubPanel_BG_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_BG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_BG_C*>(UWBP_CC_DynamicSubPanel_BG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_BG_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_BG_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// enum class EPlayerBackground       CallFunc_GetPlayerBackground_OutBackground                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>K2Node_MakeMap_Map                                               (None)

void UWBP_CC_DynamicSubPanel_BG_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_BG_C_CollectPanelValues_Params Parms{};

	Parms.CallFunc_GetPlayerBackground_OutBackground = CallFunc_GetPlayerBackground_OutBackground;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.CacheStartingPanelValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerBackground       CallFunc_GetPlayerBackground_OutBackground                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_BG_C::CacheStartingPanelValues(enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_BG_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetPlayerBackground_OutBackground = CallFunc_GetPlayerBackground_OutBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.UpdateText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ListIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_CC_DynamicSubPanel_BG_C::UpdateText(int32 ListIndex, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "UpdateText");

	Params::UWBP_CC_DynamicSubPanel_BG_C_UpdateText_Params Parms{};

	Parms.ListIndex = ListIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.RefreshSelectedOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerBackground       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_BG_C::RefreshSelectedOption(enum class EPlayerBackground Temp_byte_Variable, enum class EPlayerBackground Temp_byte_Variable_1, enum class EPlayerBackground Temp_byte_Variable_2, enum class EPlayerBackground Temp_byte_Variable_3, enum class EPlayerBackground Temp_byte_Variable_4, enum class EPlayerBackground Temp_byte_Variable_5, enum class EPlayerBackground Temp_byte_Variable_6, int32 Temp_int_Variable, enum class EPlayerBackground K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "RefreshSelectedOption");

	Params::UWBP_CC_DynamicSubPanel_BG_C_RefreshSelectedOption_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.RefreshPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_BG_C::RefreshPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "RefreshPanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.BndEvt__WBP_CC_DynamicSubPanel_BG_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_BG_C::BndEvt__WBP_CC_DynamicSubPanel_BG_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "BndEvt__WBP_CC_DynamicSubPanel_BG_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_BG_C_BndEvt__WBP_CC_DynamicSubPanel_BG_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_0_PickerEntryUpdated__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_BG_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_BG_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_BG_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_BG_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "OnAddedToFocusPath");

	Params::UWBP_CC_DynamicSubPanel_BG_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_CC_DynamicSubPanel_BG_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "OnRemovedFromFocusPath");

	Params::UWBP_CC_DynamicSubPanel_BG_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_BG_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_BG.WBP_CC_DynamicSubPanel_BG_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_BG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       CallFunc_GetPlayerBackground_OutBackground                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerBackground       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               CallFunc_IsUsingGamepad_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_BG_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_BG(int32 EntryPoint, enum class EPlayerBackground Temp_byte_Variable, enum class EPlayerBackground Temp_byte_Variable_1, enum class EPlayerBackground Temp_byte_Variable_2, enum class EPlayerBackground Temp_byte_Variable_3, enum class EPlayerBackground Temp_byte_Variable_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_IsValid_ReturnValue_2, enum class EPlayerBackground CallFunc_GetPlayerBackground_OutBackground, int32 CallFunc_Conv_ByteToInt_ReturnValue, enum class EPlayerBackground Temp_byte_Variable_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, bool K2Node_Event_IsDesignTime, uint8 CallFunc_GetValidValue_ReturnValue, enum class EPlayerBackground Temp_byte_Variable_6, int32 Temp_int_Variable, enum class EPlayerBackground K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_3, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, bool CallFunc_IsUsingGamepad_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUsingGamepad_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_BG_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_BG");

	Params::UWBP_CC_DynamicSubPanel_BG_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_BG_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetPlayerBackground_OutBackground = CallFunc_GetPlayerBackground_OutBackground;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_IsUsingGamepad_ReturnValue_1 = CallFunc_IsUsingGamepad_ReturnValue_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


