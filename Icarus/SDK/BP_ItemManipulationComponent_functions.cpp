#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemManipulationComponent.BP_ItemManipulationComponent_C
// (None)

class UClass* UBP_ItemManipulationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemManipulationComponent_C");

	return Clss;
}


// BP_ItemManipulationComponent_C BP_ItemManipulationComponent.Default__BP_ItemManipulationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ItemManipulationComponent_C* UBP_ItemManipulationComponent_C::GetDefaultObj()
{
	static class UBP_ItemManipulationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ItemManipulationComponent_C*>(UBP_ItemManipulationComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemManipulationComponent.BP_ItemManipulationComponent_C.CanUseItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  SourceInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SourceLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FUseCondition               UseCondition                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class AIcarusPlayerCharacter*      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECanUseItemResult       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUse_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanRepairItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECanUseItemResult       CallFunc_CanUseItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ECanUseItemResult UBP_ItemManipulationComponent_C::CanUseItem(class UInventory* SourceInventory, int32 SourceLocation, const struct FUsesEnum& Use, const struct FUseCondition& UseCondition, class AIcarusPlayerCharacter* Target, bool CallFunc_CanUse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchRowEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CanRepairItem_ReturnValue, enum class ECanUseItemResult CallFunc_CanUseItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemManipulationComponent_C", "CanUseItem");

	Params::UBP_ItemManipulationComponent_C_CanUseItem_Params Parms{};

	Parms.SourceInventory = SourceInventory;
	Parms.SourceLocation = SourceLocation;
	Parms.Use = Use;
	Parms.UseCondition = UseCondition;
	Parms.Target = Target;
	Parms.CallFunc_CanUse_ReturnValue = CallFunc_CanUse_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CanRepairItem_ReturnValue = CallFunc_CanRepairItem_ReturnValue;
	Parms.CallFunc_CanUseItem_ReturnValue = CallFunc_CanUseItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ItemManipulationComponent.BP_ItemManipulationComponent_C.UseItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  SourceInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SourceLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ItemConsumed                                                     (Parm, OutParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     TargetPlayerController                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   NewItem                                                          (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              ConsumeCount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ConsumedItem                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FItemData                   CallFunc_UseItem_ItemConsumed                                    (ContainsInstancedReference)
// bool                               CallFunc_UseItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   Temp_wildcard_Variable                                           (ContainsInstancedReference)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Temp_wildcard_Variable_1                                         (ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   Temp_wildcard_Variable_2                                         (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   Temp_wildcard_Variable_3                                         (ContainsInstancedReference)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   Temp_wildcard_Variable_4                                         (ContainsInstancedReference)
// int32                              Temp_int_Variable_6                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemDynamicData>    K2Node_MakeArray_Array                                           (ReferenceParm)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// struct FItemData                   CallFunc_CreateItem_ReturnValue                                  (ContainsInstancedReference)
// int32                              Temp_int_Variable_7                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConsumeItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_ConsumeItem_ItemConsumed                                (ContainsInstancedReference)
// bool                               CallFunc_ConsumeItem_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_ConsumeItem_ItemConsumed_1                              (ContainsInstancedReference)
// bool                               CallFunc_ConsumeItem_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_2                                   (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_ConsumeItem_ItemConsumed_2                              (ContainsInstancedReference)
// bool                               CallFunc_ConsumeItem_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_3                                   (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_8                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_ConsumeItem_ItemConsumed_3                              (ContainsInstancedReference)
// bool                               CallFunc_ConsumeItem_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_4                                   (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxFood_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFood_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxWater_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetWater_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_ConsumeItem_ItemConsumed_4                              (ContainsInstancedReference)
// bool                               CallFunc_ConsumeItem_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_5                                   (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxOxygen_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetOxygen_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_9                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxWater_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWater_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxFood_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetFood_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_ConsumeItem_ItemConsumed_5                              (ContainsInstancedReference)
// bool                               CallFunc_ConsumeItem_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESetDataSuccess         CallFunc_SetItemPropertyValue_Paths_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlaceItem_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StartStaminaAction_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RepairItem_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_ItemManipulationComponent_C::UseItem(class UInventory* SourceInventory, int32 SourceLocation, const struct FUsesEnum& Use, class AIcarusPlayerCharacter* Target, struct FItemData* ItemConsumed, class AIcarusPlayerController* TargetPlayerController, const struct FItemData& NewItem, int32 ConsumeCount, const struct FItemData& ConsumedItem, const struct FItemData& CallFunc_UseItem_ItemConsumed, bool CallFunc_UseItem_ReturnValue, bool K2Node_SwitchRowEnum_CmpSuccess, const struct FItemData& Temp_wildcard_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable_1, const struct FItemData& Temp_wildcard_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemData& Temp_wildcard_Variable_2, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable_3, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths_2, bool K2Node_SwitchEnum_CmpSuccess_2, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FItemData& Temp_wildcard_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths_3, bool K2Node_SwitchEnum_CmpSuccess_3, const struct FItemData& Temp_wildcard_Variable_4, int32 Temp_int_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths_4, bool K2Node_SwitchEnum_CmpSuccess_4, bool Temp_bool_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TArray<struct FItemDynamicData>& K2Node_MakeArray_Array, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, const struct FItemData& K2Node_MakeStruct_ItemData, const struct FItemData& CallFunc_CreateItem_ReturnValue, int32 Temp_int_Variable_7, const struct FItemData& CallFunc_GetItem_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Clamp_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_ConsumeItem_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths_5, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FItemData& CallFunc_ConsumeItem_ItemConsumed, bool CallFunc_ConsumeItem_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue_1, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess_6, const struct FItemData& CallFunc_ConsumeItem_ItemConsumed_1, bool CallFunc_ConsumeItem_ReturnValue_2, const struct FItemData& CallFunc_GetItem_ReturnValue_2, int32 CallFunc_GetItemPropertyValue_IntValue_1, enum class EDataValid CallFunc_GetItemPropertyValue_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_7, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FItemData& CallFunc_ConsumeItem_ItemConsumed_2, bool CallFunc_ConsumeItem_ReturnValue_3, const struct FItemData& CallFunc_GetItem_ReturnValue_3, int32 CallFunc_GetItemPropertyValue_IntValue_2, enum class EDataValid CallFunc_GetItemPropertyValue_Paths_2, bool K2Node_SwitchEnum_CmpSuccess_8, int32 Temp_int_Variable_8, int32 CallFunc_Add_IntInt_ReturnValue_8, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FItemData& CallFunc_ConsumeItem_ItemConsumed_3, bool CallFunc_ConsumeItem_ReturnValue_4, const struct FItemData& CallFunc_GetItem_ReturnValue_4, int32 CallFunc_GetItemPropertyValue_IntValue_3, enum class EDataValid CallFunc_GetItemPropertyValue_Paths_3, bool K2Node_SwitchEnum_CmpSuccess_9, bool CallFunc_LessEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_3, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, int32 CallFunc_GetMaxFood_ReturnValue, int32 CallFunc_GetFood_ReturnValue, int32 CallFunc_GetMaxWater_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetWater_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FItemData& CallFunc_ConsumeItem_ItemConsumed_4, bool CallFunc_ConsumeItem_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue_5, int32 CallFunc_GetItemPropertyValue_IntValue_4, enum class EDataValid CallFunc_GetItemPropertyValue_Paths_4, bool K2Node_SwitchEnum_CmpSuccess_10, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_3, int32 CallFunc_GetMaxOxygen_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_GetOxygen_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Variable_9, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_LessEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue_2, int32 CallFunc_GetMaxWater_ReturnValue_1, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue_3, int32 CallFunc_GetWater_ReturnValue_1, int32 CallFunc_GetMaxFood_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_GetFood_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_4, bool Temp_bool_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, const struct FItemData& CallFunc_ConsumeItem_ItemConsumed_5, bool CallFunc_ConsumeItem_ReturnValue_6, enum class ESetDataSuccess CallFunc_SetItemPropertyValue_Paths_6, bool K2Node_SwitchEnum_CmpSuccess_11, bool CallFunc_PlaceItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_StartStaminaAction_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_RepairItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemManipulationComponent_C", "UseItem");

	Params::UBP_ItemManipulationComponent_C_UseItem_Params Parms{};

	Parms.SourceInventory = SourceInventory;
	Parms.SourceLocation = SourceLocation;
	Parms.Use = Use;
	Parms.Target = Target;
	Parms.TargetPlayerController = TargetPlayerController;
	Parms.NewItem = NewItem;
	Parms.ConsumeCount = ConsumeCount;
	Parms.ConsumedItem = ConsumedItem;
	Parms.CallFunc_UseItem_ItemConsumed = CallFunc_UseItem_ItemConsumed;
	Parms.CallFunc_UseItem_ReturnValue = CallFunc_UseItem_ReturnValue;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths = CallFunc_SetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_SetItemPropertyValue_Paths_1 = CallFunc_SetItemPropertyValue_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_wildcard_Variable_2 = Temp_wildcard_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths_2 = CallFunc_SetItemPropertyValue_Paths_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_wildcard_Variable_3 = Temp_wildcard_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_SetItemPropertyValue_Paths_3 = CallFunc_SetItemPropertyValue_Paths_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.Temp_wildcard_Variable_4 = Temp_wildcard_Variable_4;
	Parms.Temp_int_Variable_6 = Temp_int_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_SetItemPropertyValue_Paths_4 = CallFunc_SetItemPropertyValue_Paths_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.CallFunc_CreateItem_ReturnValue = CallFunc_CreateItem_ReturnValue;
	Parms.Temp_int_Variable_7 = Temp_int_Variable_7;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_ConsumeItem_ReturnValue = CallFunc_ConsumeItem_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_SetItemPropertyValue_Paths_5 = CallFunc_SetItemPropertyValue_Paths_5;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_ConsumeItem_ItemConsumed = CallFunc_ConsumeItem_ItemConsumed;
	Parms.CallFunc_ConsumeItem_ReturnValue_1 = CallFunc_ConsumeItem_ReturnValue_1;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_ConsumeItem_ItemConsumed_1 = CallFunc_ConsumeItem_ItemConsumed_1;
	Parms.CallFunc_ConsumeItem_ReturnValue_2 = CallFunc_ConsumeItem_ReturnValue_2;
	Parms.CallFunc_GetItem_ReturnValue_2 = CallFunc_GetItem_ReturnValue_2;
	Parms.CallFunc_GetItemPropertyValue_IntValue_1 = CallFunc_GetItemPropertyValue_IntValue_1;
	Parms.CallFunc_GetItemPropertyValue_Paths_1 = CallFunc_GetItemPropertyValue_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_ConsumeItem_ItemConsumed_2 = CallFunc_ConsumeItem_ItemConsumed_2;
	Parms.CallFunc_ConsumeItem_ReturnValue_3 = CallFunc_ConsumeItem_ReturnValue_3;
	Parms.CallFunc_GetItem_ReturnValue_3 = CallFunc_GetItem_ReturnValue_3;
	Parms.CallFunc_GetItemPropertyValue_IntValue_2 = CallFunc_GetItemPropertyValue_IntValue_2;
	Parms.CallFunc_GetItemPropertyValue_Paths_2 = CallFunc_GetItemPropertyValue_Paths_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.Temp_int_Variable_8 = Temp_int_Variable_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ConsumeItem_ItemConsumed_3 = CallFunc_ConsumeItem_ItemConsumed_3;
	Parms.CallFunc_ConsumeItem_ReturnValue_4 = CallFunc_ConsumeItem_ReturnValue_4;
	Parms.CallFunc_GetItem_ReturnValue_4 = CallFunc_GetItem_ReturnValue_4;
	Parms.CallFunc_GetItemPropertyValue_IntValue_3 = CallFunc_GetItemPropertyValue_IntValue_3;
	Parms.CallFunc_GetItemPropertyValue_Paths_3 = CallFunc_GetItemPropertyValue_Paths_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_9 = K2Node_SwitchEnum_CmpSuccess_9;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue = CallFunc_GetPlayerCharacterState_ReturnValue;
	Parms.CallFunc_GetMaxFood_ReturnValue = CallFunc_GetMaxFood_ReturnValue;
	Parms.CallFunc_GetFood_ReturnValue = CallFunc_GetFood_ReturnValue;
	Parms.CallFunc_GetMaxWater_ReturnValue = CallFunc_GetMaxWater_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetWater_ReturnValue = CallFunc_GetWater_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_ConsumeItem_ItemConsumed_4 = CallFunc_ConsumeItem_ItemConsumed_4;
	Parms.CallFunc_ConsumeItem_ReturnValue_5 = CallFunc_ConsumeItem_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue_5 = CallFunc_GetItem_ReturnValue_5;
	Parms.CallFunc_GetItemPropertyValue_IntValue_4 = CallFunc_GetItemPropertyValue_IntValue_4;
	Parms.CallFunc_GetItemPropertyValue_Paths_4 = CallFunc_GetItemPropertyValue_Paths_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_10 = K2Node_SwitchEnum_CmpSuccess_10;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue_1 = CallFunc_GetPlayerCharacterState_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_GetMaxOxygen_ReturnValue = CallFunc_GetMaxOxygen_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetOxygen_ReturnValue = CallFunc_GetOxygen_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_9 = Temp_int_Variable_9;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_4 = CallFunc_LessEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue_2 = CallFunc_GetPlayerCharacterState_ReturnValue_2;
	Parms.CallFunc_GetMaxWater_ReturnValue_1 = CallFunc_GetMaxWater_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue_3 = CallFunc_GetPlayerCharacterState_ReturnValue_3;
	Parms.CallFunc_GetWater_ReturnValue_1 = CallFunc_GetWater_ReturnValue_1;
	Parms.CallFunc_GetMaxFood_ReturnValue_1 = CallFunc_GetMaxFood_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetFood_ReturnValue_1 = CallFunc_GetFood_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_ConsumeItem_ItemConsumed_5 = CallFunc_ConsumeItem_ItemConsumed_5;
	Parms.CallFunc_ConsumeItem_ReturnValue_6 = CallFunc_ConsumeItem_ReturnValue_6;
	Parms.CallFunc_SetItemPropertyValue_Paths_6 = CallFunc_SetItemPropertyValue_Paths_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_11 = K2Node_SwitchEnum_CmpSuccess_11;
	Parms.CallFunc_PlaceItem_ReturnValue = CallFunc_PlaceItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_StartStaminaAction_ReturnValue = CallFunc_StartStaminaAction_ReturnValue;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_RepairItem_ReturnValue = CallFunc_RepairItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemConsumed != nullptr)
		*ItemConsumed = std::move(Parms.ItemConsumed);

	return Parms.ReturnValue;

}

}


