#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C
// (None)

class UClass* UBP_ActionableBehaviour_Fishing_Lure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Fishing_Lure_C");

	return Clss;
}


// BP_ActionableBehaviour_Fishing_Lure_C BP_ActionableBehaviour_Fishing_Lure.Default__BP_ActionableBehaviour_Fishing_Lure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Fishing_Lure_C* UBP_ActionableBehaviour_Fishing_Lure_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Fishing_Lure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Fishing_Lure_C*>(UBP_ActionableBehaviour_Fishing_Lure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.RemoveLure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetAttachmentSlotActor_Inventory                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAttachmentSlotActor_Slot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetAttachmentSlotActor_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Fishing_Lure_C::RemoveLure(class AActor* CallFunc_GetOwner_ReturnValue, class UInventory* CallFunc_GetAttachmentSlotActor_Inventory, int32 CallFunc_GetAttachmentSlotActor_Slot, enum class EDataValid CallFunc_GetAttachmentSlotActor_Paths, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemData& CallFunc_RemoveItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "RemoveLure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_RemoveLure_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAttachmentSlotActor_Inventory = CallFunc_GetAttachmentSlotActor_Inventory;
	Parms.CallFunc_GetAttachmentSlotActor_Slot = CallFunc_GetAttachmentSlotActor_Slot;
	Parms.CallFunc_GetAttachmentSlotActor_Paths = CallFunc_GetAttachmentSlotActor_Paths;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.QuickReel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTraitBehaviour*>     CallFunc_GetBehaviours_ReturnValue                               (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTraitBehaviour*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionableBehaviour_Fishing_Rod_C*K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Fishing_Lure_C::QuickReel(enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UTraitBehaviour*>& CallFunc_GetBehaviours_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UTraitBehaviour* CallFunc_Array_Get_Item, class UBP_ActionableBehaviour_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "QuickReel");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_QuickReel_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetBehaviours_ReturnValue = CallFunc_GetBehaviours_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod = K2Node_DynamicCast_AsBP_Actionable_Behaviour_Fishing_Rod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.SetLure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFindItemSlotInfo>   CallFunc_FindItems_ReturnValue                                   (ReferenceParm, ContainsInstancedReference)
// struct FFindItemSlotInfo           CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetAttachmentSlotActor_Inventory                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAttachmentSlotActor_Slot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetAttachmentSlotActor_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ManuallyForcePlaceItem_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Fishing_Lure_C::SetLure(class UInventory* Inventory, int32 Slot, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemData& CallFunc_RemoveItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FFindItemSlotInfo>& CallFunc_FindItems_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UInventory* CallFunc_GetAttachmentSlotActor_Inventory, int32 CallFunc_GetAttachmentSlotActor_Slot, enum class EDataValid CallFunc_GetAttachmentSlotActor_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ManuallyForcePlaceItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "SetLure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_SetLure_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Slot = Slot;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FindItems_ReturnValue = CallFunc_FindItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAttachmentSlotActor_Inventory = CallFunc_GetAttachmentSlotActor_Inventory;
	Parms.CallFunc_GetAttachmentSlotActor_Slot = CallFunc_GetAttachmentSlotActor_Slot;
	Parms.CallFunc_GetAttachmentSlotActor_Paths = CallFunc_GetAttachmentSlotActor_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ManuallyForcePlaceItem_ReturnValue = CallFunc_ManuallyForcePlaceItem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.GetLure
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   LureItem                                                         (Parm, OutParm, ContainsInstancedReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetAttachmentSlotActor_Inventory                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAttachmentSlotActor_Slot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetAttachmentSlotActor_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Fishing_Lure_C::GetLure(struct FItemData* LureItem, class AActor* CallFunc_GetOwner_ReturnValue, class UInventory* CallFunc_GetAttachmentSlotActor_Inventory, int32 CallFunc_GetAttachmentSlotActor_Slot, enum class EDataValid CallFunc_GetAttachmentSlotActor_Paths, const struct FItemData& CallFunc_GetItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "GetLure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_GetLure_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetAttachmentSlotActor_Inventory = CallFunc_GetAttachmentSlotActor_Inventory;
	Parms.CallFunc_GetAttachmentSlotActor_Slot = CallFunc_GetAttachmentSlotActor_Slot;
	Parms.CallFunc_GetAttachmentSlotActor_Paths = CallFunc_GetAttachmentSlotActor_Paths;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (LureItem != nullptr)
		*LureItem = std::move(Parms.LureItem);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.GetInventoryFromName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Inventory_Name                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

class UInventory* UBP_ActionableBehaviour_Fishing_Lure_C::GetInventoryFromName(class FName Inventory_Name, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "GetInventoryFromName");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_GetInventoryFromName_Params Parms{};

	Parms.Inventory_Name = Inventory_Name;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.ContextMenu_SetLure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemIdentifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemPayload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventoryFromName_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Fishing_Lure_C::ContextMenu_SetLure(class FName ItemIdentifier, int32 ItemPayload, class UInventory* CallFunc_GetInventoryFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "ContextMenu_SetLure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_ContextMenu_SetLure_Params Parms{};

	Parms.ItemIdentifier = ItemIdentifier;
	Parms.ItemPayload = ItemPayload;
	Parms.CallFunc_GetInventoryFromName_ReturnValue = CallFunc_GetInventoryFromName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.Get Name for Inventory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)

class FName UBP_ActionableBehaviour_Fishing_Lure_C::Get_Name_for_Inventory(class UInventory* Inventory, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "Get Name for Inventory");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_Get_Name_for_Inventory_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.ContextMenu_RemoveLure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemIdentifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemPayload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Fishing_Lure_C::ContextMenu_RemoveLure(class FName ItemIdentifier, int32 ItemPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "ContextMenu_RemoveLure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_ContextMenu_RemoveLure_Params Parms{};

	Parms.ItemIdentifier = ItemIdentifier;
	Parms.ItemPayload = ItemPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.ContextMenu_OpenForLure
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AsRadial                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Opened                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData                            (ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             Temp_object_Variable                                             (ReferenceParm, ContainsInstancedReference)
// class UInventory*                  CallFunc_GetInventoryContainer_Inventory                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetInventoryContainer_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SkeletalItem_Fishing_Rod_C*K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventoryContainerActor_Inventory                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetInventoryContainerActor_Paths                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFindAllStacksResult        CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// class UContextMenuWidget*          CallFunc_ShowAsRadialMenu_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableData_ItemableData_1                          (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Get_Name_for_Inventory_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UContextMenuWidget*          CallFunc_ShowAsContextMenu_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCustomItem_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AContextMenuFactory*         CallFunc_CreateContextMenu_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFindAllStacksResult>CallFunc_FindAllUniqueStacks_ReturnValue                         (ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFindAllStacksResult>CallFunc_FindAllUniqueStacks_ReturnValue_1                       (ReferenceParm, ContainsInstancedReference)
// class UUMG_RadialMenu_ImprovedItemIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFindAllStacksResult>CallFunc_CombineFindAllStackResults_ReturnValue                  (ReferenceParm, ContainsInstancedReference)
// TArray<struct FFindAllStacksResult>CallFunc_CombineFindAllStackResults_ReturnValue_1                (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference)
// class UInventory*                  Temp_wildcard_Variable                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData_1                          (ContainsInstancedReference)
// TArray<struct FFindItemSlotInfo>   CallFunc_GetItems_ReturnValue                                    (ReferenceParm, ContainsInstancedReference)
// struct FFindItemSlotInfo           CallFunc_Array_Get_Item_2                                        (NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Fishing_Lure_C::ContextMenu_OpenForLure(bool AsRadial, bool* Opened, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TArray<class UWidget*>& Temp_object_Variable, class UInventory* CallFunc_GetInventoryContainer_Inventory, enum class EDataValid CallFunc_GetInventoryContainer_Paths, class ABP_SkeletalItem_Fishing_Rod_C* K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UInventory* CallFunc_GetInventoryContainerActor_Inventory, enum class EDataValid CallFunc_GetInventoryContainerActor_Paths, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemData& CallFunc_GetItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess_1, const struct FFindAllStacksResult& CallFunc_Array_Get_Item_1, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, const struct FItemableData& CallFunc_GetItemableData_ItemableData_1, enum class EDataValid CallFunc_GetItemableData_Paths_1, class FName CallFunc_Get_Name_for_Inventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class UContextMenuWidget* CallFunc_ShowAsContextMenu_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsCustomItem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, TArray<struct FFindAllStacksResult>& CallFunc_FindAllUniqueStacks_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, TArray<struct FFindAllStacksResult>& CallFunc_FindAllUniqueStacks_ReturnValue_1, class UUMG_RadialMenu_ImprovedItemIcon_C* CallFunc_Create_ReturnValue, TArray<struct FFindAllStacksResult>& CallFunc_CombineFindAllStackResults_ReturnValue, TArray<struct FFindAllStacksResult>& CallFunc_CombineFindAllStackResults_ReturnValue_1, TArray<class UWidget*>& K2Node_MakeArray_Array, TArray<class UWidget*>& K2Node_Select_Default, class UInventory* Temp_wildcard_Variable, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData_1, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_3, const struct FItemData& CallFunc_GetItem_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item_1, bool K2Node_DynamicCast_bSuccess_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "ContextMenu_OpenForLure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_ContextMenu_OpenForLure_Params Parms{};

	Parms.AsRadial = AsRadial;
	Parms.K2Node_MakeStruct_ContextMenuItemData = K2Node_MakeStruct_ContextMenuItemData;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetInventoryContainer_Inventory = CallFunc_GetInventoryContainer_Inventory;
	Parms.CallFunc_GetInventoryContainer_Paths = CallFunc_GetInventoryContainer_Paths;
	Parms.K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod = K2Node_DynamicCast_AsBP_Skeletal_Item_Fishing_Rod;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetInventoryContainerActor_Inventory = CallFunc_GetInventoryContainerActor_Inventory;
	Parms.CallFunc_GetInventoryContainerActor_Paths = CallFunc_GetInventoryContainerActor_Paths;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ShowAsRadialMenu_ReturnValue = CallFunc_ShowAsRadialMenu_ReturnValue;
	Parms.CallFunc_GetItemableData_ItemableData_1 = CallFunc_GetItemableData_ItemableData_1;
	Parms.CallFunc_GetItemableData_Paths_1 = CallFunc_GetItemableData_Paths_1;
	Parms.CallFunc_Get_Name_for_Inventory_ReturnValue = CallFunc_Get_Name_for_Inventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_ShowAsContextMenu_ReturnValue = CallFunc_ShowAsContextMenu_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsCustomItem_ReturnValue = CallFunc_IsCustomItem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_CreateContextMenu_ReturnValue = CallFunc_CreateContextMenu_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_FindAllUniqueStacks_ReturnValue = CallFunc_FindAllUniqueStacks_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_FindAllUniqueStacks_ReturnValue_1 = CallFunc_FindAllUniqueStacks_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_CombineFindAllStackResults_ReturnValue = CallFunc_CombineFindAllStackResults_ReturnValue;
	Parms.CallFunc_CombineFindAllStackResults_ReturnValue_1 = CallFunc_CombineFindAllStackResults_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_MakeStruct_ContextMenuItemData_1 = K2Node_MakeStruct_ContextMenuItemData_1;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Item_1 = K2Node_DynamicCast_AsIcarus_Item_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Opened != nullptr)
		*Opened = Parms.Opened;

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.LocalOrServer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Server                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Fishing_Lure_C::LocalOrServer(bool* Local, bool* Server, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "LocalOrServer");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_LocalOrServer_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Local != nullptr)
		*Local = Parms.Local;

	if (Server != nullptr)
		*Server = Parms.Server;

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Fishing_Lure_C::Setup(class AActor* OwningActor, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "Setup");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_Setup_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Fishing_Lure_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "ReceiveTick");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Fishing_Lure_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "PerformAction");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Fishing_Lure_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Fishing_Lure_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.Server_RequestSetLure
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Fishing_Lure_C::Server_RequestSetLure(class UInventory* Inventory, int32 Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "Server_RequestSetLure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_Server_RequestSetLure_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Fishing_Lure.BP_ActionableBehaviour_Fishing_Lure_C.ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Lure
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LocalOrServer_Local                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LocalOrServer_Server                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ContextMenu_OpenForLure_Opened                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ContextMenu_Radial_C*   K2Node_DynamicCast_AsUMG_Context_Menu_Radial                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_slot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Fishing_Lure_C::ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Lure(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_IsValid_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ContextMenu_OpenForLure_Opened, bool CallFunc_IsValid_ReturnValue_1, class UUMG_ContextMenu_Radial_C* K2Node_DynamicCast_AsUMG_Context_Menu_Radial, bool K2Node_DynamicCast_bSuccess_1, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Fishing_Lure_C", "ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Lure");

	Params::UBP_ActionableBehaviour_Fishing_Lure_C_ExecuteUbergraph_BP_ActionableBehaviour_Fishing_Lure_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_LocalOrServer_Local = CallFunc_LocalOrServer_Local;
	Parms.CallFunc_LocalOrServer_Server = CallFunc_LocalOrServer_Server;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ContextMenu_OpenForLure_Opened = CallFunc_ContextMenu_OpenForLure_Opened;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUMG_Context_Menu_Radial = K2Node_DynamicCast_AsUMG_Context_Menu_Radial;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_slot = K2Node_CustomEvent_slot;

	UObject::ProcessEvent(Func, &Parms);

}

}


