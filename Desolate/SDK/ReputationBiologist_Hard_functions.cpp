#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReputationBiologist_Hard.ReputationBiologist_Hard_C
// (Actor)

class UClass* AReputationBiologist_Hard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReputationBiologist_Hard_C");

	return Clss;
}


// ReputationBiologist_Hard_C ReputationBiologist_Hard.Default__ReputationBiologist_Hard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReputationBiologist_Hard_C* AReputationBiologist_Hard_C::GetDefaultObj()
{
	static class AReputationBiologist_Hard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReputationBiologist_Hard_C*>(AReputationBiologist_Hard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReputationBiologist_Hard.ReputationBiologist_Hard_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationBiologist_Hard_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationBiologist_Hard_C", "OnUse");

	Params::AReputationBiologist_Hard_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReputationBiologist_Hard.ReputationBiologist_Hard_C.ExecuteUbergraph_ReputationBiologist_Hard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationBiologist_Hard_C::ExecuteUbergraph_ReputationBiologist_Hard(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationBiologist_Hard_C", "ExecuteUbergraph_ReputationBiologist_Hard");

	Params::AReputationBiologist_Hard_C_ExecuteUbergraph_ReputationBiologist_Hard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


