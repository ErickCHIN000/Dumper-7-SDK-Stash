#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mount_Base.BP_Mount_Base_C
// (Actor, Pawn)

class UClass* ABP_Mount_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mount_Base_C");

	return Clss;
}


// BP_Mount_Base_C BP_Mount_Base.Default__BP_Mount_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mount_Base_C* ABP_Mount_Base_C::GetDefaultObj()
{
	static class ABP_Mount_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mount_Base_C*>(ABP_Mount_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Mount_Base.BP_Mount_Base_C.IsSlotValidForItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UInventoryComponent*         Inventory                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryIDEnum            InventoryID                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              SlotIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSaddlesEnum                CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSaddlesRowHandle           CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FSaddleData                 CallFunc_GetSaddlesStruct_Saddles                                (None)
// enum class EValid                  CallFunc_GetSaddlesStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetItemTags_ReturnValue                                 (None)
// bool                               CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesAnyTags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Mount_Base_C::IsSlotValidForItem(class UInventoryComponent* Inventory, const struct FInventoryIDEnum& InventoryID, const struct FItemData& Item, int32 SlotIndex, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FSaddlesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSaddlesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FSaddleData& CallFunc_GetSaddlesStruct_Saddles, enum class EValid CallFunc_GetSaddlesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetItemTags_ReturnValue, bool CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "IsSlotValidForItem");

	Params::ABP_Mount_Base_C_IsSlotValidForItem_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.InventoryID = InventoryID;
	Parms.Item = Item;
	Parms.SlotIndex = SlotIndex;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetSaddlesStruct_Saddles = CallFunc_GetSaddlesStruct_Saddles;
	Parms.CallFunc_GetSaddlesStruct_Paths = CallFunc_GetSaddlesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemTags_ReturnValue = CallFunc_GetItemTags_ReturnValue;
	Parms.CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue = CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue;
	Parms.CallFunc_MatchesAnyTags_ReturnValue = CallFunc_MatchesAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetMountCombatBehaviour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountCombatBehaviourStateCombatBehaviour                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::GetMountCombatBehaviour(enum class EMountCombatBehaviourState* CombatBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetMountCombatBehaviour");

	Params::ABP_Mount_Base_C_GetMountCombatBehaviour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CombatBehaviour != nullptr)
		*CombatBehaviour = Parms.CombatBehaviour;

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetMountMovementBehaviour
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountMovementBehaviourStateMovementBehaviour                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::GetMountMovementBehaviour(enum class EMountMovementBehaviourState* MovementBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetMountMovementBehaviour");

	Params::ABP_Mount_Base_C_GetMountMovementBehaviour_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MovementBehaviour != nullptr)
		*MovementBehaviour = Parms.MovementBehaviour;

}


// Function BP_Mount_Base.BP_Mount_Base_C.IsThirdPersonToggleBlocked
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_Mount_Base_C::IsThirdPersonToggleBlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "IsThirdPersonToggleBlocked");

	Params::ABP_Mount_Base_C_IsThirdPersonToggleBlocked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.SynchroniseBlackboardBehaviourState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CombatBehaviourStateKey                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MovementBehaviourStateKey                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::SynchroniseBlackboardBehaviourState(class FName CombatBehaviourStateKey, class FName MovementBehaviourStateKey, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "SynchroniseBlackboardBehaviourState");

	Params::ABP_Mount_Base_C_SynchroniseBlackboardBehaviourState_Params Parms{};

	Parms.CombatBehaviourStateKey = CombatBehaviourStateKey;
	Parms.MovementBehaviourStateKey = MovementBehaviourStateKey;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.CreateCargoDropBag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           CargoItems                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameModeSurvival*     K2Node_DynamicCast_AsIcarus_Game_Mode_Survival                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UInventory*>          K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::CreateCargoDropBag(const TArray<struct FItemData>& CargoItems, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AIcarusGameModeSurvival* K2Node_DynamicCast_AsIcarus_Game_Mode_Survival, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue_3, TArray<class UInventory*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue_1, class UInventory* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "CreateCargoDropBag");

	Params::ABP_Mount_Base_C_CreateCargoDropBag_Params Parms{};

	Parms.CargoItems = CargoItems;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Mode_Survival = K2Node_DynamicCast_AsIcarus_Game_Mode_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_2 = CallFunc_GetInventory_ReturnValue_2;
	Parms.CallFunc_GetInventory_ReturnValue_3 = CallFunc_GetInventory_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.PlayFootstepParticleEffects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECreatureFootstepType   Footstep_Type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepDirectionFootstep_Direction                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     VfxLocation                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepDirectionFootstepDirection                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepType   FootstepType                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraSystem*              Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EPhysicalSurface>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// enum class EPhysicalSurface        CallFunc_GetCurrentSurface_CurrentSurface                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraSystem*              Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_wildcard_Variable_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepType   Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::PlayFootstepParticleEffects(enum class ECreatureFootstepType Footstep_Type, enum class ECreatureFootstepDirection Footstep_Direction, const struct FVector& VfxLocation, enum class ECreatureFootstepDirection FootstepDirection, enum class ECreatureFootstepType FootstepType, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNiagaraSystem* Temp_object_Variable, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<enum class EPhysicalSurface>& K2Node_MakeArray_Array, enum class EPhysicalSurface CallFunc_GetCurrentSurface_CurrentSurface, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class FName Temp_wildcard_Variable, bool K2Node_SwitchEnum_CmpSuccess_2, class FName Temp_wildcard_Variable_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, class UNiagaraSystem* Temp_object_Variable_1, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, float CallFunc_VSize_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_1, class FName Temp_wildcard_Variable_2, enum class ECreatureFootstepType Temp_byte_Variable, class UNiagaraSystem* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "PlayFootstepParticleEffects");

	Params::ABP_Mount_Base_C_PlayFootstepParticleEffects_Params Parms{};

	Parms.Footstep_Type = Footstep_Type;
	Parms.Footstep_Direction = Footstep_Direction;
	Parms.VfxLocation = VfxLocation;
	Parms.FootstepDirection = FootstepDirection;
	Parms.FootstepType = FootstepType;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue_1 = CallFunc_MapRangeClamped_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetCurrentSurface_CurrentSurface = CallFunc_GetCurrentSurface_CurrentSurface;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue_1 = CallFunc_VSize_ReturnValue_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue_2 = CallFunc_MapRangeClamped_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_ReturnValue_3 = CallFunc_MapRangeClamped_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.Temp_wildcard_Variable_2 = Temp_wildcard_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue_1 = CallFunc_SpawnSystemAtLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.UpdateItemOverflowTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::UpdateItemOverflowTransform(const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "UpdateItemOverflowTransform");

	Params::ABP_Mount_Base_C_UpdateItemOverflowTransform_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = CallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ResolveAudioState
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIAudioState           State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBeingRidden_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::ResolveAudioState(enum class EAIAudioState* State, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsBeingRidden_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ResolveAudioState");

	Params::ABP_Mount_Base_C_ResolveAudioState_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsBeingRidden_ReturnValue = CallFunc_IsBeingRidden_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function BP_Mount_Base.BP_Mount_Base_C.CanJumpInternal
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForGameplayTag_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStaminaActionCostsRowHandleCallFunc_MakeLiteralStaminaActionCosts_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPerformStaminaActionRow_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanJumpInternal_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Mount_Base_C::CanJumpInternal(const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UAnimMontage* CallFunc_GetMontageForGameplayTag_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, const struct FStaminaActionCostsRowHandle& CallFunc_MakeLiteralStaminaActionCosts_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CanPerformStaminaActionRow_ReturnValue, bool CallFunc_CanJumpInternal_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "CanJumpInternal");

	Params::ABP_Mount_Base_C_CanJumpInternal_Params Parms{};

	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetMontageForGameplayTag_ReturnValue = CallFunc_GetMontageForGameplayTag_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_MakeLiteralStaminaActionCosts_ReturnValue = CallFunc_MakeLiteralStaminaActionCosts_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CanPerformStaminaActionRow_ReturnValue = CallFunc_CanPerformStaminaActionRow_ReturnValue;
	Parms.CallFunc_CanJumpInternal_ReturnValue = CallFunc_CanJumpInternal_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.TryJump
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Mount_Base_C::TryJump(bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "TryJump");

	Params::ABP_Mount_Base_C_TryJump_Params Parms{};

	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnRep_SaddleData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::OnRep_SaddleData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnRep_SaddleData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.CleanupInstigatorNPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCCharacter*         K2Node_DynamicCast_AsIcarus_NPCCharacter                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::CleanupInstigatorNPC(class APawn* CallFunc_GetInstigator_ReturnValue, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "CleanupInstigatorNPC");

	Params::ABP_Mount_Base_C_CleanupInstigatorNPC_Params Parms{};

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCCharacter = K2Node_DynamicCast_AsIcarus_NPCCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.UpdateAudioState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIAudioState           CallFunc_ResolveAudioState_State                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::UpdateAudioState(enum class EAIAudioState CallFunc_ResolveAudioState_State, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "UpdateAudioState");

	Params::ABP_Mount_Base_C_UpdateAudioState_Params Parms{};

	Parms.CallFunc_ResolveAudioState_State = CallFunc_ResolveAudioState_State;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnRep_CurrentAudioState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::OnRep_CurrentAudioState(bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnRep_CurrentAudioState");

	Params::ABP_Mount_Base_C_OnRep_CurrentAudioState_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetSeatActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASeatBase*                   Seat                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ASeatBase*                   K2Node_DynamicCast_AsSeat_Base                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Mount_Base_C::GetSeatActor(class ASeatBase** Seat, class ASeatBase* K2Node_DynamicCast_AsSeat_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetSeatActor");

	Params::ABP_Mount_Base_C_GetSeatActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsSeat_Base = K2Node_DynamicCast_AsSeat_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Seat != nullptr)
		*Seat = Parms.Seat;

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.TryAttack
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStaminaActionCostsRowHandleCallFunc_MakeLiteralStaminaActionCosts_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPerformStaminaActionRow_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForGameplayTag_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Mount_Base_C::TryAttack(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FStaminaActionCostsRowHandle& CallFunc_MakeLiteralStaminaActionCosts_ReturnValue, bool CallFunc_CanPerformStaminaActionRow_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UAnimMontage* CallFunc_GetMontageForGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "TryAttack");

	Params::ABP_Mount_Base_C_TryAttack_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralStaminaActionCosts_ReturnValue = CallFunc_MakeLiteralStaminaActionCosts_ReturnValue;
	Parms.CallFunc_CanPerformStaminaActionRow_ReturnValue = CallFunc_CanPerformStaminaActionRow_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetMontageForGameplayTag_ReturnValue = CallFunc_GetMontageForGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.IsPointWithinFOV
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DotLimit                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Mount_Base_C::IsPointWithinFOV(const struct FVector& TargetLocation, float DotLimit, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "IsPointWithinFOV");

	Params::ABP_Mount_Base_C_IsPointWithinFOV_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.DotLimit = DotLimit;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.FindNewViewTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPointWithinFOV_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::FindNewViewTarget(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, bool CallFunc_IsPointWithinFOV_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "FindNewViewTarget");

	Params::ABP_Mount_Base_C_FindNewViewTarget_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SphereOverlapActors_OutActors = CallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = CallFunc_SphereOverlapActors_ReturnValue;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_IsPointWithinFOV_ReturnValue = CallFunc_IsPointWithinFOV_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetCurrentAnimationTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_Mount_Base_C::GetCurrentAnimationTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetCurrentAnimationTarget");

	Params::ABP_Mount_Base_C_GetCurrentAnimationTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.GenerateContextMenuItemDataForCombatState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMountCombatBehaviourStateCombatState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        ContextMenuItemData                                              (Parm, OutParm, ContainsInstancedReference)
// enum class EMountCombatBehaviourStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_3                                       (UObjectWrapper, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// enum class EMountCombatBehaviourStateTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData                            (ContainsInstancedReference)

void ABP_Mount_Base_C::GenerateContextMenuItemDataForCombatState(enum class EMountCombatBehaviourState CombatState, struct FContextMenuItemData* ContextMenuItemData, enum class EMountCombatBehaviourState Temp_byte_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, enum class EMountCombatBehaviourState Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, enum class EMountCombatBehaviourState Temp_byte_Variable_2, class FText K2Node_Select_Default_1, class FName Temp_name_Variable, class FName K2Node_Select_Default_2, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GenerateContextMenuItemDataForCombatState");

	Params::ABP_Mount_Base_C_GenerateContextMenuItemDataForCombatState_Params Parms{};

	Parms.CombatState = CombatState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_ContextMenuItemData = K2Node_MakeStruct_ContextMenuItemData;

	UObject::ProcessEvent(Func, &Parms);

	if (ContextMenuItemData != nullptr)
		*ContextMenuItemData = std::move(Parms.ContextMenuItemData);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GenerateContextMenuItemDataForMovementState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMountMovementBehaviourStateMovementState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        ContextMenuItemData                                              (Parm, OutParm, ContainsInstancedReference)
// enum class EMountMovementBehaviourStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_3                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_4                                       (UObjectWrapper, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// enum class EMountMovementBehaviourStateTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        K2Node_MakeStruct_ContextMenuItemData                            (ContainsInstancedReference)

void ABP_Mount_Base_C::GenerateContextMenuItemDataForMovementState(enum class EMountMovementBehaviourState MovementState, struct FContextMenuItemData* ContextMenuItemData, enum class EMountMovementBehaviourState Temp_byte_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_4, enum class EMountMovementBehaviourState Temp_byte_Variable_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, enum class EMountMovementBehaviourState Temp_byte_Variable_2, class FText K2Node_Select_Default_1, class FName Temp_name_Variable, class FName K2Node_Select_Default_2, const struct FContextMenuItemData& K2Node_MakeStruct_ContextMenuItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GenerateContextMenuItemDataForMovementState");

	Params::ABP_Mount_Base_C_GenerateContextMenuItemDataForMovementState_Params Parms{};

	Parms.MovementState = MovementState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.Temp_softobject_Variable_4 = Temp_softobject_Variable_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_ContextMenuItemData = K2Node_MakeStruct_ContextMenuItemData;

	UObject::ProcessEvent(Func, &Parms);

	if (ContextMenuItemData != nullptr)
		*ContextMenuItemData = std::move(Parms.ContextMenuItemData);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetNextToggleCombatState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMountCombatBehaviourStateCombatState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MovementBehaviourStateKey                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateCallFunc_GetDesiredCombatState_MovementState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::GetNextToggleCombatState(enum class EMountCombatBehaviourState* CombatState, class FName MovementBehaviourStateKey, int32 CallFunc_MakeLiteralInt_ReturnValue, enum class EMountCombatBehaviourState CallFunc_GetDesiredCombatState_MovementState, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetNextToggleCombatState");

	Params::ABP_Mount_Base_C_GetNextToggleCombatState_Params Parms{};

	Parms.MovementBehaviourStateKey = MovementBehaviourStateKey;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetDesiredCombatState_MovementState = CallFunc_GetDesiredCombatState_MovementState;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CombatState != nullptr)
		*CombatState = Parms.CombatState;

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetNextToggleMovementState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMountMovementBehaviourStateMovementState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MovementBehaviourStateKey                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateCallFunc_GetDesiredMovementState_MovementState                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::GetNextToggleMovementState(enum class EMountMovementBehaviourState* MovementState, class FName MovementBehaviourStateKey, int32 CallFunc_MakeLiteralInt_ReturnValue, enum class EMountMovementBehaviourState CallFunc_GetDesiredMovementState_MovementState, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetNextToggleMovementState");

	Params::ABP_Mount_Base_C_GetNextToggleMovementState_Params Parms{};

	Parms.MovementBehaviourStateKey = MovementBehaviourStateKey;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetDesiredMovementState_MovementState = CallFunc_GetDesiredMovementState_MovementState;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementState != nullptr)
		*MovementState = Parms.MovementState;

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnContextMenuItemSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemIdentifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemPayload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::OnContextMenuItemSelected(class FName ItemIdentifier, int32 ItemPayload, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 Temp_int_Loop_Counter_Variable, uint8 CallFunc_GetValidValue_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetValidValue_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, TArray<class FName>& K2Node_MakeArray_Array, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FName>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Length_ReturnValue_1, class FName CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnContextMenuItemSelected");

	Params::ABP_Mount_Base_C_OnContextMenuItemSelected_Params Parms{};

	Parms.ItemIdentifier = ItemIdentifier;
	Parms.ItemPayload = ItemPayload;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue_1 = CallFunc_GetNetworkProxyComponent_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component_1 = K2Node_DynamicCast_AsBP_Network_Proxy_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.CreateMenuItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AContextMenuFactory*         ContextMenuFactory                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FContextMenuItemData        ContextMenuItemData                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              ItemIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void ABP_Mount_Base_C::CreateMenuItem(class AContextMenuFactory* ContextMenuFactory, struct FContextMenuItemData& ContextMenuItemData, int32 ItemIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "CreateMenuItem");

	Params::ABP_Mount_Base_C_CreateMenuItem_Params Parms{};

	Parms.ContextMenuFactory = ContextMenuFactory;
	Parms.ContextMenuItemData = ContextMenuItemData;
	Parms.ItemIndex = ItemIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetContextMenuItems
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FContextMenuItemData>MenuItems                                                        (Parm, OutParm, ContainsInstancedReference)
// TArray<struct FContextMenuItemData>Items                                                            (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesMountSupportCombatState_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        CallFunc_GenerateContextMenuItemDataForCombatState_ContextMenuItemData(ContainsInstancedReference)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        CallFunc_GenerateContextMenuItemDataForMovementState_ContextMenuItemData(ContainsInstancedReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMountCombatBehaviourStateCallFunc_GetDesiredCombatState_MovementState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateCallFunc_GetDesiredMovementState_MovementState                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems, const TArray<struct FContextMenuItemData>& Items, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_DoesMountSupportCombatState_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FContextMenuItemData& CallFunc_GenerateContextMenuItemDataForCombatState_ContextMenuItemData, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1, const struct FContextMenuItemData& CallFunc_GenerateContextMenuItemDataForMovementState_ContextMenuItemData, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EMountCombatBehaviourState CallFunc_GetDesiredCombatState_MovementState, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, enum class EMountMovementBehaviourState CallFunc_GetDesiredMovementState_MovementState, int32 CallFunc_MakeLiteralInt_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetContextMenuItems");

	Params::ABP_Mount_Base_C_GetContextMenuItems_Params Parms{};

	Parms.Items = Items;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_DoesMountSupportCombatState_ReturnValue = CallFunc_DoesMountSupportCombatState_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_GenerateContextMenuItemDataForCombatState_ContextMenuItemData = CallFunc_GenerateContextMenuItemDataForCombatState_ContextMenuItemData;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1 = CallFunc_GetEnumeratorValueFromIndex_ReturnValue_1;
	Parms.CallFunc_GenerateContextMenuItemDataForMovementState_ContextMenuItemData = CallFunc_GenerateContextMenuItemDataForMovementState_ContextMenuItemData;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDesiredCombatState_MovementState = CallFunc_GetDesiredCombatState_MovementState;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_2 = CallFunc_NotEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetDesiredMovementState_MovementState = CallFunc_GetDesiredMovementState_MovementState;
	Parms.CallFunc_MakeLiteralInt_ReturnValue_1 = CallFunc_MakeLiteralInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_3 = CallFunc_NotEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (MenuItems != nullptr)
		*MenuItems = std::move(Parms.MenuItems);

}


// Function BP_Mount_Base.BP_Mount_Base_C.CloseRadialMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   ContextMenuIcon                                                  (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::CloseRadialMenu(TSoftObjectPtr<class UTexture2D> ContextMenuIcon, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "CloseRadialMenu");

	Params::ABP_Mount_Base_C_CloseRadialMenu_Params Parms{};

	Parms.ContextMenuIcon = ContextMenuIcon;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OpenRadialBehaviourMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   ContextMenuIcon                                                  (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AContextMenuFactory*         CallFunc_CreateContextMenu_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class UContextMenuWidget*          CallFunc_ShowAsRadialMenu_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// enum class EMountMovementBehaviourStateTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateCallFunc_GetDesiredCombatState_MovementState                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateCallFunc_GetDesiredMovementState_MovementState                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FContextMenuItemData>CallFunc_GetContextMenuItems_MenuItems                           (ReferenceParm, ContainsInstancedReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FContextMenuItemData        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::OpenRadialBehaviourMenu(class AActor* Instigator, TSoftObjectPtr<class UTexture2D> ContextMenuIcon, enum class EMountCombatBehaviourState Temp_byte_Variable, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class FText Temp_text_Variable, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class FText Temp_text_Variable_1, bool CallFunc_IsLocalPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, class FText Temp_text_Variable_2, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, class FText Temp_text_Variable_3, enum class EMountMovementBehaviourState Temp_byte_Variable_1, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EMountCombatBehaviourState CallFunc_GetDesiredCombatState_MovementState, enum class EMountMovementBehaviourState CallFunc_GetDesiredMovementState_MovementState, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FContextMenuItemData>& CallFunc_GetContextMenuItems_MenuItems, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FContextMenuItemData& CallFunc_Array_Get_Item, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OpenRadialBehaviourMenu");

	Params::ABP_Mount_Base_C_OpenRadialBehaviourMenu_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.ContextMenuIcon = ContextMenuIcon;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_CreateContextMenu_ReturnValue = CallFunc_CreateContextMenu_ReturnValue;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_ShowAsRadialMenu_ReturnValue = CallFunc_ShowAsRadialMenu_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDesiredCombatState_MovementState = CallFunc_GetDesiredCombatState_MovementState;
	Parms.CallFunc_GetDesiredMovementState_MovementState = CallFunc_GetDesiredMovementState_MovementState;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetContextMenuItems_MenuItems = CallFunc_GetContextMenuItems_MenuItems;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.InitialiseBehaviourTree
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        BlackboardRef                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBehaviorTreeComponent*      K2Node_DynamicCast_AsBehavior_Tree_Component                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::InitialiseBehaviourTree(class UBlackboardComponent* BlackboardRef, class AController* CallFunc_GetController_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class AAIController* CallFunc_GetAIController_ReturnValue, class UBehaviorTreeComponent* K2Node_DynamicCast_AsBehavior_Tree_Component, bool K2Node_DynamicCast_bSuccess_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "InitialiseBehaviourTree");

	Params::ABP_Mount_Base_C_InitialiseBehaviourTree_Params Parms{};

	Parms.BlackboardRef = BlackboardRef;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBehavior_Tree_Component = K2Node_DynamicCast_AsBehavior_Tree_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetDesiredCombatState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMountCombatBehaviourStateMovementState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CombatBehaviourStateKey                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValueAsEnum_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::GetDesiredCombatState(enum class EMountCombatBehaviourState* MovementState, class FName CombatBehaviourStateKey, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, uint8 CallFunc_GetValueAsEnum_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetDesiredCombatState");

	Params::ABP_Mount_Base_C_GetDesiredCombatState_Params Parms{};

	Parms.CombatBehaviourStateKey = CombatBehaviourStateKey;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsEnum_ReturnValue = CallFunc_GetValueAsEnum_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementState != nullptr)
		*MovementState = Parms.MovementState;

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetDesiredMovementState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMountMovementBehaviourStateMovementState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MovementBehaviourStateKey                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValueAsEnum_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::GetDesiredMovementState(enum class EMountMovementBehaviourState* MovementState, class FName MovementBehaviourStateKey, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, uint8 CallFunc_GetValueAsEnum_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetDesiredMovementState");

	Params::ABP_Mount_Base_C_GetDesiredMovementState_Params Parms{};

	Parms.MovementBehaviourStateKey = MovementBehaviourStateKey;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsEnum_ReturnValue = CallFunc_GetValueAsEnum_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MovementState != nullptr)
		*MovementState = Parms.MovementState;

}


// Function BP_Mount_Base.BP_Mount_Base_C.UpdateBlackboardValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      OwningPlayer                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        OwningPlayerKey                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateCallFunc_GetDesiredMovementState_MovementState                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetValueAsVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidAIDirection_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::UpdateBlackboardValues(class AIcarusPlayerCharacter* OwningPlayer, class FName OwningPlayerKey, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, enum class EMountMovementBehaviourState CallFunc_GetDesiredMovementState_MovementState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetValueAsVector_ReturnValue, bool CallFunc_IsValidAIDirection_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "UpdateBlackboardValues");

	Params::ABP_Mount_Base_C_UpdateBlackboardValues_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.OwningPlayerKey = OwningPlayerKey;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetDesiredMovementState_MovementState = CallFunc_GetDesiredMovementState_MovementState;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValueAsVector_ReturnValue = CallFunc_GetValueAsVector_ReturnValue;
	Parms.CallFunc_IsValidAIDirection_ReturnValue = CallFunc_IsValidAIDirection_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetInventoryComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UInventoryComponent*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UInventoryComponent* ABP_Mount_Base_C::GetInventoryComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetInventoryComponent");

	Params::ABP_Mount_Base_C_GetInventoryComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.FindNewOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AIcarusPlayerCharacter*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FindNearestActor_Distance                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindNearestActor_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMountOwner_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::FindNewOwner(TArray<class AIcarusPlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_FindNearestActor_Distance, class AActor* CallFunc_FindNearestActor_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_SetMountOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "FindNewOwner");

	Params::ABP_Mount_Base_C_FindNewOwner_Params Parms{};

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindNearestActor_Distance = CallFunc_FindNearestActor_Distance;
	Parms.CallFunc_FindNearestActor_ReturnValue = CallFunc_FindNearestActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_SetMountOwner_ReturnValue = CallFunc_SetMountOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.InitialiseSaddle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class AActor>          SaddleActorClass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FItemData                   SaddleItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FSaddlesRowHandle           TestSaddle                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSaddlesEnum                CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSaddlesRowHandle           CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetSeatActor_Seat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSeatActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSaddleData                 CallFunc_GetSaddlesStruct_Saddles                                (None)
// enum class EValid                  CallFunc_GetSaddlesStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LeaveSeat_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_MakeGameplayTagContainerFromTag_ReturnValue             (None)
// bool                               CallFunc_IsBeingRidden_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Seat_Mount_C*            K2Node_DynamicCast_AsBP_Seat_Mount                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::InitialiseSaddle(TSubclassOf<class AActor> SaddleActorClass, const struct FItemData& SaddleItem, const struct FSaddlesRowHandle& TestSaddle, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FSaddlesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSaddlesRowHandle& CallFunc_StructToRowHandle_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class ASeatBase* CallFunc_GetSeatActor_Seat, bool CallFunc_GetSeatActor_ReturnValue, const struct FSaddleData& CallFunc_GetSaddlesStruct_Saddles, enum class EValid CallFunc_GetSaddlesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_LeaveSeat_ReturnValue, bool CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_IsBeingRidden_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Seat_Mount_C* K2Node_DynamicCast_AsBP_Seat_Mount, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "InitialiseSaddle");

	Params::ABP_Mount_Base_C_InitialiseSaddle_Params Parms{};

	Parms.SaddleActorClass = SaddleActorClass;
	Parms.SaddleItem = SaddleItem;
	Parms.TestSaddle = TestSaddle;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetSeatActor_Seat = CallFunc_GetSeatActor_Seat;
	Parms.CallFunc_GetSeatActor_ReturnValue = CallFunc_GetSeatActor_ReturnValue;
	Parms.CallFunc_GetSaddlesStruct_Saddles = CallFunc_GetSaddlesStruct_Saddles;
	Parms.CallFunc_GetSaddlesStruct_Paths = CallFunc_GetSaddlesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_LeaveSeat_ReturnValue = CallFunc_LeaveSeat_ReturnValue;
	Parms.CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue = CallFunc_EqualEqual_FMountsRowHandleFMountsRowHandle_ReturnValue;
	Parms.CallFunc_MakeGameplayTagContainerFromTag_ReturnValue = CallFunc_MakeGameplayTagContainerFromTag_ReturnValue;
	Parms.CallFunc_IsBeingRidden_ReturnValue = CallFunc_IsBeingRidden_ReturnValue;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Seat_Mount = K2Node_DynamicCast_AsBP_Seat_Mount;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetDamageSourceLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector ABP_Mount_Base_C::GetDamageSourceLocation(const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetDamageSourceLocation");

	Params::ABP_Mount_Base_C_GetDamageSourceLocation_Params Parms{};

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.GetAISetupRowHandle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FAISetupRowHandle           ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FAISetupRowHandle ABP_Mount_Base_C::GetAISetupRowHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "GetAISetupRowHandle");

	Params::ABP_Mount_Base_C_GetAISetupRowHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnAttackNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              HitActors                                                        (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASeatBase*                   CallFunc_GetSeatActor_Seat                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSeatActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetAttachedPlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetDamageSourceLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::OnAttackNotify(class UAnimMontage* Montage, class FName NotifyName, const TArray<class AActor*>& HitActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue, class ASeatBase* CallFunc_GetSeatActor_Seat, bool CallFunc_GetSeatActor_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetAttachedPlayer_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_NameName_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_GetDamageSourceLocation_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnAttackNotify");

	Params::ABP_Mount_Base_C_OnAttackNotify_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;
	Parms.HitActors = HitActors;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetSeatActor_Seat = CallFunc_GetSeatActor_Seat;
	Parms.CallFunc_GetSeatActor_ReturnValue = CallFunc_GetSeatActor_ReturnValue;
	Parms.CallFunc_GetAttachedPlayer_ReturnValue = CallFunc_GetAttachedPlayer_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetDamageSourceLocation_ReturnValue = CallFunc_GetDamageSourceLocation_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetScaledCapsuleRadius_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::UserConstructionScript(float CallFunc_GetScaledCapsuleRadius_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "UserConstructionScript");

	Params::ABP_Mount_Base_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetScaledCapsuleRadius_ReturnValue = CallFunc_GetScaledCapsuleRadius_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnNotifyEnd_D92ED5DE406A623B2F92C8AE8A3BAC96
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnNotifyEnd_D92ED5DE406A623B2F92C8AE8A3BAC96(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnNotifyEnd_D92ED5DE406A623B2F92C8AE8A3BAC96");

	Params::ABP_Mount_Base_C_OnNotifyEnd_D92ED5DE406A623B2F92C8AE8A3BAC96_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnNotifyBegin_D92ED5DE406A623B2F92C8AE8A3BAC96
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnNotifyBegin_D92ED5DE406A623B2F92C8AE8A3BAC96(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnNotifyBegin_D92ED5DE406A623B2F92C8AE8A3BAC96");

	Params::ABP_Mount_Base_C_OnNotifyBegin_D92ED5DE406A623B2F92C8AE8A3BAC96_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnInterrupted_D92ED5DE406A623B2F92C8AE8A3BAC96
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnInterrupted_D92ED5DE406A623B2F92C8AE8A3BAC96(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnInterrupted_D92ED5DE406A623B2F92C8AE8A3BAC96");

	Params::ABP_Mount_Base_C_OnInterrupted_D92ED5DE406A623B2F92C8AE8A3BAC96_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnBlendOut_D92ED5DE406A623B2F92C8AE8A3BAC96
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnBlendOut_D92ED5DE406A623B2F92C8AE8A3BAC96(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnBlendOut_D92ED5DE406A623B2F92C8AE8A3BAC96");

	Params::ABP_Mount_Base_C_OnBlendOut_D92ED5DE406A623B2F92C8AE8A3BAC96_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnCompleted_D92ED5DE406A623B2F92C8AE8A3BAC96
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnCompleted_D92ED5DE406A623B2F92C8AE8A3BAC96(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnCompleted_D92ED5DE406A623B2F92C8AE8A3BAC96");

	Params::ABP_Mount_Base_C_OnCompleted_D92ED5DE406A623B2F92C8AE8A3BAC96_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.InpActEvt_Sprint_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Mount_Base_C::InpActEvt_Sprint_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "InpActEvt_Sprint_K2Node_InputActionEvent_1");

	Params::ABP_Mount_Base_C_InpActEvt_Sprint_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.InpActEvt_Sprint_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Mount_Base_C::InpActEvt_Sprint_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "InpActEvt_Sprint_K2Node_InputActionEvent_0");

	Params::ABP_Mount_Base_C_InpActEvt_Sprint_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnLoaded_4228A280491960ACB36ABABC56C2BB4C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnLoaded_4228A280491960ACB36ABABC56C2BB4C(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnLoaded_4228A280491960ACB36ABABC56C2BB4C");

	Params::ABP_Mount_Base_C_OnLoaded_4228A280491960ACB36ABABC56C2BB4C_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.Multicast_PlayActionMontage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::Multicast_PlayActionMontage(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "Multicast_PlayActionMontage");

	Params::ABP_Mount_Base_C_Multicast_PlayActionMontage_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.Server_PlayActionMontage
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStaminaActionCostsRowHandleStaminaCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::Server_PlayActionMontage(class UAnimMontage* Montage, const struct FStaminaActionCostsRowHandle& StaminaCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "Server_PlayActionMontage");

	Params::ABP_Mount_Base_C_Server_PlayActionMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.StaminaCost = StaminaCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.Multicast_ActorDeath
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::Multicast_ActorDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "Multicast_ActorDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnActorDeath
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnActorDeath(class UActorState* ActorStateIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnActorDeath");

	Params::ABP_Mount_Base_C_OnActorDeath_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ReceiveTick");

	Params::ABP_Mount_Base_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.Multicast_AbortMontage
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::Multicast_AbortMontage(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "Multicast_AbortMontage");

	Params::ABP_Mount_Base_C_Multicast_AbortMontage_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 OldController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ReceiveUnpossessed");

	Params::ABP_Mount_Base_C_ReceiveUnpossessed_Params Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnItemUpdated(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnItemUpdated");

	Params::ABP_Mount_Base_C_OnItemUpdated_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.IcarusBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::IcarusBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "IcarusBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ReceivePossessed");

	Params::ABP_Mount_Base_C_ReceivePossessed_Params Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.Mounted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::Mounted(class AIcarusPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "Mounted");

	Params::ABP_Mount_Base_C_Mounted_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.Dismounted
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::Dismounted(class AIcarusPlayerCharacter* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "Dismounted");

	Params::ABP_Mount_Base_C_Dismounted_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OwnerCharacterUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::OwnerCharacterUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OwnerCharacterUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnVocalisationAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIVocalisationType     VocalisationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnVocalisationAnimNotify(enum class EAIVocalisationType VocalisationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnVocalisationAnimNotify");

	Params::ABP_Mount_Base_C_OnVocalisationAnimNotify_Params Parms{};

	Parms.VocalisationType = VocalisationType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnFootstepAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECreatureFootstepType   FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepDirectionFootstepDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnFootstepAnimNotify");

	Params::ABP_Mount_Base_C_OnFootstepAnimNotify_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.FootstepDirection = FootstepDirection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ReceiveAnyDamage");

	Params::ABP_Mount_Base_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.MULTI_OnHurt
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::MULTI_OnHurt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "MULTI_OnHurt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ApplySaddleFurCullingMask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   CullingMask                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_Mount_Base_C::ApplySaddleFurCullingMask(TSoftObjectPtr<class UTexture2D> CullingMask)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ApplySaddleFurCullingMask");

	Params::ABP_Mount_Base_C_ApplySaddleFurCullingMask_Params Parms{};

	Parms.CullingMask = CullingMask;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.TrySetupSaddleCosmetics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::TrySetupSaddleCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "TrySetupSaddleCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnJumped
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::OnJumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnJumped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.Local_PlayActionMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::Local_PlayActionMontage(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "Local_PlayActionMontage");

	Params::ABP_Mount_Base_C_Local_PlayActionMontage_Params Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.MountCombatBehaviourUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountCombatBehaviourStateNewCombatBehaviour                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::MountCombatBehaviourUpdated(enum class EMountCombatBehaviourState NewCombatBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "MountCombatBehaviourUpdated");

	Params::ABP_Mount_Base_C_MountCombatBehaviourUpdated_Params Parms{};

	Parms.NewCombatBehaviour = NewCombatBehaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.MountMovementBehaviourUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountMovementBehaviourStateNewMovementBehaviour                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::MountMovementBehaviourUpdated(enum class EMountMovementBehaviourState NewMovementBehaviour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "MountMovementBehaviourUpdated");

	Params::ABP_Mount_Base_C_MountMovementBehaviourUpdated_Params Parms{};

	Parms.NewMovementBehaviour = NewMovementBehaviour;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnRagdollSettled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::OnRagdollSettled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnRagdollSettled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.SpawnHitEffects
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  SpawnTransform                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        HitSurface                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::SpawnHitEffects(const struct FTransform& SpawnTransform, enum class EPhysicalSurface HitSurface, class AActor* HitActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "SpawnHitEffects");

	Params::ABP_Mount_Base_C_SpawnHitEffects_Params Parms{};

	Parms.SpawnTransform = SpawnTransform;
	Parms.HitSurface = HitSurface;
	Parms.HitActor = HitActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.SetDesiredMovementState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountMovementBehaviourStateDesiredState                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::SetDesiredMovementState(enum class EMountMovementBehaviourState DesiredState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "SetDesiredMovementState");

	Params::ABP_Mount_Base_C_SetDesiredMovementState_Params Parms{};

	Parms.DesiredState = DesiredState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.SetDesiredCombatState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMountCombatBehaviourStateDesiredState                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::SetDesiredCombatState(enum class EMountCombatBehaviourState DesiredState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "SetDesiredCombatState");

	Params::ABP_Mount_Base_C_SetDesiredCombatState_Params Parms{};

	Parms.DesiredState = DesiredState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnModifiersUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UModifierStateComponent*     ModifiedComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Removed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::OnModifiersUpdated(class UModifierStateComponent* ModifiedComponent, bool Removed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnModifiersUpdated");

	Params::ABP_Mount_Base_C_OnModifiersUpdated_Params Parms{};

	Parms.ModifiedComponent = ModifiedComponent;
	Parms.Removed = Removed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OnDisplayHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::OnDisplayHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OnDisplayHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ReceiveEndPlay");

	Params::ABP_Mount_Base_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.OpenMountInventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::OpenMountInventory(class AController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "OpenMountInventory");

	Params::ABP_Mount_Base_C_OpenMountInventory_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ExecuteUbergraph_BP_Mount_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStaminaActionCostsRowHandleK2Node_CustomEvent_StaminaCost                                   (NoDestructor, HasGetValueTypeHash)
// struct FStaminaCost                CallFunc_GetStaminaActionCostsStruct_StaminaActionCosts          (None)
// enum class EValid                  CallFunc_GetStaminaActionCostsStruct_Paths                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorState*                 K2Node_Event_ActorStateIn                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_Montage_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_UpdateMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UpdateMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 K2Node_Event_OldController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMovementState_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FInventoryIDEnum            CallFunc_GetInventoryID_ReturnValue                              (HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_2                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFindItemSlotInfo>   CallFunc_GetItems_ReturnValue                                    (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_Event_Player_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      K2Node_Event_Player                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAIVocalisationType     K2Node_Event_VocalisationType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepType   K2Node_Event_FootstepType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepDirectionK2Node_Event_FootstepDirection                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    Temp_wildcard_Variable_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFindItemSlotInfo           CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   K2Node_CustomEvent_CullingMask                                   (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_3                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_wildcard_Variable_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// struct FSaddleData                 CallFunc_GetSaddlesStruct_Saddles                                (None)
// enum class EValid                  CallFunc_GetSaddlesStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanPerformStaminaAction_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StartStaminaAction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// struct FStaminaActionCostsRowHandleCallFunc_MakeLiteralStaminaActionCosts_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontageForGameplayTag_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_CustomEvent_Montage                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateK2Node_Event_NewCombatBehaviour                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateK2Node_Event_NewMovementBehaviour                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISpawnableAI>CallFunc_SendDeathChatMessage_SpawnableAI_CastInput              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusNPCController*        K2Node_DynamicCast_AsIcarus_NPCController                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                CallFunc_ReplaceSelfWithDeadItem_ReplacementActor                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ReplaceSelfWithDeadItem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_4                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (ConstParm, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        K2Node_Event_HitSurface                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_HitActor                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class ABP_HitVisualActor_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateK2Node_Event_DesiredState_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateK2Node_Event_DesiredState                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModifierStateComponent*     K2Node_Event_ModifiedComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Removed                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetToggleSprint_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MountPreview_C*          CallFunc_SpawnActorOfClass_OutActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_Controller                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusLinkedActorPanelBase* CallFunc_DisplayDynamicWidget_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateMovementState_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::ExecuteUbergraph_BP_Mount_Base(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UObject* Temp_object_Variable, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class UAnimMontage* Temp_wildcard_Variable, int32 Temp_int_Loop_Counter_Variable, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, int32 CallFunc_Add_IntInt_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Montage_3, class UAnimMontage* K2Node_CustomEvent_Montage_2, const struct FStaminaActionCostsRowHandle& K2Node_CustomEvent_StaminaCost, const struct FStaminaCost& CallFunc_GetStaminaActionCostsStruct_StaminaActionCosts, enum class EValid CallFunc_GetStaminaActionCostsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, class UActorState* K2Node_Event_ActorStateIn, float K2Node_Event_DeltaSeconds, class UAnimMontage* K2Node_CustomEvent_Montage_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_UpdateMovementState_ReturnValue, bool CallFunc_UpdateMovementState_ReturnValue_1, class AController* K2Node_Event_OldController, bool CallFunc_UpdateMovementState_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, class AController* K2Node_Event_NewController, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTexture2D* Temp_wildcard_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AIcarusPlayerCharacter* K2Node_Event_Player_1, class AIcarusPlayerCharacter* K2Node_Event_Player, enum class EAIVocalisationType K2Node_Event_VocalisationType, enum class ECreatureFootstepType K2Node_Event_FootstepType, enum class ECreatureFootstepDirection K2Node_Event_FootstepDirection, bool CallFunc_IsServer_ReturnValue_2, class UMaterialInstanceDynamic* Temp_wildcard_Variable_2, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, int32 Temp_int_Array_Index_Variable, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, TSoftObjectPtr<class UTexture2D> K2Node_CustomEvent_CullingMask, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FKey& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue_3, class UClass* Temp_wildcard_Variable_3, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, const struct FSaddleData& CallFunc_GetSaddlesStruct_Saddles, enum class EValid CallFunc_GetSaddlesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_CanPerformStaminaAction_ReturnValue, int32 CallFunc_StartStaminaAction_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const struct FStaminaActionCostsRowHandle& CallFunc_MakeLiteralStaminaActionCosts_ReturnValue, class UAnimMontage* CallFunc_GetMontageForGameplayTag_ReturnValue, bool CallFunc_IsSprinting_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class UAnimMontage* K2Node_CustomEvent_Montage, enum class EMountCombatBehaviourState K2Node_Event_NewCombatBehaviour, enum class EMountMovementBehaviourState K2Node_Event_NewMovementBehaviour, bool CallFunc_IsServer_ReturnValue_4, int32 CallFunc_Array_Add_ReturnValue, TScriptInterface<class ISpawnableAI> CallFunc_SendDeathChatMessage_SpawnableAI_CastInput, class AController* CallFunc_GetController_ReturnValue_1, class AIcarusNPCController* K2Node_DynamicCast_AsIcarus_NPCController, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_RunBehaviorTree_ReturnValue, class AIcarusActor* CallFunc_ReplaceSelfWithDeadItem_ReplacementActor, bool CallFunc_ReplaceSelfWithDeadItem_ReturnValue, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, const struct FTransform& K2Node_Event_SpawnTransform, enum class EPhysicalSurface K2Node_Event_HitSurface, class AActor* K2Node_Event_HitActor, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class ABP_HitVisualActor_C* CallFunc_FinishSpawningActor_ReturnValue, enum class EMountMovementBehaviourState K2Node_Event_DesiredState_1, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, enum class EMountCombatBehaviourState K2Node_Event_DesiredState, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UModifierStateComponent* K2Node_Event_ModifiedComponent, bool K2Node_Event_Removed, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsSprinting_ReturnValue_1, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_GetToggleSprint_ReturnValue, class UAnimNotify* Temp_object_Variable_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class ABP_MountPreview_C* CallFunc_SpawnActorOfClass_OutActor, class AController* K2Node_CustomEvent_Controller, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_4, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UIcarusLinkedActorPanelBase* CallFunc_DisplayDynamicWidget_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_IsServer_ReturnValue_7, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_UpdateMovementState_ReturnValue_3, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_K2_AttachToComponent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ExecuteUbergraph_BP_Mount_Base");

	Params::ABP_Mount_Base_C_ExecuteUbergraph_BP_Mount_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CustomEvent_Notify_1 = K2Node_CustomEvent_Notify_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Montage_3 = K2Node_CustomEvent_Montage_3;
	Parms.K2Node_CustomEvent_Montage_2 = K2Node_CustomEvent_Montage_2;
	Parms.K2Node_CustomEvent_StaminaCost = K2Node_CustomEvent_StaminaCost;
	Parms.CallFunc_GetStaminaActionCostsStruct_StaminaActionCosts = CallFunc_GetStaminaActionCostsStruct_StaminaActionCosts;
	Parms.CallFunc_GetStaminaActionCostsStruct_Paths = CallFunc_GetStaminaActionCostsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_ActorStateIn = K2Node_Event_ActorStateIn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Montage_1 = K2Node_CustomEvent_Montage_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_UpdateMovementState_ReturnValue = CallFunc_UpdateMovementState_ReturnValue;
	Parms.CallFunc_UpdateMovementState_ReturnValue_1 = CallFunc_UpdateMovementState_ReturnValue_1;
	Parms.K2Node_Event_OldController = K2Node_Event_OldController;
	Parms.CallFunc_UpdateMovementState_ReturnValue_2 = CallFunc_UpdateMovementState_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetInventoryID_ReturnValue = CallFunc_GetInventoryID_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CustomEvent_Notify_2 = K2Node_CustomEvent_Notify_2;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_Event_Player_1 = K2Node_Event_Player_1;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.K2Node_Event_VocalisationType = K2Node_Event_VocalisationType;
	Parms.K2Node_Event_FootstepType = K2Node_Event_FootstepType;
	Parms.K2Node_Event_FootstepDirection = K2Node_Event_FootstepDirection;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.Temp_wildcard_Variable_2 = Temp_wildcard_Variable_2;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_CullingMask = K2Node_CustomEvent_CullingMask;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CustomEvent_Notify_3 = K2Node_CustomEvent_Notify_3;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.Temp_wildcard_Variable_3 = Temp_wildcard_Variable_3;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetSaddlesStruct_Saddles = CallFunc_GetSaddlesStruct_Saddles;
	Parms.CallFunc_GetSaddlesStruct_Paths = CallFunc_GetSaddlesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_CanPerformStaminaAction_ReturnValue = CallFunc_CanPerformStaminaAction_ReturnValue;
	Parms.CallFunc_StartStaminaAction_ReturnValue = CallFunc_StartStaminaAction_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_MakeLiteralStaminaActionCosts_ReturnValue = CallFunc_MakeLiteralStaminaActionCosts_ReturnValue;
	Parms.CallFunc_GetMontageForGameplayTag_ReturnValue = CallFunc_GetMontageForGameplayTag_ReturnValue;
	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CustomEvent_Montage = K2Node_CustomEvent_Montage;
	Parms.K2Node_Event_NewCombatBehaviour = K2Node_Event_NewCombatBehaviour;
	Parms.K2Node_Event_NewMovementBehaviour = K2Node_Event_NewMovementBehaviour;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_SendDeathChatMessage_SpawnableAI_CastInput = CallFunc_SendDeathChatMessage_SpawnableAI_CastInput;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_NPCController = K2Node_DynamicCast_AsIcarus_NPCController;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.CallFunc_ReplaceSelfWithDeadItem_ReplacementActor = CallFunc_ReplaceSelfWithDeadItem_ReplacementActor;
	Parms.CallFunc_ReplaceSelfWithDeadItem_ReturnValue = CallFunc_ReplaceSelfWithDeadItem_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_Notify_4 = K2Node_CustomEvent_Notify_4;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.K2Node_Event_HitSurface = K2Node_Event_HitSurface;
	Parms.K2Node_Event_HitActor = K2Node_Event_HitActor;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_Event_DesiredState_1 = K2Node_Event_DesiredState_1;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_Event_DesiredState = K2Node_Event_DesiredState;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.K2Node_Event_ModifiedComponent = K2Node_Event_ModifiedComponent;
	Parms.K2Node_Event_Removed = K2Node_Event_Removed;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsSprinting_ReturnValue_1 = CallFunc_IsSprinting_ReturnValue_1;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_GetToggleSprint_ReturnValue = CallFunc_GetToggleSprint_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_SpawnActorOfClass_OutActor = CallFunc_SpawnActorOfClass_OutActor;
	Parms.K2Node_CustomEvent_Controller = K2Node_CustomEvent_Controller;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_DisplayDynamicWidget_ReturnValue = CallFunc_DisplayDynamicWidget_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CustomEvent_Notify = K2Node_CustomEvent_Notify;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.CallFunc_UpdateMovementState_ReturnValue_3 = CallFunc_UpdateMovementState_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.ModifierUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UModifierStateComponent*     ModifiedComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Removed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mount_Base_C::ModifierUpdated__DelegateSignature(class UModifierStateComponent* ModifiedComponent, bool Removed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "ModifierUpdated__DelegateSignature");

	Params::ABP_Mount_Base_C_ModifierUpdated__DelegateSignature_Params Parms{};

	Parms.ModifiedComponent = ModifiedComponent;
	Parms.Removed = Removed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mount_Base.BP_Mount_Base_C.MontageComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mount_Base_C::MontageComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "MontageComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Mount_Base.BP_Mount_Base_C.MontageNotify__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Mount_Base_C::MontageNotify__DelegateSignature(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mount_Base_C", "MontageNotify__DelegateSignature");

	Params::ABP_Mount_Base_C_MontageNotify__DelegateSignature_Params Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}

}


