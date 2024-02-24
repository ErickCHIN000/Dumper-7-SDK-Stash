#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C
// (None)

class UClass* UBP_AILoadoutComponentBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AILoadoutComponentBase_C");

	return Clss;
}


// BP_AILoadoutComponentBase_C BP_AILoadoutComponentBase.Default__BP_AILoadoutComponentBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AILoadoutComponentBase_C* UBP_AILoadoutComponentBase_C::GetDefaultObj()
{
	static class UBP_AILoadoutComponentBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AILoadoutComponentBase_C*>(UBP_AILoadoutComponentBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.HandleOffhandEquip
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          EquippedID                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FGameplayTag                LTwoHandTag                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        LMainHandSlot                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// enum class ELoadoutSlotType        CallFunc_GetLoadoutSlotType_SlotType                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_Tags                                        (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutSlot                CallFunc_GetSlotByType_ReturnValue                               (None)
// struct FGameplayTagContainer       CallFunc_GetItemTags_Tags_1                                      (None)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::HandleOffhandEquip(const struct FItemDataReference& EquippedID, const struct FGameplayTag& LTwoHandTag, enum class ELoadoutSlotType LMainHandSlot, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_UnequipEquippedItem_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, enum class ELoadoutSlotType CallFunc_GetLoadoutSlotType_SlotType, bool CallFunc_UnequipEquippedItem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags, bool CallFunc_HasTag_ReturnValue, const struct FLoadoutSlot& CallFunc_GetSlotByType_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags_1, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "HandleOffhandEquip");

	Params::UBP_AILoadoutComponentBase_C_HandleOffhandEquip_Params Parms{};

	Parms.EquippedID = EquippedID;
	Parms.LTwoHandTag = LTwoHandTag;
	Parms.LMainHandSlot = LMainHandSlot;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_UnequipEquippedItem_ReturnValue = CallFunc_UnequipEquippedItem_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetLoadoutSlotType_SlotType = CallFunc_GetLoadoutSlotType_SlotType;
	Parms.CallFunc_UnequipEquippedItem_ReturnValue_1 = CallFunc_UnequipEquippedItem_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetItemTags_Tags = CallFunc_GetItemTags_Tags;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetSlotByType_ReturnValue = CallFunc_GetSlotByType_ReturnValue;
	Parms.CallFunc_GetItemTags_Tags_1 = CallFunc_GetItemTags_Tags_1;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.GetItemEquippedInSlot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInSlot_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

class AEquippableItem* UBP_AILoadoutComponentBase_C::GetItemEquippedInSlot(struct FGameplayTag& SlotTag, class AEquippableItem* CallFunc_GetItemInSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "GetItemEquippedInSlot");

	Params::UBP_AILoadoutComponentBase_C_GetItemEquippedInSlot_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.CallFunc_GetItemInSlot_ReturnValue = CallFunc_GetItemInSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.OnLoadoutUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLoadoutSlot>        CallFunc_GetLoadoutSlots_LoadoutSlots                            (ReferenceParm)
// struct FLoadoutSlot                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::OnLoadoutUpdated(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FLoadoutSlot>& CallFunc_GetLoadoutSlots_LoadoutSlots, const struct FLoadoutSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "OnLoadoutUpdated");

	Params::UBP_AILoadoutComponentBase_C_OnLoadoutUpdated_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLoadoutSlots_LoadoutSlots = CallFunc_GetLoadoutSlots_LoadoutSlots;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.ClearInventory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RemoveAllItems_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveAllItems_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::ClearInventory(class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_RemoveAllItems_self_CastInput, bool CallFunc_RemoveAllItems_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "ClearInventory");

	Params::UBP_AILoadoutComponentBase_C_ClearInventory_Params Parms{};

	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.CallFunc_RemoveAllItems_self_CastInput = CallFunc_RemoveAllItems_self_CastInput;
	Parms.CallFunc_RemoveAllItems_ReturnValue = CallFunc_RemoveAllItems_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.TryUnequipItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               RemoveFromInventory                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LSlotTag                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInSlot_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemEquipmentSlotTag_bSuccess                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag                (NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInstanceID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::TryUnequipItem(struct FInventoryEntry& Item, bool RemoveFromInventory, const struct FGameplayTag& LSlotTag, bool CallFunc_UnequipEquippedItem_ReturnValue, class AEquippableItem* CallFunc_GetItemInSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue, const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_UnequipEquippedItem_ReturnValue_1, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "TryUnequipItem");

	Params::UBP_AILoadoutComponentBase_C_TryUnequipItem_Params Parms{};

	Parms.Item = Item;
	Parms.RemoveFromInventory = RemoveFromInventory;
	Parms.LSlotTag = LSlotTag;
	Parms.CallFunc_UnequipEquippedItem_ReturnValue = CallFunc_UnequipEquippedItem_ReturnValue;
	Parms.CallFunc_GetItemInSlot_ReturnValue = CallFunc_GetItemInSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemEquipmentSlotTag_bSuccess = CallFunc_GetItemEquipmentSlotTag_bSuccess;
	Parms.CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag = CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue = CallFunc_EqualEqual_FItemDataReference_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_UnequipEquippedItem_ReturnValue_1 = CallFunc_UnequipEquippedItem_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items = K2Node_DynamicCast_AsBPI_Equipped_Items;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItem_Weapon = CallFunc_GetItem_Weapon;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInstanceID_ReturnValue = CallFunc_GetInstanceID_ReturnValue;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.IsInitialized
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialized_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::IsInitialized(bool CallFunc_IsInitialized_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "IsInitialized");

	Params::UBP_AILoadoutComponentBase_C_IsInitialized_Params Parms{};

	Parms.CallFunc_IsInitialized_ReturnValue = CallFunc_IsInitialized_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.PrintComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ENWXLogLevel            NWXLogLevel                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELogCategory            LogCategory                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ObjectToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_ObjectToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::PrintComponent(const class FString& Message, enum class ENWXLogLevel NWXLogLevel, enum class ELogCategory LogCategory, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, const class FString& CallFunc_Conv_ObjectToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "PrintComponent");

	Params::UBP_AILoadoutComponentBase_C_PrintComponent_Params Parms{};

	Parms.Message = Message;
	Parms.NWXLogLevel = NWXLogLevel;
	Parms.LogCategory = LogCategory;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_ObjectToString_ReturnValue = CallFunc_Conv_ObjectToString_ReturnValue;
	Parms.CallFunc_Conv_ObjectToString_ReturnValue_1 = CallFunc_Conv_ObjectToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.InventoryItemRemoved
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::InventoryItemRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "InventoryItemRemoved");

	Params::UBP_AILoadoutComponentBase_C_InventoryItemRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.InventoryItemAdded
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LQuantity                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             LItem                                                            (Edit, BlueprintVisible)
// TScriptInterface<class IItemContainer>LSource                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::InventoryItemAdded(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, int32 LQuantity, const struct FInventoryEntry& LItem, TScriptInterface<class IItemContainer> LSource, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "InventoryItemAdded");

	Params::UBP_AILoadoutComponentBase_C_InventoryItemAdded_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.LQuantity = LQuantity;
	Parms.LItem = LItem;
	Parms.LSource = LSource;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.WithdrawItemFromContainerByTag
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>ItemContainer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             LEntryToAdd                                                      (Edit, BlueprintVisible)
// struct FInventoryEntry             LEntryToUpdate                                                   (Edit, BlueprintVisible)
// struct FGameplayTag                LGameplayTag                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>LItemContainer                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipItemByInstanceID_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances_1                             (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SplitItemEntry_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_SplitItemEntry_OriginalEntry                            (None)
// struct FInventoryEntry             CallFunc_SplitItemEntry_NewEntry                                 (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTraitsFromEntry_Traits                           (None)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::WithdrawItemFromContainerByTag(TScriptInterface<class IItemContainer>& ItemContainer, struct FGameplayTag& GameplayTag, const struct FInventoryEntry& LEntryToAdd, const struct FInventoryEntry& LEntryToUpdate, const struct FGameplayTag& LGameplayTag, TScriptInterface<class IItemContainer> LItemContainer, int32 Temp_int_Array_Index_Variable, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EquipItemByInstanceID_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount_1, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances_1, bool CallFunc_AddItem_ReturnValue_1, bool CallFunc_SplitItemEntry_Success, const struct FInventoryEntry& CallFunc_SplitItemEntry_OriginalEntry, const struct FInventoryEntry& CallFunc_SplitItemEntry_NewEntry, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_RemoveItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTraitsFromEntry_Traits, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "WithdrawItemFromContainerByTag");

	Params::UBP_AILoadoutComponentBase_C_WithdrawItemFromContainerByTag_Params Parms{};

	Parms.ItemContainer = ItemContainer;
	Parms.GameplayTag = GameplayTag;
	Parms.LEntryToAdd = LEntryToAdd;
	Parms.LEntryToUpdate = LEntryToUpdate;
	Parms.LGameplayTag = LGameplayTag;
	Parms.LItemContainer = LItemContainer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EquipItemByInstanceID_ReturnValue = CallFunc_EquipItemByInstanceID_ReturnValue;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount_1 = CallFunc_AddItem_Amount_1;
	Parms.CallFunc_AddItem_ModifiedInstances_1 = CallFunc_AddItem_ModifiedInstances_1;
	Parms.CallFunc_AddItem_ReturnValue_1 = CallFunc_AddItem_ReturnValue_1;
	Parms.CallFunc_SplitItemEntry_Success = CallFunc_SplitItemEntry_Success;
	Parms.CallFunc_SplitItemEntry_OriginalEntry = CallFunc_SplitItemEntry_OriginalEntry;
	Parms.CallFunc_SplitItemEntry_NewEntry = CallFunc_SplitItemEntry_NewEntry;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemTraitsFromEntry_Traits = CallFunc_GetItemTraitsFromEntry_Traits;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.TransferBetweenWorldItemContainerActors
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               TransferToOtherActor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             LEntryToAdd                                                      (Edit, BlueprintVisible)
// struct FInventoryEntry             LEntryToUpdate                                                   (Edit, BlueprintVisible)
// struct FInventoryEntry             LEntry                                                           (Edit, BlueprintVisible)
// class UInWorldItemContainerComponent*LDestinationInventory                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*LSourceInventory                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             LItem                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LSourceActor                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LDestinationActor                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RemoveItem_self_CastInput                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SplitItemEntry_Success                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_SplitItemEntry_OriginalEntry                            (None)
// struct FInventoryEntry             CallFunc_SplitItemEntry_NewEntry                                 (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// class UBP_AILoadoutComponentBase_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_AILoadoutComponentBase_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInstanceID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances_1                             (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDynamicTypedStructs        Temp_struct_Variable                                             (ConstParm)
// class UInWorldItemContainerComponent*CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetComponentByClass_ReturnValue_3                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::TransferBetweenWorldItemContainerActors(bool TransferToOtherActor, class AActor* OtherActor, class AEquippableItem* Item, const struct FInventoryEntry& LEntryToAdd, const struct FInventoryEntry& LEntryToUpdate, const struct FInventoryEntry& LEntry, class UInWorldItemContainerComponent* LDestinationInventory, class UInWorldItemContainerComponent* LSourceInventory, class AEquippableItem* LItem, class AActor* LSourceActor, class AActor* LDestinationActor, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_RemoveItem_self_CastInput, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_SplitItemEntry_Success, const struct FInventoryEntry& CallFunc_SplitItemEntry_OriginalEntry, const struct FInventoryEntry& CallFunc_SplitItemEntry_NewEntry, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, class UBP_AILoadoutComponentBase_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_AILoadoutComponentBase_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput_1, int32 CallFunc_AddItem_Amount_1, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances_1, bool CallFunc_AddItem_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetItem_self_CastInput, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue, const struct FDynamicTypedStructs& Temp_struct_Variable, class UInWorldItemContainerComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UInWorldItemContainerComponent* CallFunc_GetComponentByClass_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_UnequipEquippedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "TransferBetweenWorldItemContainerActors");

	Params::UBP_AILoadoutComponentBase_C_TransferBetweenWorldItemContainerActors_Params Parms{};

	Parms.TransferToOtherActor = TransferToOtherActor;
	Parms.OtherActor = OtherActor;
	Parms.Item = Item;
	Parms.LEntryToAdd = LEntryToAdd;
	Parms.LEntryToUpdate = LEntryToUpdate;
	Parms.LEntry = LEntry;
	Parms.LDestinationInventory = LDestinationInventory;
	Parms.LSourceInventory = LSourceInventory;
	Parms.LItem = LItem;
	Parms.LSourceActor = LSourceActor;
	Parms.LDestinationActor = LDestinationActor;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_RemoveItem_self_CastInput = CallFunc_RemoveItem_self_CastInput;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_SplitItemEntry_Success = CallFunc_SplitItemEntry_Success;
	Parms.CallFunc_SplitItemEntry_OriginalEntry = CallFunc_SplitItemEntry_OriginalEntry;
	Parms.CallFunc_SplitItemEntry_NewEntry = CallFunc_SplitItemEntry_NewEntry;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInstanceID_ReturnValue = CallFunc_GetInstanceID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_AddItem_self_CastInput_1 = CallFunc_AddItem_self_CastInput_1;
	Parms.CallFunc_AddItem_Amount_1 = CallFunc_AddItem_Amount_1;
	Parms.CallFunc_AddItem_ModifiedInstances_1 = CallFunc_AddItem_ModifiedInstances_1;
	Parms.CallFunc_AddItem_ReturnValue_1 = CallFunc_AddItem_ReturnValue_1;
	Parms.CallFunc_GetItem_self_CastInput = CallFunc_GetItem_self_CastInput;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_3 = CallFunc_GetComponentByClass_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_UnequipEquippedItem_ReturnValue = CallFunc_UnequipEquippedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.AddItemAndEquipByEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGuid                       InstanceID                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipItemByInstanceID_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue_2                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_ContainerHasEquivalentItem_Container_CastInput          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerHasEquivalentItem_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_ContainerHasEquivalentItem_MatchingGuid                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::AddItemAndEquipByEntry(struct FInventoryEntry& Entry, const struct FGuid& InstanceID, bool CallFunc_EquipItemByInstanceID_ReturnValue, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_GetItem_self_CastInput, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue_2, TScriptInterface<class IItemContainer> CallFunc_ContainerHasEquivalentItem_Container_CastInput, bool CallFunc_ContainerHasEquivalentItem_ReturnValue, const struct FGuid& CallFunc_ContainerHasEquivalentItem_MatchingGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "AddItemAndEquipByEntry");

	Params::UBP_AILoadoutComponentBase_C_AddItemAndEquipByEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.InstanceID = InstanceID;
	Parms.CallFunc_EquipItemByInstanceID_ReturnValue = CallFunc_EquipItemByInstanceID_ReturnValue;
	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.CallFunc_GetAIInventory_ReturnValue_1 = CallFunc_GetAIInventory_ReturnValue_1;
	Parms.CallFunc_GetItem_self_CastInput = CallFunc_GetItem_self_CastInput;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_GetAIInventory_ReturnValue_2 = CallFunc_GetAIInventory_ReturnValue_2;
	Parms.CallFunc_ContainerHasEquivalentItem_Container_CastInput = CallFunc_ContainerHasEquivalentItem_Container_CastInput;
	Parms.CallFunc_ContainerHasEquivalentItem_ReturnValue = CallFunc_ContainerHasEquivalentItem_ReturnValue;
	Parms.CallFunc_ContainerHasEquivalentItem_MatchingGuid = CallFunc_ContainerHasEquivalentItem_MatchingGuid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.EquipItemByItemID
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LItemId                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetAllItems_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetAllItems_Entries                                     (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipItemByInstanceID_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FItemDataReference_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::EquipItemByItemID(struct FItemDataReference& ItemId, const struct FItemDataReference& LItemId, int32 Temp_int_Array_Index_Variable, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetAllItems_self_CastInput, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EquipItemByInstanceID_ReturnValue, bool CallFunc_EqualEqual_FItemDataReference_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "EquipItemByItemID");

	Params::UBP_AILoadoutComponentBase_C_EquipItemByItemID_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.LItemId = LItemId;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.CallFunc_GetAllItems_self_CastInput = CallFunc_GetAllItems_self_CastInput;
	Parms.CallFunc_GetAllItems_Entries = CallFunc_GetAllItems_Entries;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EquipItemByInstanceID_ReturnValue = CallFunc_EquipItemByInstanceID_ReturnValue;
	Parms.CallFunc_EqualEqual_FItemDataReference_ReturnValue = CallFunc_EqualEqual_FItemDataReference_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.CreateAndEquipItemByItemID
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemReference                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// struct FDynamicTypedStructs        InstancedData                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FInventoryEntry             LItemEntry                                                       (Edit, BlueprintVisible)
// struct FDataTableRowHandle         LItemId                                                          (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_AddItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItem_Amount                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_AddItem_ModifiedInstances                               (ReferenceParm)
// bool                               CallFunc_AddItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UItemInstanceData*>   Temp_object_Variable                                             (ConstParm, ReferenceParm)
// bool                               CallFunc_EquipItemByInstanceID_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_CreateNewItemEntry_NewEntry                             (None)
// enum class EGetResult              CallFunc_CreateNewItemEntry_OutBranch                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::CreateAndEquipItemByItemID(struct FItemDataReference& ItemReference, struct FDynamicTypedStructs& InstancedData, const struct FInventoryEntry& LItemEntry, const struct FDataTableRowHandle& LItemId, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_AddItem_self_CastInput, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, TArray<class UItemInstanceData*>& Temp_object_Variable, bool CallFunc_EquipItemByInstanceID_ReturnValue, const struct FInventoryEntry& CallFunc_CreateNewItemEntry_NewEntry, enum class EGetResult CallFunc_CreateNewItemEntry_OutBranch, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "CreateAndEquipItemByItemID");

	Params::UBP_AILoadoutComponentBase_C_CreateAndEquipItemByItemID_Params Parms{};

	Parms.ItemReference = ItemReference;
	Parms.InstancedData = InstancedData;
	Parms.LItemEntry = LItemEntry;
	Parms.LItemId = LItemId;
	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddItem_self_CastInput = CallFunc_AddItem_self_CastInput;
	Parms.CallFunc_AddItem_Amount = CallFunc_AddItem_Amount;
	Parms.CallFunc_AddItem_ModifiedInstances = CallFunc_AddItem_ModifiedInstances;
	Parms.CallFunc_AddItem_ReturnValue = CallFunc_AddItem_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_EquipItemByInstanceID_ReturnValue = CallFunc_EquipItemByInstanceID_ReturnValue;
	Parms.CallFunc_CreateNewItemEntry_NewEntry = CallFunc_CreateNewItemEntry_NewEntry;
	Parms.CallFunc_CreateNewItemEntry_OutBranch = CallFunc_CreateNewItemEntry_OutBranch;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.EquipItemByEntry
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       LCompanionComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_TutorialComponent_C*     LTutorialComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                LPlayerState                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LItemId                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FGameplayTag                LEquipmentSlotTag                                                (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LEquippedSlot                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    LSlotItem                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UBP_TutorialComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_Tags                                        (None)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAICompanionComponent*       CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetItemTags_Tags_1                                      (None)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemEquipmentSlotTag_bSuccess                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnequipEquippedItem_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerStateFromId_PlayerState                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GrantItemToLoadout_OutEquippedSlot                      (NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GrantItemToLoadout_OutGrantedItem                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GrantItemToLoadout_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::EquipItemByEntry(struct FInventoryEntry& Entry, class UAICompanionComponent* LCompanionComponent, class UBP_TutorialComponent_C* LTutorialComponent, class APlayerState* LPlayerState, const struct FItemDataReference& LItemId, const struct FGameplayTag& LEquipmentSlotTag, const struct FGameplayTag& LEquippedSlot, class ABP_EquippableItemBase_C* LSlotItem, class UBP_TutorialComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags, bool CallFunc_HasTag_ReturnValue, class UAICompanionComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_Tags_1, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GetItemEquipmentSlotTag_bSuccess, const struct FGameplayTag& CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_UnequipEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, const struct FGameplayTag& CallFunc_GrantItemToLoadout_OutEquippedSlot, class AEquippableItem* CallFunc_GrantItemToLoadout_OutGrantedItem, bool CallFunc_GrantItemToLoadout_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "EquipItemByEntry");

	Params::UBP_AILoadoutComponentBase_C_EquipItemByEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.LCompanionComponent = LCompanionComponent;
	Parms.LTutorialComponent = LTutorialComponent;
	Parms.LPlayerState = LPlayerState;
	Parms.LItemId = LItemId;
	Parms.LEquipmentSlotTag = LEquipmentSlotTag;
	Parms.LEquippedSlot = LEquippedSlot;
	Parms.LSlotItem = LSlotItem;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetItemTags_Tags = CallFunc_GetItemTags_Tags;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetItemTags_Tags_1 = CallFunc_GetItemTags_Tags_1;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetItemEquipmentSlotTag_bSuccess = CallFunc_GetItemEquipmentSlotTag_bSuccess;
	Parms.CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag = CallFunc_GetItemEquipmentSlotTag_EquipmentSlotTag;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_UnequipEquippedItem_ReturnValue = CallFunc_UnequipEquippedItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetPlayerStateFromId_PlayerState = CallFunc_GetPlayerStateFromId_PlayerState;
	Parms.CallFunc_GrantItemToLoadout_OutEquippedSlot = CallFunc_GrantItemToLoadout_OutEquippedSlot;
	Parms.CallFunc_GrantItemToLoadout_OutGrantedItem = CallFunc_GrantItemToLoadout_OutGrantedItem;
	Parms.CallFunc_GrantItemToLoadout_ReturnValue = CallFunc_GrantItemToLoadout_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.UnequipEquippedItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ClearInventory                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                SlotTag                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LUseSlotTag                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LClearInventory                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LOwner                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             LItem                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          CallFunc_GetItemID_OutItemReference                              (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInstanceID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RemoveItem_self_CastInput                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInSlot_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_EquippedItems_C>K2Node_DynamicCast_AsBPI_Equipped_Items                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItem_Weapon                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClearSlotWithItemID_OutSuccess                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_ClearSlotWithItemID_OutSlotItem                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_ClearSlotWithItemID_OutInstanceID                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::UnequipEquippedItem(bool ClearInventory, struct FGameplayTag& SlotTag, bool LUseSlotTag, bool LClearInventory, class AActor* LOwner, class AEquippableItem* LItem, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_IsValid_ReturnValue_1, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_RemoveItem_self_CastInput, bool CallFunc_RemoveItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AEquippableItem* CallFunc_GetItemInSlot_ReturnValue, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, class AEquippableItem* CallFunc_GetItem_Weapon, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ClearSlotWithItemID_OutSuccess, class AEquippableItem* CallFunc_ClearSlotWithItemID_OutSlotItem, const struct FGuid& CallFunc_ClearSlotWithItemID_OutInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "UnequipEquippedItem");

	Params::UBP_AILoadoutComponentBase_C_UnequipEquippedItem_Params Parms{};

	Parms.ClearInventory = ClearInventory;
	Parms.SlotTag = SlotTag;
	Parms.LUseSlotTag = LUseSlotTag;
	Parms.LClearInventory = LClearInventory;
	Parms.LOwner = LOwner;
	Parms.LItem = LItem;
	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemID_OutItemReference = CallFunc_GetItemID_OutItemReference;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInstanceID_ReturnValue = CallFunc_GetInstanceID_ReturnValue;
	Parms.CallFunc_RemoveItem_self_CastInput = CallFunc_RemoveItem_self_CastInput;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetItemInSlot_ReturnValue = CallFunc_GetItemInSlot_ReturnValue;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Equipped_Items = K2Node_DynamicCast_AsBPI_Equipped_Items;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetItem_Weapon = CallFunc_GetItem_Weapon;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_ClearSlotWithItemID_OutSuccess = CallFunc_ClearSlotWithItemID_OutSuccess;
	Parms.CallFunc_ClearSlotWithItemID_OutSlotItem = CallFunc_ClearSlotWithItemID_OutSlotItem;
	Parms.CallFunc_ClearSlotWithItemID_OutInstanceID = CallFunc_ClearSlotWithItemID_OutInstanceID;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.ClearSlotWithTag
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LSlotTag                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClearSlotWithTag_OutSuccess                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_ClearSlotWithTag_OutSlotItem                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_ClearSlotWithTag_OutInstanceID                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::ClearSlotWithTag(struct FGameplayTag& SlotTag, const struct FGameplayTag& LSlotTag, bool CallFunc_ClearSlotWithTag_OutSuccess, class AEquippableItem* CallFunc_ClearSlotWithTag_OutSlotItem, const struct FGuid& CallFunc_ClearSlotWithTag_OutInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "ClearSlotWithTag");

	Params::UBP_AILoadoutComponentBase_C_ClearSlotWithTag_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.LSlotTag = LSlotTag;
	Parms.CallFunc_ClearSlotWithTag_OutSuccess = CallFunc_ClearSlotWithTag_OutSuccess;
	Parms.CallFunc_ClearSlotWithTag_OutSlotItem = CallFunc_ClearSlotWithTag_OutSlotItem;
	Parms.CallFunc_ClearSlotWithTag_OutInstanceID = CallFunc_ClearSlotWithTag_OutInstanceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.EquipItemByInstanceID
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       InstanceID                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetItem_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetItem_Entry                                           (None)
// bool                               CallFunc_GetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EquipItemByEntry_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::EquipItemByInstanceID(struct FGuid& InstanceID, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetItem_self_CastInput, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue, bool CallFunc_EquipItemByEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "EquipItemByInstanceID");

	Params::UBP_AILoadoutComponentBase_C_EquipItemByInstanceID_Params Parms{};

	Parms.InstanceID = InstanceID;
	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.CallFunc_GetItem_self_CastInput = CallFunc_GetItem_self_CastInput;
	Parms.CallFunc_GetItem_Entry = CallFunc_GetItem_Entry;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_EquipItemByEntry_ReturnValue = CallFunc_EquipItemByEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.SpawnLoadoutItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                SlotTag                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             OutGrantedItem                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    LItem                                                            (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LOwner                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       LItemGUID                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LItemId                                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInventoryEntry             LItemEntry                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    CallFunc_CreateEquippableItem_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateEquippableItem_bSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_AILoadoutComponentBase_C::SpawnLoadoutItem(struct FInventoryEntry& ItemEntry, struct FGameplayTag& SlotTag, class AEquippableItem** OutGrantedItem, class ABP_EquippableItemBase_C* LItem, class AActor* LOwner, const struct FGuid& LItemGUID, const struct FItemDataReference& LItemId, const struct FInventoryEntry& LItemEntry, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class ABP_EquippableItemBase_C* CallFunc_CreateEquippableItem_ReturnValue, bool CallFunc_CreateEquippableItem_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "SpawnLoadoutItem");

	Params::UBP_AILoadoutComponentBase_C_SpawnLoadoutItem_Params Parms{};

	Parms.ItemEntry = ItemEntry;
	Parms.SlotTag = SlotTag;
	Parms.LItem = LItem;
	Parms.LOwner = LOwner;
	Parms.LItemGUID = LItemGUID;
	Parms.LItemId = LItemId;
	Parms.LItemEntry = LItemEntry;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_CreateEquippableItem_ReturnValue = CallFunc_CreateEquippableItem_ReturnValue;
	Parms.CallFunc_CreateEquippableItem_bSuccess = CallFunc_CreateEquippableItem_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OutGrantedItem != nullptr)
		*OutGrantedItem = Parms.OutGrantedItem;

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.GrantItemToLoadout
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                SlotTag                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                OutEquippedSlot                                                  (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             OutGrantedItem                                                   (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLoadoutSlot                LLoadoutSlot                                                     (Edit, BlueprintVisible)
// int32                              LBestSlotIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                LDestSlotTag                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             LLoadout_Item                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          LItem_ID                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInstanceID_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CharacterCustomization_Component_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAttachSocket_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetRootMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetItemIdDebugString_ReturnValue_1                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInstanceID_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          K2Node_DynamicCast_AsBP_Creature_Base                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_SpawnLoadoutItem_OutGrantedItem                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SpawnLoadoutItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PutItemInSlot_OutSuccess                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_PutItemInSlot_OutDestinationSlotTag                     (NoDestructor, HasGetValueTypeHash)
// struct FLoadoutSlot                CallFunc_PutItemInSlot_OutLoadoutSlot                            (None)

bool UBP_AILoadoutComponentBase_C::GrantItemToLoadout(struct FGameplayTag& SlotTag, struct FInventoryEntry& ItemEntry, struct FGameplayTag* OutEquippedSlot, class AEquippableItem** OutGrantedItem, const struct FLoadoutSlot& LLoadoutSlot, int32 LBestSlotIndex, const struct FGameplayTag& LDestSlotTag, class AEquippableItem* LLoadout_Item, const struct FItemDataReference& LItem_ID, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_CharacterCustomization_Component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_GetAttachSocket_ReturnValue, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetItemIdDebugString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FGuid& CallFunc_GetInstanceID_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue, class AEquippableItem* CallFunc_SpawnLoadoutItem_OutGrantedItem, bool CallFunc_SpawnLoadoutItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_PutItemInSlot_OutSuccess, const struct FGameplayTag& CallFunc_PutItemInSlot_OutDestinationSlotTag, const struct FLoadoutSlot& CallFunc_PutItemInSlot_OutLoadoutSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "GrantItemToLoadout");

	Params::UBP_AILoadoutComponentBase_C_GrantItemToLoadout_Params Parms{};

	Parms.SlotTag = SlotTag;
	Parms.ItemEntry = ItemEntry;
	Parms.LLoadoutSlot = LLoadoutSlot;
	Parms.LBestSlotIndex = LBestSlotIndex;
	Parms.LDestSlotTag = LDestSlotTag;
	Parms.LLoadout_Item = LLoadout_Item;
	Parms.LItem_ID = LItem_ID;
	Parms.CallFunc_GetInstanceID_ReturnValue = CallFunc_GetInstanceID_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAttachSocket_ReturnValue = CallFunc_GetAttachSocket_ReturnValue;
	Parms.CallFunc_GetRootMesh_ReturnValue = CallFunc_GetRootMesh_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue = CallFunc_GetItemIdDebugString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetItemIdDebugString_ReturnValue_1 = CallFunc_GetItemIdDebugString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetInstanceID_ReturnValue_1 = CallFunc_GetInstanceID_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Base = K2Node_DynamicCast_AsBP_Creature_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_SpawnLoadoutItem_OutGrantedItem = CallFunc_SpawnLoadoutItem_OutGrantedItem;
	Parms.CallFunc_SpawnLoadoutItem_ReturnValue = CallFunc_SpawnLoadoutItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_PutItemInSlot_OutSuccess = CallFunc_PutItemInSlot_OutSuccess;
	Parms.CallFunc_PutItemInSlot_OutDestinationSlotTag = CallFunc_PutItemInSlot_OutDestinationSlotTag;
	Parms.CallFunc_PutItemInSlot_OutLoadoutSlot = CallFunc_PutItemInSlot_OutLoadoutSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (OutEquippedSlot != nullptr)
		*OutEquippedSlot = std::move(Parms.OutEquippedSlot);

	if (OutGrantedItem != nullptr)
		*OutGrantedItem = Parms.OutGrantedItem;

	return Parms.ReturnValue;

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_AILoadoutComponentBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.LoadoutInitialized
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AILoadoutComponentBase_C::LoadoutInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "LoadoutInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.MultiSphereAtActor
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::MultiSphereAtActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "MultiSphereAtActor");

	Params::UBP_AILoadoutComponentBase_C_MultiSphereAtActor_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AILoadoutComponentBase.BP_AILoadoutComponentBase_C.ExecuteUbergraph_BP_AILoadoutComponentBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialized_bInitialized                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULoadoutComponentBase*       CallFunc_GetAILoadout_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadoutComponent_C*      K2Node_DynamicCast_AsBP_Loadout_Component                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInWorldItemContainerComponent*CallFunc_GetAIInventory_ReturnValue_1                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RegisterItemRemovedDelegate_self_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_RegisterItemAddedDelegate_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AILoadoutComponentBase_C::ExecuteUbergraph_BP_AILoadoutComponentBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsInitialized_bInitialized, class AActor* CallFunc_GetOwner_ReturnValue, class ULoadoutComponentBase* CallFunc_GetAILoadout_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UBP_LoadoutComponent_C* K2Node_DynamicCast_AsBP_Loadout_Component, bool K2Node_DynamicCast_bSuccess, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UInWorldItemContainerComponent* CallFunc_GetAIInventory_ReturnValue_1, TScriptInterface<class IItemContainer> CallFunc_RegisterItemRemovedDelegate_self_CastInput, TScriptInterface<class IItemContainer> CallFunc_RegisterItemAddedDelegate_self_CastInput, class AActor* K2Node_CustomEvent_Actor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AILoadoutComponentBase_C", "ExecuteUbergraph_BP_AILoadoutComponentBase");

	Params::UBP_AILoadoutComponentBase_C_ExecuteUbergraph_BP_AILoadoutComponentBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsInitialized_bInitialized = CallFunc_IsInitialized_bInitialized;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAILoadout_ReturnValue = CallFunc_GetAILoadout_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Loadout_Component = K2Node_DynamicCast_AsBP_Loadout_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAIInventory_ReturnValue = CallFunc_GetAIInventory_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetAIInventory_ReturnValue_1 = CallFunc_GetAIInventory_ReturnValue_1;
	Parms.CallFunc_RegisterItemRemovedDelegate_self_CastInput = CallFunc_RegisterItemRemovedDelegate_self_CastInput;
	Parms.CallFunc_RegisterItemAddedDelegate_self_CastInput = CallFunc_RegisterItemAddedDelegate_self_CastInput;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


