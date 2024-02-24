#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ContainerBase.BP_ContainerBase_C
// (Actor)

class UClass* ABP_ContainerBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ContainerBase_C");

	return Clss;
}


// BP_ContainerBase_C BP_ContainerBase.Default__BP_ContainerBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ContainerBase_C* ABP_ContainerBase_C::GetDefaultObj()
{
	static class ABP_ContainerBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ContainerBase_C*>(ABP_ContainerBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ContainerBase.BP_ContainerBase_C.OnItemRemoved
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContainerBase_C::OnItemRemoved(class UInventory* Inventory, int32 Location, struct FItemData& Item, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerBase_C", "OnItemRemoved");

	Params::ABP_ContainerBase_C_OnItemRemoved_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;
	Parms.Item = Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContainerBase.BP_ContainerBase_C.WorldObject_Interact
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContainerBase_C::WorldObject_Interact(class AActor* Instigator, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, class UInventory* CallFunc_GetInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerBase_C", "WorldObject_Interact");

	Params::ABP_ContainerBase_C_WorldObject_Interact_Params Parms{};

	Parms.Instigator = Instigator;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ContainerBase.BP_ContainerBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ContainerBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ContainerBase.BP_ContainerBase_C.ExecuteUbergraph_BP_ContainerBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ContainerBase_C::ExecuteUbergraph_BP_ContainerBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ContainerBase_C", "ExecuteUbergraph_BP_ContainerBase");

	Params::ABP_ContainerBase_C_ExecuteUbergraph_BP_ContainerBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


