#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_ui_common.BPFL_ui_common_C
// (None)

class UClass* UBPFL_ui_common_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_ui_common_C");

	return Clss;
}


// BPFL_ui_common_C BPFL_ui_common.Default__BPFL_ui_common_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_ui_common_C* UBPFL_ui_common_C::GetDefaultObj()
{
	static class UBPFL_ui_common_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_ui_common_C*>(UBPFL_ui_common_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_ui_common.BPFL_ui_common_C.IsInfusionApplied
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             Infusion                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanApply                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstanceData_AttributeModifiersCallFunc_TryGetItemAttributeModifiers_Modifiers                  (None)
// enum class EGetResult              CallFunc_TryGetItemAttributeModifiers_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryConstructItemAttributeModifier_Branches              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstancedItemAttributeModifierCallFunc_TryConstructItemAttributeModifier_ReturnValue           (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSlotInfusionOnItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::IsInfusionApplied(const struct FInventoryEntry& Item, const struct FInventoryEntry& Infusion, class UObject* __WorldContext, bool* CanApply, const struct FInstanceData_AttributeModifiers& CallFunc_TryGetItemAttributeModifiers_Modifiers, enum class EGetResult CallFunc_TryGetItemAttributeModifiers_Branches, enum class EGetResult CallFunc_TryConstructItemAttributeModifier_Branches, const struct FInstancedItemAttributeModifier& CallFunc_TryConstructItemAttributeModifier_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_CanSlotInfusionOnItem_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "IsInfusionApplied");

	Params::UBPFL_ui_common_C_IsInfusionApplied_Params Parms{};

	Parms.Item = Item;
	Parms.Infusion = Infusion;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_TryGetItemAttributeModifiers_Modifiers = CallFunc_TryGetItemAttributeModifiers_Modifiers;
	Parms.CallFunc_TryGetItemAttributeModifiers_Branches = CallFunc_TryGetItemAttributeModifiers_Branches;
	Parms.CallFunc_TryConstructItemAttributeModifier_Branches = CallFunc_TryConstructItemAttributeModifier_Branches;
	Parms.CallFunc_TryConstructItemAttributeModifier_ReturnValue = CallFunc_TryConstructItemAttributeModifier_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CanSlotInfusionOnItem_ReturnValue = CallFunc_CanSlotInfusionOnItem_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanApply != nullptr)
		*CanApply = Parms.CanApply;

}


// Function BPFL_ui_common.BPFL_ui_common_C.CanApplySpell
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             CurrentItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             SpellItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanApply                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>LItemSpells                                                      (Edit, BlueprintVisible)
// int32                              CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>CallFunc_TryGetItemSpellTechniques_SpellTechniques               (ReferenceParm)
// enum class EGetResult              CallFunc_TryGetItemSpellTechniques_Branches                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanSlotSpellOnItem_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTechniqueDataAsset>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>CallFunc_TryGetItemSpellTechniques_SpellTechniques_1             (ReferenceParm)
// enum class EGetResult              CallFunc_TryGetItemSpellTechniques_Branches_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::CanApplySpell(const struct FInventoryEntry& CurrentItem, const struct FInventoryEntry& SpellItem, class UObject* __WorldContext, bool* CanApply, const TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& LItemSpells, int32 CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& CallFunc_TryGetItemSpellTechniques_SpellTechniques, enum class EGetResult CallFunc_TryGetItemSpellTechniques_Branches, bool CallFunc_CanSlotSpellOnItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Array_Get_Item, int32 CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& CallFunc_TryGetItemSpellTechniques_SpellTechniques_1, enum class EGetResult CallFunc_TryGetItemSpellTechniques_Branches_1, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "CanApplySpell");

	Params::UBPFL_ui_common_C_CanApplySpell_Params Parms{};

	Parms.CurrentItem = CurrentItem;
	Parms.SpellItem = SpellItem;
	Parms.__WorldContext = __WorldContext;
	Parms.LItemSpells = LItemSpells;
	Parms.CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex = CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex;
	Parms.CallFunc_TryGetItemSpellTechniques_SpellTechniques = CallFunc_TryGetItemSpellTechniques_SpellTechniques;
	Parms.CallFunc_TryGetItemSpellTechniques_Branches = CallFunc_TryGetItemSpellTechniques_Branches;
	Parms.CallFunc_CanSlotSpellOnItem_ReturnValue = CallFunc_CanSlotSpellOnItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1 = CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1;
	Parms.CallFunc_TryGetItemSpellTechniques_SpellTechniques_1 = CallFunc_TryGetItemSpellTechniques_SpellTechniques_1;
	Parms.CallFunc_TryGetItemSpellTechniques_Branches_1 = CallFunc_TryGetItemSpellTechniques_Branches_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanApply != nullptr)
		*CanApply = Parms.CanApply;

}


