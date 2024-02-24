#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C
// (None)

class UClass* UWBP_ActionSlots_Popup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ActionSlots_Popup_C");

	return Clss;
}


// WBP_ActionSlots_Popup_C WBP_ActionSlots_Popup.Default__WBP_ActionSlots_Popup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ActionSlots_Popup_C* UWBP_ActionSlots_Popup_C::GetDefaultObj()
{
	static class UWBP_ActionSlots_Popup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ActionSlots_Popup_C*>(UWBP_ActionSlots_Popup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ActionSlots_Popup_C::CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_ActionSlots_Popup_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnItemPressed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ActionSlots_Item_C*     K2Node_DynamicCast_AsWBP_Action_Slots_Item                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::OnItemPressed(const struct FInventoryEntry& InventoryEntry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnItemPressed");

	Params::UWBP_ActionSlots_Popup_C_OnItemPressed_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Action_Slots_Item = K2Node_DynamicCast_AsWBP_Action_Slots_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.ShouldCloseWindow
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShouldClose                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChildAt_IsValid                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ItemWidget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::ShouldCloseWindow(bool* bShouldClose, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "ShouldCloseWindow");

	Params::UWBP_ActionSlots_Popup_C_ShouldCloseWindow_Params Parms{};

	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetChildAt_IsValid = CallFunc_GetChildAt_IsValid;
	Parms.CallFunc_GetChildAt_ItemWidget = CallFunc_GetChildAt_ItemWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldClose != nullptr)
		*bShouldClose = Parms.bShouldClose;

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Get Slotted Perk Inventory Entry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             PerkInventoryEntry                                               (Parm, OutParm)
// TArray<class UItemInstanceData*>   Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FItemDataReference          CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue             (HasGetValueTypeHash)
// struct FInstanceData_Perks         CallFunc_TryGetItemPerks_Perks                                   (None)
// enum class EGetResult              CallFunc_TryGetItemPerks_Branches                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemPerkDataReference>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)

void UWBP_ActionSlots_Popup_C::Get_Slotted_Perk_Inventory_Entry(struct FInventoryEntry* PerkInventoryEntry, TArray<class UItemInstanceData*>& Temp_object_Variable, const struct FItemDataReference& CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue, const struct FInstanceData_Perks& CallFunc_TryGetItemPerks_Perks, enum class EGetResult CallFunc_TryGetItemPerks_Branches, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FItemPerkDataReference>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Get Slotted Perk Inventory Entry");

	Params::UWBP_ActionSlots_Popup_C_Get_Slotted_Perk_Inventory_Entry_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue = CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue;
	Parms.CallFunc_TryGetItemPerks_Perks = CallFunc_TryGetItemPerks_Perks;
	Parms.CallFunc_TryGetItemPerks_Branches = CallFunc_TryGetItemPerks_Branches;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (PerkInventoryEntry != nullptr)
		*PerkInventoryEntry = std::move(Parms.PerkInventoryEntry);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Get Slotted Spell Inventory Entry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ActionSlots_Item_C*     Spell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             SpellInventoryEntry                                              (Parm, OutParm)
// TArray<class UItemInstanceData*>   Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UTechniqueDataAsset>>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FItemDataReference          CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue             (HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::Get_Slotted_Spell_Inventory_Entry(class UWBP_ActionSlots_Item_C* Spell, struct FInventoryEntry* SpellInventoryEntry, TArray<class UItemInstanceData*>& Temp_object_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& K2Node_MakeArray_Array, const struct FItemDataReference& CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Get Slotted Spell Inventory Entry");

	Params::UWBP_ActionSlots_Popup_C_Get_Slotted_Spell_Inventory_Entry_Params Parms{};

	Parms.Spell = Spell;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue = CallFunc_MakeItemReferfenceFromDataAsset_ReturnValue;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (SpellInventoryEntry != nullptr)
		*SpellInventoryEntry = std::move(Parms.SpellInventoryEntry);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Send Perk Telemetry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ApplyingItem                                                     (Parm, OutParm)
// struct FInventoryEntry             ApplyingPerk                                                     (Parm, OutParm)
// struct FInventoryEntry             PreviousPerk                                                     (Parm, OutParm)
// struct FInventoryEntry             CallFunc_Get_Slotted_Perk_Inventory_Entry_PerkInventoryEntry     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::Send_Perk_Telemetry(struct FInventoryEntry* ApplyingItem, struct FInventoryEntry* ApplyingPerk, struct FInventoryEntry* PreviousPerk, const struct FInventoryEntry& CallFunc_Get_Slotted_Perk_Inventory_Entry_PerkInventoryEntry, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Send Perk Telemetry");

	Params::UWBP_ActionSlots_Popup_C_Send_Perk_Telemetry_Params Parms{};

	Parms.CallFunc_Get_Slotted_Perk_Inventory_Entry_PerkInventoryEntry = CallFunc_Get_Slotted_Perk_Inventory_Entry_PerkInventoryEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ApplyingItem != nullptr)
		*ApplyingItem = std::move(Parms.ApplyingItem);

	if (ApplyingPerk != nullptr)
		*ApplyingPerk = std::move(Parms.ApplyingPerk);

	if (PreviousPerk != nullptr)
		*PreviousPerk = std::move(Parms.PreviousPerk);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Send Spell Telemetry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ApplyingItem                                                     (Parm, OutParm)
// struct FInventoryEntry             ApplyingSpell                                                    (Parm, OutParm)
// struct FInventoryEntry             PreviousSpell                                                    (Parm, OutParm)
// struct FInventoryEntry             CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry   (None)
// struct FInventoryEntry             CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_1 (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_2 (None)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::Send_Spell_Telemetry(struct FInventoryEntry* ApplyingItem, struct FInventoryEntry* ApplyingSpell, struct FInventoryEntry* PreviousSpell, const struct FInventoryEntry& CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry, const struct FInventoryEntry& CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryEntry& CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_2, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Send Spell Telemetry");

	Params::UWBP_ActionSlots_Popup_C_Send_Spell_Telemetry_Params Parms{};

	Parms.CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry = CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry;
	Parms.CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_1 = CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_2 = CallFunc_Get_Slotted_Spell_Inventory_Entry_SpellInventoryEntry_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ApplyingItem != nullptr)
		*ApplyingItem = std::move(Parms.ApplyingItem);

	if (ApplyingSpell != nullptr)
		*ApplyingSpell = std::move(Parms.ApplyingSpell);

	if (PreviousSpell != nullptr)
		*PreviousSpell = std::move(Parms.PreviousSpell);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Send Infusion Telemetry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ApplyingItem                                                     (Parm, OutParm)
// struct FInventoryEntry             ApplyingInfusion                                                 (Parm, OutParm)
// struct FInventoryEntry             PreviousInfusion                                                 (Parm, OutParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::Send_Infusion_Telemetry(struct FInventoryEntry* ApplyingItem, struct FInventoryEntry* ApplyingInfusion, struct FInventoryEntry* PreviousInfusion, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Send Infusion Telemetry");

	Params::UWBP_ActionSlots_Popup_C_Send_Infusion_Telemetry_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ApplyingItem != nullptr)
		*ApplyingItem = std::move(Parms.ApplyingItem);

	if (ApplyingInfusion != nullptr)
		*ApplyingInfusion = std::move(Parms.ApplyingInfusion);

	if (PreviousInfusion != nullptr)
		*PreviousInfusion = std::move(Parms.PreviousInfusion);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.SendTelemetry
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Send_Perk_Telemetry_ApplyingItem                        (None)
// struct FInventoryEntry             CallFunc_Send_Perk_Telemetry_ApplyingPerk                        (None)
// struct FInventoryEntry             CallFunc_Send_Perk_Telemetry_PreviousPerk                        (None)
// struct FInventoryEntry             CallFunc_Send_Spell_Telemetry_ApplyingItem                       (None)
// struct FInventoryEntry             CallFunc_Send_Spell_Telemetry_ApplyingSpell                      (None)
// struct FInventoryEntry             CallFunc_Send_Spell_Telemetry_PreviousSpell                      (None)
// struct FInventoryEntry             CallFunc_Send_Infusion_Telemetry_ApplyingItem                    (None)
// struct FInventoryEntry             CallFunc_Send_Infusion_Telemetry_ApplyingInfusion                (None)
// struct FInventoryEntry             CallFunc_Send_Infusion_Telemetry_PreviousInfusion                (None)
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::SendTelemetry(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, const struct FInventoryEntry& CallFunc_Send_Perk_Telemetry_ApplyingItem, const struct FInventoryEntry& CallFunc_Send_Perk_Telemetry_ApplyingPerk, const struct FInventoryEntry& CallFunc_Send_Perk_Telemetry_PreviousPerk, const struct FInventoryEntry& CallFunc_Send_Spell_Telemetry_ApplyingItem, const struct FInventoryEntry& CallFunc_Send_Spell_Telemetry_ApplyingSpell, const struct FInventoryEntry& CallFunc_Send_Spell_Telemetry_PreviousSpell, const struct FInventoryEntry& CallFunc_Send_Infusion_Telemetry_ApplyingItem, const struct FInventoryEntry& CallFunc_Send_Infusion_Telemetry_ApplyingInfusion, const struct FInventoryEntry& CallFunc_Send_Infusion_Telemetry_PreviousInfusion, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "SendTelemetry");

	Params::UWBP_ActionSlots_Popup_C_SendTelemetry_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_1 = CallFunc_GetLocalPlayerState_PlayerState_1;
	Parms.CallFunc_Send_Perk_Telemetry_ApplyingItem = CallFunc_Send_Perk_Telemetry_ApplyingItem;
	Parms.CallFunc_Send_Perk_Telemetry_ApplyingPerk = CallFunc_Send_Perk_Telemetry_ApplyingPerk;
	Parms.CallFunc_Send_Perk_Telemetry_PreviousPerk = CallFunc_Send_Perk_Telemetry_PreviousPerk;
	Parms.CallFunc_Send_Spell_Telemetry_ApplyingItem = CallFunc_Send_Spell_Telemetry_ApplyingItem;
	Parms.CallFunc_Send_Spell_Telemetry_ApplyingSpell = CallFunc_Send_Spell_Telemetry_ApplyingSpell;
	Parms.CallFunc_Send_Spell_Telemetry_PreviousSpell = CallFunc_Send_Spell_Telemetry_PreviousSpell;
	Parms.CallFunc_Send_Infusion_Telemetry_ApplyingItem = CallFunc_Send_Infusion_Telemetry_ApplyingItem;
	Parms.CallFunc_Send_Infusion_Telemetry_ApplyingInfusion = CallFunc_Send_Infusion_Telemetry_ApplyingInfusion;
	Parms.CallFunc_Send_Infusion_Telemetry_PreviousInfusion = CallFunc_Send_Infusion_Telemetry_PreviousInfusion;
	Parms.CallFunc_GetLocalPlayerState_PlayerState_2 = CallFunc_GetLocalPlayerState_PlayerState_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.GetItemQualityFormatText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EItemQuality            ItemQuality                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        QualityMarkup                                                    (Parm, OutParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::GetItemQualityFormatText(enum class EItemQuality ItemQuality, class FText* QualityMarkup, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "GetItemQualityFormatText");

	Params::UWBP_ActionSlots_Popup_C_GetItemQualityFormatText_Params Parms{};

	Parms.ItemQuality = ItemQuality;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (QualityMarkup != nullptr)
		*QualityMarkup = Parms.QualityMarkup;

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.UpdateSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ActionSlots_Item_C*     K2Node_DynamicCast_AsWBP_Action_Slots_Item                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::UpdateSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "UpdateSlots");

	Params::UWBP_ActionSlots_Popup_C_UpdateSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Action_Slots_Item = K2Node_DynamicCast_AsWBP_Action_Slots_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnInventoryItemSelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanOverrideSimilarInfusion_OverrideOnly                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_ReturnValue                                 (UObjectWrapper, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::OnInventoryItemSelected(bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_CanOverrideSimilarInfusion_OverrideOnly, enum class ESlateVisibility K2Node_Select_Default, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnInventoryItemSelected");

	Params::UWBP_ActionSlots_Popup_C_OnInventoryItemSelected_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CanOverrideSimilarInfusion_OverrideOnly = CallFunc_CanOverrideSimilarInfusion_OverrideOnly;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetItemIcon_ReturnValue = CallFunc_GetItemIcon_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChildAt_IsValid                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ItemWidget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ActionSlots_Popup_C::BP_GetDesiredFocusTarget(bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_ActionSlots_Popup_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_IsValid = CallFunc_GetChildAt_IsValid;
	Parms.CallFunc_GetChildAt_ItemWidget = CallFunc_GetChildAt_ItemWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.UpdateApplyButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ActionSlots_Item_C*     K2Node_DynamicCast_AsWBP_Action_Slots_Item                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::UpdateApplyButton(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "UpdateApplyButton");

	Params::UWBP_ActionSlots_Popup_C_UpdateApplyButton_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Action_Slots_Item = K2Node_DynamicCast_AsWBP_Action_Slots_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.ApplyItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingStationComponent_C*CraftingStation                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    LRecipe                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// class ABP_Character_C*             LCrafter                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        LCrafterController                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// enum class EActionType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter_2                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLocalPlayerPersistentId_PlayerId                     (ZeroConstructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue(None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              (None)
// int32                              CallFunc_SendGameplayEventToActor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::ApplyItem(class UBP_CraftingStationComponent_C* CraftingStation, const struct FCraftingRecipeReference& LRecipe, class ABP_Character_C* LCrafter, class ANWXPlayerController* LCrafterController, const struct FCraftingRecipeReference& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, TArray<struct FInventoryEntry>& K2Node_MakeArray_Array, enum class EActionType Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_1, const struct FCraftingRecipeReference& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "ApplyItem");

	Params::UWBP_ActionSlots_Popup_C_ApplyItem_Params Parms{};

	Parms.CraftingStation = CraftingStation;
	Parms.LRecipe = LRecipe;
	Parms.LCrafter = LCrafter;
	Parms.LCrafterController = LCrafterController;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter_1 = CallFunc_GetLocalCharacter_PlayerCharacter_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter_2 = CallFunc_GetLocalCharacter_PlayerCharacter_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetLocalPlayerPersistentId_PlayerId = CallFunc_GetLocalPlayerPersistentId_PlayerId;
	Parms.CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue = CallFunc_AbilityTargetDataFromCraftingRecipeInstanced_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_SendGameplayEventToActor_ReturnValue = CallFunc_SendGameplayEventToActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.AddItemToSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ActionSlots_Item_C*     K2Node_DynamicCast_AsWBP_Action_Slots_Item                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::AddItemToSlot(int32 Index, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "AddItemToSlot");

	Params::UWBP_ActionSlots_Popup_C_AddItemToSlot_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Action_Slots_Item = K2Node_DynamicCast_AsWBP_Action_Slots_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.CreateBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::CreateBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "CreateBindings");

	Params::UWBP_ActionSlots_Popup_C_CreateBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EActionType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UWidgetInventoryEntryFilter>Temp_class_Variable                                              (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWidgetInventoryEntryFilter>Temp_class_Variable_1                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWidgetInventoryEntryFilter>Temp_class_Variable_2                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSubclassOf<class UWidgetInventoryEntryFilter>Temp_class_Variable_3                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// enum class EActionType             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGenericContainerCosmeticSettingsK2Node_MakeStruct_GenericContainerCosmeticSettings               (NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UWidgetInventoryEntryFilter>K2Node_Select_Default                                            (ConstParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// enum class EActionType             CallFunc_GetInventoryActionType_Type                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::Initialize(enum class EActionType Temp_byte_Variable, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable_1, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable_2, TSubclassOf<class UWidgetInventoryEntryFilter> Temp_class_Variable_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_ByteByte_ReturnValue, class FText CallFunc_Format_ReturnValue, enum class EActionType Temp_byte_Variable_1, const struct FGenericContainerCosmeticSettings& K2Node_MakeStruct_GenericContainerCosmeticSettings, class FText Temp_text_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSubclassOf<class UWidgetInventoryEntryFilter> K2Node_Select_Default, class FText Temp_text_Variable_1, enum class EActionType CallFunc_GetInventoryActionType_Type, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText Temp_text_Variable_3, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Initialize");

	Params::UWBP_ActionSlots_Popup_C_Initialize_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.Temp_class_Variable_1 = Temp_class_Variable_1;
	Parms.Temp_class_Variable_2 = Temp_class_Variable_2;
	Parms.Temp_class_Variable_3 = Temp_class_Variable_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeStruct_GenericContainerCosmeticSettings = K2Node_MakeStruct_GenericContainerCosmeticSettings;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetInventoryActionType_Type = CallFunc_GetInventoryActionType_Type;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.RefreshSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CraftingItem_SlotPanel_C*K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::RefreshSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_CraftingItem_SlotPanel_C* K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "RefreshSlots");

	Params::UWBP_ActionSlots_Popup_C_RefreshSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel = K2Node_DynamicCast_AsWBP_Crafting_Item_Slot_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.UpdateText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        LToolQuality                                                     (Edit, BlueprintVisible)
// class FText                        LItemQuality                                                     (Edit, BlueprintVisible)
// class FText                        LToolName                                                        (Edit, BlueprintVisible)
// class FText                        LIngredientName                                                  (Edit, BlueprintVisible)
// struct FCraftingRecipeReference    Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// struct FCraftingRecipeReference    Temp_struct_Variable_1                                           (ConstParm, HasGetValueTypeHash)
// struct FInstanceData_Quality       CallFunc_TryGetItemQuality_Quality                               (NoDestructor)
// enum class EGetResult              CallFunc_TryGetItemQuality_Branches                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionType             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemQualityFormatText_QualityMarkup                  (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// enum class EItemQuality            CallFunc_GetItemQuality_Return_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetItemQualityFormatText_QualityMarkup_1                (None)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class FText                        CallFunc_GetItemDescription_ReturnValue                          (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    K2Node_Select_Default                                            (ConstParm, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_GetItemName_ReturnValue_1                               (None)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_ActionSlots_Popup_C::UpdateText(class FText LToolQuality, class FText LItemQuality, class FText LToolName, class FText LIngredientName, const struct FCraftingRecipeReference& Temp_struct_Variable, const struct FCraftingRecipeReference& Temp_struct_Variable_1, const struct FInstanceData_Quality& CallFunc_TryGetItemQuality_Quality, enum class EGetResult CallFunc_TryGetItemQuality_Branches, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, enum class EActionType Temp_byte_Variable, class FText CallFunc_GetItemQualityFormatText_QualityMarkup, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, enum class EItemQuality CallFunc_GetItemQuality_Return_Value, class FText CallFunc_GetItemQualityFormatText_QualityMarkup_1, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetItemDescription_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FCraftingRecipeReference& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_GetItemName_ReturnValue_1, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "UpdateText");

	Params::UWBP_ActionSlots_Popup_C_UpdateText_Params Parms{};

	Parms.LToolQuality = LToolQuality;
	Parms.LItemQuality = LItemQuality;
	Parms.LToolName = LToolName;
	Parms.LIngredientName = LIngredientName;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_TryGetItemQuality_Quality = CallFunc_TryGetItemQuality_Quality;
	Parms.CallFunc_TryGetItemQuality_Branches = CallFunc_TryGetItemQuality_Branches;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetItemQualityFormatText_QualityMarkup = CallFunc_GetItemQualityFormatText_QualityMarkup;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetItemQuality_Return_Value = CallFunc_GetItemQuality_Return_Value;
	Parms.CallFunc_GetItemQualityFormatText_QualityMarkup_1 = CallFunc_GetItemQualityFormatText_QualityMarkup_1;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_GetItemDescription_ReturnValue = CallFunc_GetItemDescription_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetItemName_ReturnValue_1 = CallFunc_GetItemName_ReturnValue_1;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ActionSlots_Popup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::OnSlotClicked(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnSlotClicked");

	Params::UWBP_ActionSlots_Popup_C_OnSlotClicked_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnInternalOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_ActionSlots_Popup_C::OnInternalOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnInternalOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnInternalClosed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_ActionSlots_Popup_C::OnInternalClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnInternalClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ActionSlots_Popup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.BndEvt__WBP_ActionSlots_Popup_BU_Apply_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::BndEvt__WBP_ActionSlots_Popup_BU_Apply_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "BndEvt__WBP_ActionSlots_Popup_BU_Apply_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_ActionSlots_Popup_C_BndEvt__WBP_ActionSlots_Popup_BU_Apply_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.BndEvt__WBP_ActionSlots_Popup_BU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::BndEvt__WBP_ActionSlots_Popup_BU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "BndEvt__WBP_ActionSlots_Popup_BU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_ActionSlots_Popup_C_BndEvt__WBP_ActionSlots_Popup_BU_Close_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.ExecuteUbergraph_WBP_ActionSlots_Popup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldCloseWindow_bShouldClose                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SlotIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             CallFunc_GetLocalCharacter_PlayerCharacter_1                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ActionSlots_Item_C*     K2Node_DynamicCast_AsWBP_Action_Slots_Item                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::ExecuteUbergraph_WBP_ActionSlots_Popup(int32 EntryPoint, bool CallFunc_ShouldCloseWindow_bShouldClose, int32 K2Node_CustomEvent_SlotIndex, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UWBP_ActionSlots_Item_C* K2Node_DynamicCast_AsWBP_Action_Slots_Item, bool K2Node_DynamicCast_bSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "ExecuteUbergraph_WBP_ActionSlots_Popup");

	Params::UWBP_ActionSlots_Popup_C_ExecuteUbergraph_WBP_ActionSlots_Popup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ShouldCloseWindow_bShouldClose = CallFunc_ShouldCloseWindow_bShouldClose;
	Parms.K2Node_CustomEvent_SlotIndex = K2Node_CustomEvent_SlotIndex;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter = CallFunc_GetLocalCharacter_PlayerCharacter;
	Parms.CallFunc_GetLocalCharacter_PlayerCharacter_1 = CallFunc_GetLocalCharacter_PlayerCharacter_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_DynamicCast_AsWBP_Action_Slots_Item = K2Node_DynamicCast_AsWBP_Action_Slots_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnCancelApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ActionSlots_Popup_C::OnCancelApply__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnCancelApply__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnSlotSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ActionSlots_Popup_C::OnSlotSelected__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnSlotSelected__DelegateSignature");

	Params::UWBP_ActionSlots_Popup_C_OnSlotSelected__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ActionSlots_Popup.WBP_ActionSlots_Popup_C.OnApplyToItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ActionSlots_Popup_C::OnApplyToItem__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ActionSlots_Popup_C", "OnApplyToItem__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


