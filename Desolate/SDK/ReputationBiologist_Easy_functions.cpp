#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReputationBiologist_Easy.ReputationBiologist_Easy_C
// (Actor)

class UClass* AReputationBiologist_Easy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReputationBiologist_Easy_C");

	return Clss;
}


// ReputationBiologist_Easy_C ReputationBiologist_Easy.Default__ReputationBiologist_Easy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReputationBiologist_Easy_C* AReputationBiologist_Easy_C::GetDefaultObj()
{
	static class AReputationBiologist_Easy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReputationBiologist_Easy_C*>(AReputationBiologist_Easy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReputationBiologist_Easy.ReputationBiologist_Easy_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationBiologist_Easy_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationBiologist_Easy_C", "OnUse");

	Params::AReputationBiologist_Easy_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReputationBiologist_Easy.ReputationBiologist_Easy_C.ExecuteUbergraph_ReputationBiologist_Easy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationBiologist_Easy_C::ExecuteUbergraph_ReputationBiologist_Easy(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationBiologist_Easy_C", "ExecuteUbergraph_ReputationBiologist_Easy");

	Params::AReputationBiologist_Easy_C_ExecuteUbergraph_ReputationBiologist_Easy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