// Function BPFL_ui_common.BPFL_ui_common_C.GetInventoryActionType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EActionType             Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LSpell                                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FItemDataReference          LEssence                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FItemDataReference          LPerk                                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::GetInventoryActionType(struct FInventoryEntry& InventoryEntry, class UObject* __WorldContext, enum class EActionType* Type, const struct FItemDataReference& LSpell, const struct FItemDataReference& LEssence, const struct FItemDataReference& LPerk, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue_1, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "GetInventoryActionType");

	Params::UBPFL_ui_common_C_GetInventoryActionType_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.LSpell = LSpell;
	Parms.LEssence = LEssence;
	Parms.LPerk = LPerk;
	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue = CallFunc_EqualEqual_FItemDataReference_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue_1 = CallFunc_EqualEqual_FItemDataReference_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue_2 = CallFunc_EqualEqual_FItemDataReference_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function BPFL_ui_common.BPFL_ui_common_C.IsValidQuality
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanEnchant                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_GetItemQualityFromEntry_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_ByteByte_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::IsValidQuality(const struct FInventoryEntry& ItemEntry, class UObject* __WorldContext, bool* CanEnchant, enum class EItemQuality CallFunc_GetItemQualityFromEntry_ReturnValue, bool CallFunc_Less_ByteByte_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "IsValidQuality");

	Params::UBPFL_ui_common_C_IsValidQuality_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetItemQualityFromEntry_ReturnValue = CallFunc_GetItemQualityFromEntry_ReturnValue;
	Parms.CallFunc_Less_ByteByte_ReturnValue = CallFunc_Less_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanEnchant != nullptr)
		*CanEnchant = Parms.CanEnchant;

}


// Function BPFL_ui_common.BPFL_ui_common_C.GetValueTypeForItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayAttributeUIData    AttributeUIData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EAttributeValueType     ValueType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       LItemTags                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_TryGetItemData_ItemData                                 (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetItemData_Branches                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayTag>        CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAttributeValueType     CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::GetValueTypeForItem(struct FInventoryEntry& InventoryEntry, const struct FGameplayAttributeUIData& AttributeUIData, class UObject* __WorldContext, enum class EAttributeValueType* ValueType, const struct FGameplayTagContainer& LItemTags, int32 Temp_int_Array_Index_Variable, const struct FItemData& CallFunc_TryGetItemData_ItemData, enum class EGetResult CallFunc_TryGetItemData_Branches, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_HasTag_ReturnValue, enum class EAttributeValueType CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "GetValueTypeForItem");

	Params::UBPFL_ui_common_C_GetValueTypeForItem_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.AttributeUIData = AttributeUIData;
	Parms.__WorldContext = __WorldContext;
	Parms.LItemTags = LItemTags;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_TryGetItemData_ItemData = CallFunc_TryGetItemData_ItemData;
	Parms.CallFunc_TryGetItemData_Branches = CallFunc_TryGetItemData_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ValueType != nullptr)
		*ValueType = Parms.ValueType;

}


