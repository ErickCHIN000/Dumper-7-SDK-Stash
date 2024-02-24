#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Entrance_Bound.GA_CreatureAbility_Entrance_Bound_C
// (None)

class UClass* UGA_CreatureAbility_Entrance_Bound_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Entrance_Bound_C");

	return Clss;
}


// GA_CreatureAbility_Entrance_Bound_C GA_CreatureAbility_Entrance_Bound.Default__GA_CreatureAbility_Entrance_Bound_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Entrance_Bound_C* UGA_CreatureAbility_Entrance_Bound_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Entrance_Bound_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Entrance_Bound_C*>(UGA_CreatureAbility_Entrance_Bound_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Entrance_Bound.GA_CreatureAbility_Entrance_Bound_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Entrance_Bound_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Entrance_Bound_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_Entrance_Bound_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_Entrance_Bound.GA_CreatureAbility_Entrance_Bound_C.ExecuteUbergraph_GA_CreatureAbility_Entrance_Bound
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Bound_C*        K2Node_DynamicCast_AsBP_Creature_Bound                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Attacker_C>CallFunc_GetEquippedWeapon_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedWeapon_CreatureWeapon                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Entrance_Bound_C::ExecuteUbergraph_GA_CreatureAbility_Entrance_Bound(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue, class ABP_Creature_Bound_C* K2Node_DynamicCast_AsBP_Creature_Bound, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Attacker_C> CallFunc_GetEquippedWeapon_self_CastInput, class AEquippableItem* CallFunc_GetEquippedWeapon_CreatureWeapon, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Entrance_Bound_C", "ExecuteUbergraph_GA_CreatureAbility_Entrance_Bound");

	Params::UGA_CreatureAbility_Entrance_Bound_C_ExecuteUbergraph_GA_CreatureAbility_Entrance_Bound_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Creature_Bound = K2Node_DynamicCast_AsBP_Creature_Bound;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetEquippedWeapon_self_CastInput = CallFunc_GetEquippedWeapon_self_CastInput;
	Parms.CallFunc_GetEquippedWeapon_CreatureWeapon = CallFunc_GetEquippedWeapon_CreatureWeapon;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


