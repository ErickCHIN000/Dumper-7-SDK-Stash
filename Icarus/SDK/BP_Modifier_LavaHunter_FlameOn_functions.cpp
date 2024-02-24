#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C
// (None)

class UClass* UBP_Modifier_LavaHunter_FlameOn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Modifier_LavaHunter_FlameOn_C");

	return Clss;
}


// BP_Modifier_LavaHunter_FlameOn_C BP_Modifier_LavaHunter_FlameOn.Default__BP_Modifier_LavaHunter_FlameOn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Modifier_LavaHunter_FlameOn_C* UBP_Modifier_LavaHunter_FlameOn_C::GetDefaultObj()
{
	static class UBP_Modifier_LavaHunter_FlameOn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Modifier_LavaHunter_FlameOn_C*>(UBP_Modifier_LavaHunter_FlameOn_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C.ModifierTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_LavaHunter_FlameOn_C::ModifierTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_LavaHunter_FlameOn_C", "ModifierTick");

	Params::UBP_Modifier_LavaHunter_FlameOn_C_ModifierTick_Params Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C.InitComponent
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_Modifier_LavaHunter_FlameOn_C::InitComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_LavaHunter_FlameOn_C", "InitComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C.OnDamagedReturned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnedAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ActorReceivingDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Modifier_LavaHunter_FlameOn_C::OnDamagedReturned(int32 ReturnedAmount, class AActor* ActorReceivingDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_LavaHunter_FlameOn_C", "OnDamagedReturned");

	Params::UBP_Modifier_LavaHunter_FlameOn_C_OnDamagedReturned_Params Parms{};

	Parms.ReturnedAmount = ReturnedAmount;
	Parms.ActorReceivingDamage = ActorReceivingDamage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Modifier_LavaHunter_FlameOn.BP_Modifier_LavaHunter_FlameOn_C.ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaTime                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ISpawnableAI>K2Node_DynamicCast_AsSpawnable_AI                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_ReturnedAmount                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_ActorReceivingDamage                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorState*                 CallFunc_GetAIActorState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlammableTargetIgnite      CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue          (NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UFlammableInstance*          CallFunc_TryIgniteFlammableTarget_OutInstance                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryIgniteFlammableTarget_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Modifier_LavaHunter_FlameOn_C::ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISpawnableAI> K2Node_DynamicCast_AsSpawnable_AI, bool K2Node_DynamicCast_bSuccess, int32 K2Node_CustomEvent_ReturnedAmount, class AActor* K2Node_CustomEvent_ActorReceivingDamage, class UActorState* CallFunc_GetAIActorState_ReturnValue, const struct FFlammableTargetIgnite& CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue, class UFlammableInstance* CallFunc_TryIgniteFlammableTarget_OutInstance, bool CallFunc_TryIgniteFlammableTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Modifier_LavaHunter_FlameOn_C", "ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn");

	Params::UBP_Modifier_LavaHunter_FlameOn_C_ExecuteUbergraph_BP_Modifier_LavaHunter_FlameOn_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsSpawnable_AI = K2Node_DynamicCast_AsSpawnable_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_ReturnedAmount = K2Node_CustomEvent_ReturnedAmount;
	Parms.K2Node_CustomEvent_ActorReceivingDamage = K2Node_CustomEvent_ActorReceivingDamage;
	Parms.CallFunc_GetAIActorState_ReturnValue = CallFunc_GetAIActorState_ReturnValue;
	Parms.CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue = CallFunc_MakeFlammableTargetIgniteFromActor_ReturnValue;
	Parms.CallFunc_TryIgniteFlammableTarget_OutInstance = CallFunc_TryIgniteFlammableTarget_OutInstance;
	Parms.CallFunc_TryIgniteFlammableTarget_ReturnValue = CallFunc_TryIgniteFlammableTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