// Function BPFL_ui_common.BPFL_ui_common_C.CanEnchantItem
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInventoryEntry             SelectedApplyEntry                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CanEnchant                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LCanApply                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInstancedItemAttributeModifier>LItemModifiers                                                   (Edit, BlueprintVisible)
// TMap<struct FGameplayAttribute, float>LItemAttribute                                                   (Edit, BlueprintVisible)
// enum class EGetResult              CallFunc_TryConstructItemAttributeModifier_Branches              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInstancedItemAttributeModifierCallFunc_TryConstructItemAttributeModifier_ReturnValue           (None)
// TMap<struct FGameplayAttribute, float>CallFunc_CalculateItemAttributeValues_ReturnValue                (None)
// TMap<struct FGameplayAttribute, int32>CallFunc_GetAttributeModifiers_ReturnValue                       (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGameplayAttribute>  CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttribute          CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInfusionApplied_CanApply                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::CanEnchantItem(struct FInventoryEntry& Item, struct FInventoryEntry& SelectedApplyEntry, class UObject* __WorldContext, bool* CanEnchant, bool LCanApply, const TArray<struct FInstancedItemAttributeModifier>& LItemModifiers, TMap<struct FGameplayAttribute, float> LItemAttribute, enum class EGetResult CallFunc_TryConstructItemAttributeModifier_Branches, const struct FInstancedItemAttributeModifier& CallFunc_TryConstructItemAttributeModifier_ReturnValue, TMap<struct FGameplayAttribute, float> CallFunc_CalculateItemAttributeValues_ReturnValue, TMap<struct FGameplayAttribute, int32> CallFunc_GetAttributeModifiers_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FGameplayAttribute>& CallFunc_Map_Keys_Keys, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FGameplayAttribute& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsInfusionApplied_CanApply, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Map_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "CanEnchantItem");

	Params::UBPFL_ui_common_C_CanEnchantItem_Params Parms{};

	Parms.Item = Item;
	Parms.SelectedApplyEntry = SelectedApplyEntry;
	Parms.__WorldContext = __WorldContext;
	Parms.LCanApply = LCanApply;
	Parms.LItemModifiers = LItemModifiers;
	Parms.LItemAttribute = LItemAttribute;
	Parms.CallFunc_TryConstructItemAttributeModifier_Branches = CallFunc_TryConstructItemAttributeModifier_Branches;
	Parms.CallFunc_TryConstructItemAttributeModifier_ReturnValue = CallFunc_TryConstructItemAttributeModifier_ReturnValue;
	Parms.CallFunc_CalculateItemAttributeValues_ReturnValue = CallFunc_CalculateItemAttributeValues_ReturnValue;
	Parms.CallFunc_GetAttributeModifiers_ReturnValue = CallFunc_GetAttributeModifiers_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsInfusionApplied_CanApply = CallFunc_IsInfusionApplied_CanApply;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Map_Contains_ReturnValue = CallFunc_Map_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanEnchant != nullptr)
		*CanEnchant = Parms.CanEnchant;

}


// Function BPFL_ui_common.BPFL_ui_common_C.FormatTextFromType
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EAttributeValueType     Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ResultText                                                       (Parm, OutParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// float                              CallFunc_RoundFloatToSingleDecimal_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// float                              CallFunc_RoundFloatToSingleDecimal_ValueToRound_ImplicitCast     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::FormatTextFromType(enum class EAttributeValueType Selection, double Value, class UObject* __WorldContext, class FText* ResultText, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_DoubleToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, float CallFunc_RoundFloatToSingleDecimal_ReturnValue, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, bool CallFunc_Contains_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_RoundFloatToSingleDecimal_ValueToRound_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "FormatTextFromType");

	Params::UBPFL_ui_common_C_FormatTextFromType_Params Parms{};

	Parms.Selection = Selection;
	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_2 = CallFunc_Conv_DoubleToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_RoundFloatToSingleDecimal_ReturnValue = CallFunc_RoundFloatToSingleDecimal_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_RoundFloatToSingleDecimal_ValueToRound_ImplicitCast = CallFunc_RoundFloatToSingleDecimal_ValueToRound_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultText != nullptr)
		*ResultText = Parms.ResultText;

}


// Function BPFL_ui_common.BPFL_ui_common_C.GetSortedUIAttributeInfo
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FGameplayAttribute, double>UnsortedAttributeValuesMap                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAttributeValueAndUIData>OutAttributeValueAndUIData                                       (Parm, OutParm)
// class UAttributeUIDataRegistry*    DataRegistry                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAttributeValueAndUIData>CallFunc_GetSortedAttributeValueAndUIData_OutAttributeValueAndUIData(ReferenceParm)
// TMap<struct FGameplayAttribute, float>CallFunc_GetSortedAttributeValueAndUIData_InUnsortedAttributeValuesMap_ImplicitCast(ConstParm)

void UBPFL_ui_common_C::GetSortedUIAttributeInfo(TMap<struct FGameplayAttribute, double>& UnsortedAttributeValuesMap, class UObject* __WorldContext, TArray<struct FAttributeValueAndUIData>* OutAttributeValueAndUIData, class UAttributeUIDataRegistry* DataRegistry, TArray<struct FAttributeValueAndUIData>& CallFunc_GetSortedAttributeValueAndUIData_OutAttributeValueAndUIData, TMap<struct FGameplayAttribute, float> CallFunc_GetSortedAttributeValueAndUIData_InUnsortedAttributeValuesMap_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "GetSortedUIAttributeInfo");

	Params::UBPFL_ui_common_C_GetSortedUIAttributeInfo_Params Parms{};

	Parms.UnsortedAttributeValuesMap = UnsortedAttributeValuesMap;
	Parms.__WorldContext = __WorldContext;
	Parms.DataRegistry = DataRegistry;
	Parms.CallFunc_GetSortedAttributeValueAndUIData_OutAttributeValueAndUIData = CallFunc_GetSortedAttributeValueAndUIData_OutAttributeValueAndUIData;
	Parms.CallFunc_GetSortedAttributeValueAndUIData_InUnsortedAttributeValuesMap_ImplicitCast = CallFunc_GetSortedAttributeValueAndUIData_InUnsortedAttributeValuesMap_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutAttributeValueAndUIData != nullptr)
		*OutAttributeValueAndUIData = std::move(Parms.OutAttributeValueAndUIData);

}


