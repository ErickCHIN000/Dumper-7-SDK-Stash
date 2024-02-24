#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Interactable_Pickup_Item_FLOD.BP_Interactable_Pickup_Item_FLOD_C
// (None)

class UClass* UBP_Interactable_Pickup_Item_FLOD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Interactable_Pickup_Item_FLOD_C");

	return Clss;
}


// BP_Interactable_Pickup_Item_FLOD_C BP_Interactable_Pickup_Item_FLOD.Default__BP_Interactable_Pickup_Item_FLOD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Interactable_Pickup_Item_FLOD_C* UBP_Interactable_Pickup_Item_FLOD_C::GetDefaultObj()
{
	static class UBP_Interactable_Pickup_Item_FLOD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Interactable_Pickup_Item_FLOD_C*>(UBP_Interactable_Pickup_Item_FLOD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Interactable_Pickup_Item_FLOD.BP_Interactable_Pickup_Item_FLOD_C.Pickup Item
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PickedUp                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFLODRewardComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewards                CallFunc_GetItemRewardsStruct_ItemRewards                        (None)
// enum class EValid                  CallFunc_GetItemRewardsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRewardEntry            CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GenerateItemFromReward_ReturnValue                      (ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Interactable_Pickup_Item_FLOD_C::Pickup_Item(bool* PickedUp, int32 Temp_int_Array_Index_Variable, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UFLODRewardComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewardEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemData& CallFunc_GenerateItemFromReward_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Interactable_Pickup_Item_FLOD_C", "Pickup Item");

	Params::UBP_Interactable_Pickup_Item_FLOD_C_Pickup_Item_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemRewardsStruct_ItemRewards = CallFunc_GetItemRewardsStruct_ItemRewards;
	Parms.CallFunc_GetItemRewardsStruct_Paths = CallFunc_GetItemRewardsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GenerateItemFromReward_ReturnValue = CallFunc_GenerateItemFromReward_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (PickedUp != nullptr)
		*PickedUp = Parms.PickedUp;

}

}


