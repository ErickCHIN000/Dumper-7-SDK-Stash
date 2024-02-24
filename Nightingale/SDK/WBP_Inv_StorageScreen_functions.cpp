#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C
// (None)

class UClass* UWBP_Inv_StorageScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Inv_StorageScreen_C");

	return Clss;
}


// WBP_Inv_StorageScreen_C WBP_Inv_StorageScreen.Default__WBP_Inv_StorageScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Inv_StorageScreen_C* UWBP_Inv_StorageScreen_C::GetDefaultObj()
{
	static class UWBP_Inv_StorageScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Inv_StorageScreen_C*>(UWBP_Inv_StorageScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_1_CloseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Inv_StorageScreen_C::BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_1_CloseClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StorageScreen_C", "BndEvt__WBP_NavBar_K2Node_ComponentBoundEvent_1_CloseClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_3_OnEntryHovered__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StorageScreen_C::BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_3_OnEntryHovered__DelegateSignature(bool IsHovered, struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StorageScreen_C", "BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_3_OnEntryHovered__DelegateSignature");

	Params::UWBP_Inv_StorageScreen_C_BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_3_OnEntryHovered__DelegateSignature_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.InventoryEntry = InventoryEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_2_OnSelectedEntryUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Inv_StorageScreen_C::BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_2_OnSelectedEntryUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StorageScreen_C", "BndEvt__WBP_Inv_StorageScreen_WBP_StoragePanel_K2Node_ComponentBoundEvent_2_OnSelectedEntryUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inv_StorageScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StorageScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inv_StorageScreen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StorageScreen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.ExecuteUbergraph_WBP_Inv_StorageScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_IsHovered                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_ComponentBoundEvent_InventoryEntry                        (ConstParm)
// enum class ETooltipSource          K2Node_ComponentBoundEvent_TooltipSource                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_Select_Default                                            (None)
// struct FInventoryEntry             CallFunc_GetSelectedEntry_ReturnValue                            (ConstParm)

void UWBP_Inv_StorageScreen_C::ExecuteUbergraph_WBP_Inv_StorageScreen(int32 EntryPoint, bool Temp_bool_Variable, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool K2Node_ComponentBoundEvent_IsHovered, const struct FInventoryEntry& K2Node_ComponentBoundEvent_InventoryEntry, enum class ETooltipSource K2Node_ComponentBoundEvent_TooltipSource, const struct FInventoryEntry& K2Node_Select_Default, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StorageScreen_C", "ExecuteUbergraph_WBP_Inv_StorageScreen");

	Params::UWBP_Inv_StorageScreen_C_ExecuteUbergraph_WBP_Inv_StorageScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_IsHovered = K2Node_ComponentBoundEvent_IsHovered;
	Parms.K2Node_ComponentBoundEvent_InventoryEntry = K2Node_ComponentBoundEvent_InventoryEntry;
	Parms.K2Node_ComponentBoundEvent_TooltipSource = K2Node_ComponentBoundEvent_TooltipSource;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetSelectedEntry_ReturnValue = CallFunc_GetSelectedEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StorageScreen.WBP_Inv_StorageScreen_C.PickupItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StorageScreen_C::PickupItem__DelegateSignature(class FName ItemName, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StorageScreen_C", "PickupItem__DelegateSignature");

	Params::UWBP_Inv_StorageScreen_C_PickupItem__DelegateSignature_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}

}


