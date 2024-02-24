#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureProjectile_DemonDeer_Bees.BP_CreatureProjectile_DemonDeer_Bees_C
// (Actor)

class UClass* ABP_CreatureProjectile_DemonDeer_Bees_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureProjectile_DemonDeer_Bees_C");

	return Clss;
}


// BP_CreatureProjectile_DemonDeer_Bees_C BP_CreatureProjectile_DemonDeer_Bees.Default__BP_CreatureProjectile_DemonDeer_Bees_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureProjectile_DemonDeer_Bees_C* ABP_CreatureProjectile_DemonDeer_Bees_C::GetDefaultObj()
{
	static class ABP_CreatureProjectile_DemonDeer_Bees_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureProjectile_DemonDeer_Bees_C*>(ABP_CreatureProjectile_DemonDeer_Bees_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureProjectile_DemonDeer_Bees.BP_CreatureProjectile_DemonDeer_Bees_C.BndEvt__BP_CreatureProjectile_DemonDeer_Bees_AbilitySystem_K2Node_ComponentBoundEvent_0_OnGameplayTagCountChanged__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_DemonDeer_Bees_C::BndEvt__BP_CreatureProjectile_DemonDeer_Bees_AbilitySystem_K2Node_ComponentBoundEvent_0_OnGameplayTagCountChanged__DelegateSignature(struct FGameplayTag& Tag, int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_DemonDeer_Bees_C", "BndEvt__BP_CreatureProjectile_DemonDeer_Bees_AbilitySystem_K2Node_ComponentBoundEvent_0_OnGameplayTagCountChanged__DelegateSignature");

	Params::ABP_CreatureProjectile_DemonDeer_Bees_C_BndEvt__BP_CreatureProjectile_DemonDeer_Bees_AbilitySystem_K2Node_ComponentBoundEvent_0_OnGameplayTagCountChanged__DelegateSignature_Params Parms{};

	Parms.Tag = Tag;
	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureProjectile_DemonDeer_Bees.BP_CreatureProjectile_DemonDeer_Bees_C.ExecuteUbergraph_BP_CreatureProjectile_DemonDeer_Bees
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_ComponentBoundEvent_Tag                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Count                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureProjectile_DemonDeer_Bees_C::ExecuteUbergraph_BP_CreatureProjectile_DemonDeer_Bees(int32 EntryPoint, const struct FGameplayTag& K2Node_ComponentBoundEvent_Tag, int32 K2Node_ComponentBoundEvent_Count, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureProjectile_DemonDeer_Bees_C", "ExecuteUbergraph_BP_CreatureProjectile_DemonDeer_Bees");

	Params::ABP_CreatureProjectile_DemonDeer_Bees_C_ExecuteUbergraph_BP_CreatureProjectile_DemonDeer_Bees_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Tag = K2Node_ComponentBoundEvent_Tag;
	Parms.K2Node_ComponentBoundEvent_Count = K2Node_ComponentBoundEvent_Count;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


