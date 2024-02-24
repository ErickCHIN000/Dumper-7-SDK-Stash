#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureSpawner_Wildlife_Critter.BP_CreatureSpawner_Wildlife_Critter_C
// (Actor, Pawn)

class UClass* ABP_CreatureSpawner_Wildlife_Critter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureSpawner_Wildlife_Critter_C");

	return Clss;
}


// BP_CreatureSpawner_Wildlife_Critter_C BP_CreatureSpawner_Wildlife_Critter.Default__BP_CreatureSpawner_Wildlife_Critter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CreatureSpawner_Wildlife_Critter_C* ABP_CreatureSpawner_Wildlife_Critter_C::GetDefaultObj()
{
	static class ABP_CreatureSpawner_Wildlife_Critter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CreatureSpawner_Wildlife_Critter_C*>(ABP_CreatureSpawner_Wildlife_Critter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureSpawner_Wildlife_Critter.BP_CreatureSpawner_Wildlife_Critter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CreatureSpawner_Wildlife_Critter_C::UserConstructionScript(bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_RandomFloat_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureSpawner_Wildlife_Critter_C", "UserConstructionScript");

	Params::ABP_CreatureSpawner_Wildlife_Critter_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


