#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIA_Creature_Combat_Wildlife_FleeSquadAttacked.AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C
// (None)

class UClass* UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C");

	return Clss;
}


// AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C AIA_Creature_Combat_Wildlife_FleeSquadAttacked.Default__AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C* UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C::GetDefaultObj()
{
	static class UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C*>(UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIA_Creature_Combat_Wildlife_FleeSquadAttacked.AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C.CheckOwnerRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C::CheckOwnerRequirements(const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C", "CheckOwnerRequirements");

	Params::UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C_CheckOwnerRequirements_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_Wildlife_FleeSquadAttacked.AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C.GetNormalizedScore
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C::GetNormalizedScore(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C", "GetNormalizedScore");

	Params::UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C_GetNormalizedScore_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AIA_Creature_Combat_Wildlife_FleeSquadAttacked.AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C.Start
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C::Start(class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C", "Start");

	Params::UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C_Start_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIA_Creature_Combat_Wildlife_FleeSquadAttacked.AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C.ExecuteUbergraph_AIA_Creature_Combat_Wildlife_FleeSquadAttacked
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXAISpawner*               CallFunc_GetSpawner_Spawner                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C::ExecuteUbergraph_AIA_Creature_Combat_Wildlife_FleeSquadAttacked(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_1, class AActor* K2Node_Event_Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIA_Creature_Combat_Wildlife_FleeSquadAttacked_C", "ExecuteUbergraph_AIA_Creature_Combat_Wildlife_FleeSquadAttacked");

	Params::UAIA_Creature_Combat_Wildlife_FleeSquadAttacked_C_ExecuteUbergraph_AIA_Creature_Combat_Wildlife_FleeSquadAttacked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSpawner_Spawner = CallFunc_GetSpawner_Spawner;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_Target = K2Node_Event_Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


