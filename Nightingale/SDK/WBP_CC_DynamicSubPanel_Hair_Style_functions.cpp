#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C
// (None)

class UClass* UWBP_CC_DynamicSubPanel_Hair_Style_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_DynamicSubPanel_Hair_Style_C");

	return Clss;
}


// WBP_CC_DynamicSubPanel_Hair_Style_C WBP_CC_DynamicSubPanel_Hair_Style.Default__WBP_CC_DynamicSubPanel_Hair_Style_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_DynamicSubPanel_Hair_Style_C* UWBP_CC_DynamicSubPanel_Hair_Style_C::GetDefaultObj()
{
	static class UWBP_CC_DynamicSubPanel_Hair_Style_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_DynamicSubPanel_Hair_Style_C*>(UWBP_CC_DynamicSubPanel_Hair_Style_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_BP_GetDesiredFocusTarget_ReturnValue                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_CC_DynamicSubPanel_Hair_Style_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_BP_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_CC_DynamicSubPanel_Hair_Style_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_BP_GetDesiredFocusTarget_ReturnValue = CallFunc_BP_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.UpdateActiveHair
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHairDataReference          CallFunc_GetHairData_OutData                                     (HasGetValueTypeHash)
// struct FHairData                   CallFunc_TryGetHairData_OutData                                  (None)
// enum class EGetResult              CallFunc_TryGetHairData_OutBranches                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Hair_Style_C::UpdateActiveHair(const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FHairData& CallFunc_TryGetHairData_OutData, enum class EGetResult CallFunc_TryGetHairData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "UpdateActiveHair");

	Params::UWBP_CC_DynamicSubPanel_Hair_Style_C_UpdateActiveHair_Params Parms{};

	Parms.CallFunc_GetHairData_OutData = CallFunc_GetHairData_OutData;
	Parms.CallFunc_TryGetHairData_OutData = CallFunc_TryGetHairData_OutData;
	Parms.CallFunc_TryGetHairData_OutBranches = CallFunc_TryGetHairData_OutBranches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.CollectPanelValues
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>OutValues                                                        (Parm, OutParm)
// class FString                      OutPanelName                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// struct FHairDataReference          CallFunc_GetHairData_OutData                                     (HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetHairDataId_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetHairDataId_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_GuidToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FCharacterCreateTelemetryValuePairsK2Node_MakeStruct_CharacterCreateTelemetryValuePairs             (None)
// TMap<class FString, struct FCharacterCreateTelemetryValuePairs>K2Node_MakeMap_Map                                               (None)

void UWBP_CC_DynamicSubPanel_Hair_Style_C::CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FHairDataReference& CallFunc_GetHairData_OutData, const struct FGuid& CallFunc_GetHairDataId_ReturnValue, const struct FGuid& CallFunc_GetHairDataId_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "CollectPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Hair_Style_C_CollectPanelValues_Params Parms{};

	Parms.CallFunc_GetHairData_OutData = CallFunc_GetHairData_OutData;
	Parms.CallFunc_GetHairDataId_ReturnValue = CallFunc_GetHairDataId_ReturnValue;
	Parms.CallFunc_GetHairDataId_ReturnValue_1 = CallFunc_GetHairDataId_ReturnValue_1;
	Parms.CallFunc_Conv_GuidToString_ReturnValue = CallFunc_Conv_GuidToString_ReturnValue;
	Parms.CallFunc_Conv_GuidToString_ReturnValue_1 = CallFunc_Conv_GuidToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_CharacterCreateTelemetryValuePairs = K2Node_MakeStruct_CharacterCreateTelemetryValuePairs;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;

	UObject::ProcessEvent(Func, &Parms);

	if (OutValues != nullptr)
		*OutValues = Parms.OutValues;

	if (OutPanelName != nullptr)
		*OutPanelName = std::move(Parms.OutPanelName);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.CacheStartingPanelValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHairDataReference          CallFunc_GetHairData_OutData                                     (HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Hair_Style_C::CacheStartingPanelValues(const struct FHairDataReference& CallFunc_GetHairData_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "CacheStartingPanelValues");

	Params::UWBP_CC_DynamicSubPanel_Hair_Style_C_CacheStartingPanelValues_Params Parms{};

	Parms.CallFunc_GetHairData_OutData = CallFunc_GetHairData_OutData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Hair_Style_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "PreConstruct");

	Params::UWBP_CC_DynamicSubPanel_Hair_Style_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Hair_Style_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FHairDataReference          Hair_DA                                                          (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              GridIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          Hair_TYpe                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Hair_Style_C::BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature(const struct FHairDataReference& Hair_DA, int32 GridIndex, enum class EHairAssetType Hair_TYpe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature");

	Params::UWBP_CC_DynamicSubPanel_Hair_Style_C_BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_hairstyles_K2Node_ComponentBoundEvent_2_CC_HairDataSelected__DelegateSignature_Params Parms{};

	Parms.Hair_DA = Hair_DA;
	Parms.GridIndex = GridIndex;
	Parms.Hair_TYpe = Hair_TYpe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.ResetPanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Hair_Style_C::ResetPanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "ResetPanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.RandomizePanelContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Hair_Style_C::RandomizePanelContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "RandomizePanelContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Hair_Style_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Hair_Style_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnRandomizeSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Hair_Style_C::BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnRandomizeSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_1_OnRandomizeSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnResetSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_CC_DynamicSubPanel_Hair_Style_C::BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnResetSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "BndEvt__WBP_CC_DynamicSubPanel_Hair_Style_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_3_OnResetSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CC_DynamicSubPanel_Hair_Style.WBP_CC_DynamicSubPanel_Hair_Style_C.ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_Style
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHairDataReference          K2Node_ComponentBoundEvent_Hair_DA                               (HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_GridIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHairAssetType          K2Node_ComponentBoundEvent_Hair_TYpe                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CC_DynamicSubPanel_Hair_Style_C::ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_Style(int32 EntryPoint, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FHairDataReference& K2Node_ComponentBoundEvent_Hair_DA, int32 K2Node_ComponentBoundEvent_GridIndex, enum class EHairAssetType K2Node_ComponentBoundEvent_Hair_TYpe, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CC_DynamicSubPanel_Hair_Style_C", "ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_Style");

	Params::UWBP_CC_DynamicSubPanel_Hair_Style_C_ExecuteUbergraph_WBP_CC_DynamicSubPanel_Hair_Style_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_ComponentBoundEvent_Hair_DA = K2Node_ComponentBoundEvent_Hair_DA;
	Parms.K2Node_ComponentBoundEvent_GridIndex = K2Node_ComponentBoundEvent_GridIndex;
	Parms.K2Node_ComponentBoundEvent_Hair_TYpe = K2Node_ComponentBoundEvent_Hair_TYpe;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue_1 = CallFunc_GetDesiredFocusTarget_ReturnValue_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


