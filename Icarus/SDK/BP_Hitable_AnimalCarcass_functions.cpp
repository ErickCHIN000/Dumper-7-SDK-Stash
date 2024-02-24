#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Hitable_AnimalCarcass.BP_Hitable_AnimalCarcass_C
// (None)

class UClass* UBP_Hitable_AnimalCarcass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Hitable_AnimalCarcass_C");

	return Clss;
}


// BP_Hitable_AnimalCarcass_C BP_Hitable_AnimalCarcass.Default__BP_Hitable_AnimalCarcass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Hitable_AnimalCarcass_C* UBP_Hitable_AnimalCarcass_C::GetDefaultObj()
{
	static class UBP_Hitable_AnimalCarcass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Hitable_AnimalCarcass_C*>(UBP_Hitable_AnimalCarcass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Hitable_AnimalCarcass.BP_Hitable_AnimalCarcass_C.ConsumeHit
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusDamagePacket         DamagePacket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class ABP_GOAP_Corpse_C*           CorpseRef                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AIcarusPlayerController*     ControllerRef                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AIcarusItem*                 K2Node_DynamicCast_AsIcarus_Item                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetSerialisedItemData_ReturnValue                       (ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerFeedbackSubsystem*    CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GOAP_Corpse_C*           K2Node_DynamicCast_AsBP_GOAP_Corpse                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_Hitable_AnimalCarcass_C::ConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket, class ABP_GOAP_Corpse_C* CorpseRef, class AIcarusPlayerController* ControllerRef, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, const struct FItemData& CallFunc_GetSerialisedItemData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_RandomFloat_ReturnValue, class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_GOAP_Corpse_C* K2Node_DynamicCast_AsBP_GOAP_Corpse, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hitable_AnimalCarcass_C", "ConsumeHit");

	Params::UBP_Hitable_AnimalCarcass_C_ConsumeHit_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;
	Parms.DamagePacket = DamagePacket;
	Parms.CorpseRef = CorpseRef;
	Parms.ControllerRef = ControllerRef;
	Parms.K2Node_DynamicCast_AsIcarus_Item = K2Node_DynamicCast_AsIcarus_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSerialisedItemData_ReturnValue = CallFunc_GetSerialisedItemData_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_GOAP_Corpse = K2Node_DynamicCast_AsBP_GOAP_Corpse;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Hitable_AnimalCarcass.BP_Hitable_AnimalCarcass_C.CanConsumeHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusDamagePacket         DamagePacket                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_Hitable_AnimalCarcass_C::CanConsumeHit(class UActorState* ActorStateIn, const struct FIcarusDamagePacket& DamagePacket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Hitable_AnimalCarcass_C", "CanConsumeHit");

	Params::UBP_Hitable_AnimalCarcass_C_CanConsumeHit_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;
	Parms.DamagePacket = DamagePacket;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


