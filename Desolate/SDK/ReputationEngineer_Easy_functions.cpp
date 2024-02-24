#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReputationEngineer_Easy.ReputationEngineer_Easy_C
// (Actor)

class UClass* AReputationEngineer_Easy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReputationEngineer_Easy_C");

	return Clss;
}


// ReputationEngineer_Easy_C ReputationEngineer_Easy.Default__ReputationEngineer_Easy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReputationEngineer_Easy_C* AReputationEngineer_Easy_C::GetDefaultObj()
{
	static class AReputationEngineer_Easy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReputationEngineer_Easy_C*>(AReputationEngineer_Easy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReputationEngineer_Easy.ReputationEngineer_Easy_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationEngineer_Easy_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationEngineer_Easy_C", "OnUse");

	Params::AReputationEngineer_Easy_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReputationEngineer_Easy.ReputationEngineer_Easy_C.ExecuteUbergraph_ReputationEngineer_Easy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationEngineer_Easy_C::ExecuteUbergraph_ReputationEngineer_Easy(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationEngineer_Easy_C", "ExecuteUbergraph_ReputationEngineer_Easy");

	Params::AReputationEngineer_Easy_C_ExecuteUbergraph_ReputationEngineer_Easy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


