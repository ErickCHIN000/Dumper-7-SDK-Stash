#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Spell_Item_Filter.BP_Spell_Item_Filter_C
// (None)

class UClass* UBP_Spell_Item_Filter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Spell_Item_Filter_C");

	return Clss;
}


// BP_Spell_Item_Filter_C BP_Spell_Item_Filter.Default__BP_Spell_Item_Filter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Spell_Item_Filter_C* UBP_Spell_Item_Filter_C::GetDefaultObj()
{
	static class UBP_Spell_Item_Filter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Spell_Item_Filter_C*>(UBP_Spell_Item_Filter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Spell_Item_Filter.BP_Spell_Item_Filter_C.ShouldShowEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>LEntrySpellTechniques                                            (Edit, BlueprintVisible)
// bool                               CallFunc_CanSlotSpellOnItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSlotSpellOnItem_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>CallFunc_TryGetItemSpellTechniques_SpellTechniques               (ReferenceParm)
// enum class EGetResult              CallFunc_TryGetItemSpellTechniques_Branches                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>CallFunc_TryGetItemSpellTechniques_SpellTechniques_1             (ReferenceParm)
// enum class EGetResult              CallFunc_TryGetItemSpellTechniques_Branches_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTechniqueDataAsset>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_Spell_Item_Filter_C::ShouldShowEntry(struct FInventoryEntry& Entry, const TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& LEntrySpellTechniques, bool CallFunc_CanSlotSpellOnItem_ReturnValue, bool CallFunc_CanSlotSpellOnItem_ReturnValue_1, int32 CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& CallFunc_TryGetItemSpellTechniques_SpellTechniques, enum class EGetResult CallFunc_TryGetItemSpellTechniques_Branches, int32 CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& CallFunc_TryGetItemSpellTechniques_SpellTechniques_1, enum class EGetResult CallFunc_TryGetItemSpellTechniques_Branches_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spell_Item_Filter_C", "ShouldShowEntry");

	Params::UBP_Spell_Item_Filter_C_ShouldShowEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.LEntrySpellTechniques = LEntrySpellTechniques;
	Parms.CallFunc_CanSlotSpellOnItem_ReturnValue = CallFunc_CanSlotSpellOnItem_ReturnValue;
	Parms.CallFunc_CanSlotSpellOnItem_ReturnValue_1 = CallFunc_CanSlotSpellOnItem_ReturnValue_1;
	Parms.CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex = CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex;
	Parms.CallFunc_TryGetItemSpellTechniques_SpellTechniques = CallFunc_TryGetItemSpellTechniques_SpellTechniques;
	Parms.CallFunc_TryGetItemSpellTechniques_Branches = CallFunc_TryGetItemSpellTechniques_Branches;
	Parms.CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1 = CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1;
	Parms.CallFunc_TryGetItemSpellTechniques_SpellTechniques_1 = CallFunc_TryGetItemSpellTechniques_SpellTechniques_1;
	Parms.CallFunc_TryGetItemSpellTechniques_Branches_1 = CallFunc_TryGetItemSpellTechniques_Branches_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Spell_Item_Filter.BP_Spell_Item_Filter_C.Initialize
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Spell_Item_Filter_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spell_Item_Filter_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Spell_Item_Filter.BP_Spell_Item_Filter_C.ExecuteUbergraph_BP_Spell_Item_Filter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_GetAllLayerTags_ReturnValue                             (ReferenceParm)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXCommonWindowWidget*      CallFunc_FindWindowInLayers_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ActionSlots_Popup_C*    K2Node_DynamicCast_AsWBP_Action_Slots_Popup                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Spell_Item_Filter_C::ExecuteUbergraph_BP_Spell_Item_Filter(int32 EntryPoint, TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue, class UWBP_ActionSlots_Popup_C* K2Node_DynamicCast_AsWBP_Action_Slots_Popup, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Spell_Item_Filter_C", "ExecuteUbergraph_BP_Spell_Item_Filter");

	Params::UBP_Spell_Item_Filter_C_ExecuteUbergraph_BP_Spell_Item_Filter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAllLayerTags_ReturnValue = CallFunc_GetAllLayerTags_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindWindowInLayers_ReturnValue = CallFunc_FindWindowInLayers_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Action_Slots_Popup = K2Node_DynamicCast_AsWBP_Action_Slots_Popup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


