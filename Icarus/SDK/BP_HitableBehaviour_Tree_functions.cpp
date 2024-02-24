#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitableBehaviour_Tree.BP_HitableBehaviour_Tree_C
// (None)

class UClass* UBP_HitableBehaviour_Tree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitableBehaviour_Tree_C");

	return Clss;
}


// BP_HitableBehaviour_Tree_C BP_HitableBehaviour_Tree.Default__BP_HitableBehaviour_Tree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitableBehaviour_Tree_C* UBP_HitableBehaviour_Tree_C::GetDefaultObj()
{
	static class UBP_HitableBehaviour_Tree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitableBehaviour_Tree_C*>(UBP_HitableBehaviour_Tree_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HitableBehaviour_Tree.BP_HitableBehaviour_Tree_C.ConsumeHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusDamagePacket         DamagePacket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ConsumeHit_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EIcarusDamageType       CallFunc_GetDamageTypeFromEvent_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TreeBase_C*              K2Node_DynamicCast_AsBP_Tree_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_HitableBehaviour_Tree_C::ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, bool CallFunc_ConsumeHit_ReturnValue, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_TreeBase_C* K2Node_DynamicCast_AsBP_Tree_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitableBehaviour_Tree_C", "ConsumeHit");

	Params::UBP_HitableBehaviour_Tree_C_ConsumeHit_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;
	Parms.DamagePacket = DamagePacket;
	Parms.CallFunc_ConsumeHit_ReturnValue = CallFunc_ConsumeHit_ReturnValue;
	Parms.CallFunc_GetDamageTypeFromEvent_ReturnValue = CallFunc_GetDamageTypeFromEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Tree_Base = K2Node_DynamicCast_AsBP_Tree_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_HitableBehaviour_Tree.BP_HitableBehaviour_Tree_C.CanConsumeHit
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusDamagePacket         DamagePacket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_HitableBehaviour_Tree_C::CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitableBehaviour_Tree_C", "CanConsumeHit");

	Params::UBP_HitableBehaviour_Tree_C_CanConsumeHit_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;
	Parms.DamagePacket = DamagePacket;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