// Function BPFL_ui_common.BPFL_ui_common_C.TryGetUIDataForAttribute
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAttribute          Attribute                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttributeUIData    OutData                                                          (Parm, OutParm)
// class UAttributeUIDataRegistry*    DataRegistry                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAttributeUIData    CallFunc_TryGetAttributeUIData_OutData                           (None)
// enum class EGetResult              CallFunc_TryGetAttributeUIData_OutBranches                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::TryGetUIDataForAttribute(struct FGameplayAttribute& Attribute, class UObject* __WorldContext, bool* bSuccess, struct FGameplayAttributeUIData* OutData, class UAttributeUIDataRegistry* DataRegistry, const struct FGameplayAttributeUIData& CallFunc_TryGetAttributeUIData_OutData, enum class EGetResult CallFunc_TryGetAttributeUIData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "TryGetUIDataForAttribute");

	Params::UBPFL_ui_common_C_TryGetUIDataForAttribute_Params Parms{};

	Parms.Attribute = Attribute;
	Parms.__WorldContext = __WorldContext;
	Parms.DataRegistry = DataRegistry;
	Parms.CallFunc_TryGetAttributeUIData_OutData = CallFunc_TryGetAttributeUIData_OutData;
	Parms.CallFunc_TryGetAttributeUIData_OutBranches = CallFunc_TryGetAttributeUIData_OutBranches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (OutData != nullptr)
		*OutData = std::move(Parms.OutData);

}


// Function BPFL_ui_common.BPFL_ui_common_C.GetFormattedTimeString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Threshold                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_ui_common_C::GetFormattedTimeString(int32 Time, int32 Threshold, class UObject* __WorldContext, class FString* Result, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "GetFormattedTimeString");

	Params::UBPFL_ui_common_C_GetFormattedTimeString_Params Parms{};

	Parms.Time = Time;
	Parms.Threshold = Threshold;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);

}


// Function BPFL_ui_common.BPFL_ui_common_C.GetMessageOfTheDay
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      File_Path                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Message_Of_Day                                                   (Parm, OutParm)
// bool                               CallFunc_FileExists_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_ReadFile_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UBPFL_ui_common_C::GetMessageOfTheDay(const class FString& File_Path, class UObject* __WorldContext, class FText* Message_Of_Day, bool CallFunc_FileExists_ReturnValue, const class FString& CallFunc_ReadFile_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "GetMessageOfTheDay");

	Params::UBPFL_ui_common_C_GetMessageOfTheDay_Params Parms{};

	Parms.File_Path = File_Path;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FileExists_ReturnValue = CallFunc_FileExists_ReturnValue;
	Parms.CallFunc_ReadFile_ReturnValue = CallFunc_ReadFile_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Message_Of_Day != nullptr)
		*Message_Of_Day = Parms.Message_Of_Day;

}


// Function BPFL_ui_common.BPFL_ui_common_C.Get Item Quality Colour
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemQuality            Quality                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                QualityColour_Linear                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 QualityColour_Slate__UI_                                         (Parm, OutParm)
// TMap<enum class EItemQuality, struct FLinearColor>QualityColours                                                   (Edit, BlueprintVisible)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// TMap<enum class EItemQuality, struct FLinearColor>K2Node_MakeVariable_MakeVariableOutput                           (None)
// struct FLinearColor                CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UBPFL_ui_common_C::Get_Item_Quality_Colour(enum class EItemQuality Quality, class UObject* __WorldContext, struct FLinearColor* QualityColour_Linear, struct FSlateColor* QualityColour_Slate__UI_, TMap<enum class EItemQuality, struct FLinearColor> QualityColours, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TMap<enum class EItemQuality, struct FLinearColor> K2Node_MakeVariable_MakeVariableOutput, const struct FLinearColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_ui_common_C", "Get Item Quality Colour");

	Params::UBPFL_ui_common_C_Get_Item_Quality_Colour_Params Parms{};

	Parms.Quality = Quality;
	Parms.__WorldContext = __WorldContext;
	Parms.QualityColours = QualityColours;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

	if (QualityColour_Linear != nullptr)
		*QualityColour_Linear = std::move(Parms.QualityColour_Linear);

	if (QualityColour_Slate__UI_ != nullptr)
		*QualityColour_Slate__UI_ = std::move(Parms.QualityColour_Slate__UI_);

}

}


