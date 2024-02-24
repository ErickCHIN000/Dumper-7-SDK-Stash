#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_ItemAudio.BPFL_ItemAudio_C
// (None)

class UClass* UBPFL_ItemAudio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_ItemAudio_C");

	return Clss;
}


// BPFL_ItemAudio_C BPFL_ItemAudio.Default__BPFL_ItemAudio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_ItemAudio_C* UBPFL_ItemAudio_C::GetDefaultObj()
{
	static class UBPFL_ItemAudio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_ItemAudio_C*>(UBPFL_ItemAudio_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_ItemAudio.BPFL_ItemAudio_C.GetATRowAndColumnFromItemData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ATRow                                                            (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                ATColumn                                                         (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemAVFXTag_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag           (NoDestructor, HasGetValueTypeHash)

void UBPFL_ItemAudio_C::GetATRowAndColumnFromItemData(const struct FInventoryEntry& InventoryEntry, class UObject* __WorldContext, struct FGameplayTag* ATRow, struct FGameplayTag* ATColumn, const struct FGameplayTag& CallFunc_GetItemAVFXTag_ReturnValue, const struct FGameplayTag& CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ItemAudio_C", "GetATRowAndColumnFromItemData");

	Params::UBPFL_ItemAudio_C_GetATRowAndColumnFromItemData_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemAVFXTag_ReturnValue = CallFunc_GetItemAVFXTag_ReturnValue;
	Parms.CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag = CallFunc_GetPrimaryTaxonomyTagFromItemData_TaxonomyTag;

	UObject::ProcessEvent(Func, &Parms);

	if (ATRow != nullptr)
		*ATRow = std::move(Parms.ATRow);

	if (ATColumn != nullptr)
		*ATColumn = std::move(Parms.ATColumn);

}


// Function BPFL_ItemAudio.BPFL_ItemAudio_C.GetPrimaryTaxonomyTagFromItemData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TaxonomyTag                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemTypeTag_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ItemAudio_C::GetPrimaryTaxonomyTagFromItemData(const struct FInventoryEntry& InventoryEntry, class UObject* __WorldContext, struct FGameplayTag* TaxonomyTag, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, const struct FGameplayTag& CallFunc_GetItemTypeTag_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ItemAudio_C", "GetPrimaryTaxonomyTagFromItemData");

	Params::UBPFL_ItemAudio_C_GetPrimaryTaxonomyTagFromItemData_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.CallFunc_GetItemTypeTag_ReturnValue = CallFunc_GetItemTypeTag_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (TaxonomyTag != nullptr)
		*TaxonomyTag = std::move(Parms.TaxonomyTag);

}

}


