#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PickupUsableComponent.BP_PickupUsableComponent_C
// (None)

class UClass* UBP_PickupUsableComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PickupUsableComponent_C");

	return Clss;
}


// BP_PickupUsableComponent_C BP_PickupUsableComponent.Default__BP_PickupUsableComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PickupUsableComponent_C* UBP_PickupUsableComponent_C::GetDefaultObj()
{
	static class UBP_PickupUsableComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PickupUsableComponent_C*>(UBP_PickupUsableComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_GetOptionalErrorText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInventoryItemPickup*        K2Node_DynamicCast_AsInventory_Item_Pickup                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UBP_PickupUsableComponent_C::K2_GetOptionalErrorText(class AActor* CallFunc_GetOwner_ReturnValue, class AInventoryItemPickup* K2Node_DynamicCast_AsInventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupUsableComponent_C", "K2_GetOptionalErrorText");

	Params::UBP_PickupUsableComponent_C_K2_GetOptionalErrorText_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_Item_Pickup = K2Node_DynamicCast_AsInventory_Item_Pickup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PickupUsableComponent.BP_PickupUsableComponent_C.K2_CanBeUsed
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FUsabilityQuery             Query                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AInventoryItemPickup*        MyPickup                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBePickedUp_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_UsableComponent_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInventoryItemPickup*        K2Node_DynamicCast_AsInventory_Item_Pickup                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_PickupUsableComponent_C::K2_CanBeUsed(struct FUsabilityQuery& Query, class AInventoryItemPickup* MyPickup, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanBePickedUp_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_UsableComponent_C* CallFunc_GetComponentByClass_ReturnValue, class AInventoryItemPickup* K2Node_DynamicCast_AsInventory_Item_Pickup, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PickupUsableComponent_C", "K2_CanBeUsed");

	Params::UBP_PickupUsableComponent_C_K2_CanBeUsed_Params Parms{};

	Parms.Query = Query;
	Parms.MyPickup = MyPickup;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_CanBePickedUp_ReturnValue = CallFunc_CanBePickedUp_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_Item_Pickup = K2Node_DynamicCast_AsInventory_Item_Pickup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


