#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Condition_CanSwapWeaponWithPickupInvFull.Condition_CanSwapWeaponWithPickupInvFull_C
// (None)

class UClass* UCondition_CanSwapWeaponWithPickupInvFull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Condition_CanSwapWeaponWithPickupInvFull_C");

	return Clss;
}


// Condition_CanSwapWeaponWithPickupInvFull_C Condition_CanSwapWeaponWithPickupInvFull.Default__Condition_CanSwapWeaponWithPickupInvFull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCondition_CanSwapWeaponWithPickupInvFull_C* UCondition_CanSwapWeaponWithPickupInvFull_C::GetDefaultObj()
{
	static class UCondition_CanSwapWeaponWithPickupInvFull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCondition_CanSwapWeaponWithPickupInvFull_C*>(UCondition_CanSwapWeaponWithPickupInvFull_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Condition_CanSwapWeaponWithPickupInvFull.Condition_CanSwapWeaponWithPickupInvFull_C.EvaluateCondition
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     OptionalContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AOakPlayerController*        K2Node_DynamicCast_AsOak_Player_Controller                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_OakInventoryItemPickup_C*K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetAssociatedCharacter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryListComponent*     CallFunc_GetInventoryComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     CallFunc_GetWeapon_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInventoryFull_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanSwapItemForPickup_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCondition_CanSwapWeaponWithPickupInvFull_C::EvaluateCondition(class UObject* Context, class UObject* OptionalContext, class AOakPlayerController* K2Node_DynamicCast_AsOak_Player_Controller, bool K2Node_DynamicCast_bSuccess, class ABP_OakInventoryItemPickup_C* K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess1, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess2, class UInventoryListComponent* CallFunc_GetInventoryComponent_ReturnValue, class AWeapon* CallFunc_GetWeapon_ReturnValue, bool CallFunc_IsInventoryFull_ReturnValue, bool CallFunc_CanSwapItemForPickup_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Condition_CanSwapWeaponWithPickupInvFull_C", "EvaluateCondition");

	Params::UCondition_CanSwapWeaponWithPickupInvFull_C_EvaluateCondition_Params Parms{};

	Parms.Context = Context;
	Parms.OptionalContext = OptionalContext;
	Parms.K2Node_DynamicCast_AsOak_Player_Controller = K2Node_DynamicCast_AsOak_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup = K2Node_DynamicCast_AsBP_Oak_Inventory_Item_Pickup;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetAssociatedCharacter_ReturnValue = CallFunc_GetAssociatedCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetInventoryComponent_ReturnValue = CallFunc_GetInventoryComponent_ReturnValue;
	Parms.CallFunc_GetWeapon_ReturnValue = CallFunc_GetWeapon_ReturnValue;
	Parms.CallFunc_IsInventoryFull_ReturnValue = CallFunc_IsInventoryFull_ReturnValue;
	Parms.CallFunc_CanSwapItemForPickup_ReturnValue = CallFunc_CanSwapItemForPickup_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


