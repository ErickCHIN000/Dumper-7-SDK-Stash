#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ResourceAmbienceComponent.BP_ResourceAmbienceComponent_C
// (None)

class UClass* UBP_ResourceAmbienceComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ResourceAmbienceComponent_C");

	return Clss;
}


// BP_ResourceAmbienceComponent_C BP_ResourceAmbienceComponent.Default__BP_ResourceAmbienceComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ResourceAmbienceComponent_C* UBP_ResourceAmbienceComponent_C::GetDefaultObj()
{
	static class UBP_ResourceAmbienceComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ResourceAmbienceComponent_C*>(UBP_ResourceAmbienceComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ResourceAmbienceComponent.BP_ResourceAmbienceComponent_C.GetIIMComponentFromActor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInstancedResourceNodeComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNode_IIM_C*      K2Node_DynamicCast_AsBP_Resource_Node_IIM                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UInstancedResourceNodeComponent* UBP_ResourceAmbienceComponent_C::GetIIMComponentFromActor(class AActor* Actor, class ABP_ResourceNode_IIM_C* K2Node_DynamicCast_AsBP_Resource_Node_IIM, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ResourceAmbienceComponent_C", "GetIIMComponentFromActor");

	Params::UBP_ResourceAmbienceComponent_C_GetIIMComponentFromActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.K2Node_DynamicCast_AsBP_Resource_Node_IIM = K2Node_DynamicCast_AsBP_Resource_Node_IIM;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_ResourceAmbienceComponent.BP_ResourceAmbienceComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ResourceAmbienceComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ResourceAmbienceComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ResourceAmbienceComponent.BP_ResourceAmbienceComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ResourceAmbienceComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ResourceAmbienceComponent_C", "ReceiveTick");

	Params::UBP_ResourceAmbienceComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ResourceAmbienceComponent.BP_ResourceAmbienceComponent_C.ExecuteUbergraph_BP_ResourceAmbienceComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocal_ReturnValue                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasPlayerReachedThreshold_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ResourceAmbienceComponent_C::ExecuteUbergraph_BP_ResourceAmbienceComponent(int32 EntryPoint, bool CallFunc_IsLocal_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_HasPlayerReachedThreshold_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ResourceAmbienceComponent_C", "ExecuteUbergraph_BP_ResourceAmbienceComponent");

	Params::UBP_ResourceAmbienceComponent_C_ExecuteUbergraph_BP_ResourceAmbienceComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocal_ReturnValue = CallFunc_IsLocal_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_HasPlayerReachedThreshold_ReturnValue = CallFunc_HasPlayerReachedThreshold_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


