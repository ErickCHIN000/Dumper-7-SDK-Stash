#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HitableBehaviour_ResourceNode.BP_HitableBehaviour_ResourceNode_C
// (None)

class UClass* UBP_HitableBehaviour_ResourceNode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HitableBehaviour_ResourceNode_C");

	return Clss;
}


// BP_HitableBehaviour_ResourceNode_C BP_HitableBehaviour_ResourceNode.Default__BP_HitableBehaviour_ResourceNode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_HitableBehaviour_ResourceNode_C* UBP_HitableBehaviour_ResourceNode_C::GetDefaultObj()
{
	static class UBP_HitableBehaviour_ResourceNode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_HitableBehaviour_ResourceNode_C*>(UBP_HitableBehaviour_ResourceNode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_HitableBehaviour_ResourceNode.BP_HitableBehaviour_ResourceNode_C.ConsumeHit
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusDamagePacket         DamagePacket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ConsumeHit_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      K2Node_DynamicCast_AsIcarus_Player_Character                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTypesEnum              CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ResourceNodeBase_C*      K2Node_DynamicCast_AsBP_Resource_Node_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_HitableBehaviour_ResourceNode_C::ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, bool CallFunc_ConsumeHit_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasTag_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetStat_ReturnValue, const struct FToolTypesEnum& CallFunc_IntToStruct_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_ResourceNodeBase_C* K2Node_DynamicCast_AsBP_Resource_Node_Base, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitableBehaviour_ResourceNode_C", "ConsumeHit");

	Params::UBP_HitableBehaviour_ResourceNode_C_ConsumeHit_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;
	Parms.DamagePacket = DamagePacket;
	Parms.CallFunc_ConsumeHit_ReturnValue = CallFunc_ConsumeHit_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character = K2Node_DynamicCast_AsIcarus_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Resource_Node_Base = K2Node_DynamicCast_AsBP_Resource_Node_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_HitableBehaviour_ResourceNode.BP_HitableBehaviour_ResourceNode_C.CanConsumeHit
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusDamagePacket         DamagePacket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_ResourceNodeBase_C*      K2Node_DynamicCast_AsBP_Resource_Node_Base                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_HitableBehaviour_ResourceNode_C::CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, class ABP_ResourceNodeBase_C* K2Node_DynamicCast_AsBP_Resource_Node_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_HitableBehaviour_ResourceNode_C", "CanConsumeHit");

	Params::UBP_HitableBehaviour_ResourceNode_C_CanConsumeHit_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;
	Parms.DamagePacket = DamagePacket;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Resource_Node_Base = K2Node_DynamicCast_AsBP_Resource_Node_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


