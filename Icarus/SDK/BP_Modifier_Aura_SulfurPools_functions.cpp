#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Modifier_Aura_SulfurPools.BP_Modifier_Aura_SulfurPools_C
// (None)

class UClass* UBP_Modifier_Aura_SulfurPools_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Modifier_Aura_SulfurPools_C");

	return Clss;
}


// BP_Modifier_Aura_SulfurPools_C BP_Modifier_Aura_SulfurPools.Default__BP_Modifier_Aura_SulfurPools_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Modifier_Aura_SulfurPools_C* UBP_Modifier_Aura_SulfurPools_C::GetDefaultObj()
{
	static class UBP_Modifier_Aura_SulfurPools_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Modifier_Aura_SulfurPools_C*>(UBP_Modifier_Aura_SulfurPools_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Modifier_Aura_SulfurPools.BP_Modifier_Aura_SulfurPools_C.ModifierRemoved
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UAuraManagerComponent*       CallFunc_GetAuraManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModifierRemoved_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_Aura_SulfurPools_C::ModifierRemoved(class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Aura_SulfurPools_C", "ModifierRemoved");

	Params::UBP_Modifier_Aura_SulfurPools_C_ModifierRemoved_Params Parms{};

	Parms.CallFunc_GetAuraManager_ReturnValue = CallFunc_GetAuraManager_ReturnValue;
	Parms.CallFunc_ModifierRemoved_ReturnValue = CallFunc_ModifierRemoved_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Modifier_Aura_SulfurPools.BP_Modifier_Aura_SulfurPools_C.ModifierApplied
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SulfurPoolsActor_C*      K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAuraManagerComponent*       CallFunc_GetAuraManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ModifierApplied_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Modifier_Aura_SulfurPools_C::ModifierApplied(class AActor* CallFunc_GetOwner_ReturnValue, class ABP_SulfurPoolsActor_C* K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor, bool K2Node_DynamicCast_bSuccess, class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Aura_SulfurPools_C", "ModifierApplied");

	Params::UBP_Modifier_Aura_SulfurPools_C_ModifierApplied_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor = K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAuraManager_ReturnValue = CallFunc_GetAuraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_ModifierApplied_ReturnValue = CallFunc_ModifierApplied_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Modifier_Aura_SulfurPools.BP_Modifier_Aura_SulfurPools_C.ModifierTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_Aura_SulfurPools_C::ModifierTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Aura_SulfurPools_C", "ModifierTick");

	Params::UBP_Modifier_Aura_SulfurPools_C_ModifierTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Modifier_Aura_SulfurPools.BP_Modifier_Aura_SulfurPools_C.ExecuteUbergraph_BP_Modifier_Aura_SulfurPools
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SulfurPoolsActor_C*      K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithEditor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAuraManagerComponent*       CallFunc_GetAuraManager_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Modifier_Aura_SulfurPools_C::ExecuteUbergraph_BP_Modifier_Aura_SulfurPools(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_SulfurPoolsActor_C* K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsWithEditor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAuraManagerComponent* CallFunc_GetAuraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_Aura_SulfurPools_C", "ExecuteUbergraph_BP_Modifier_Aura_SulfurPools");

	Params::UBP_Modifier_Aura_SulfurPools_C_ExecuteUbergraph_BP_Modifier_Aura_SulfurPools_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor = K2Node_DynamicCast_AsBP_Sulfur_Pools_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsWithEditor_ReturnValue = CallFunc_IsWithEditor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAuraManager_ReturnValue = CallFunc_GetAuraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


