#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ReputationBiologist_Medium.ReputationBiologist_Medium_C
// (Actor)

class UClass* AReputationBiologist_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReputationBiologist_Medium_C");

	return Clss;
}


// ReputationBiologist_Medium_C ReputationBiologist_Medium.Default__ReputationBiologist_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AReputationBiologist_Medium_C* AReputationBiologist_Medium_C::GetDefaultObj()
{
	static class AReputationBiologist_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AReputationBiologist_Medium_C*>(AReputationBiologist_Medium_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReputationBiologist_Medium.ReputationBiologist_Medium_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationBiologist_Medium_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationBiologist_Medium_C", "OnUse");

	Params::AReputationBiologist_Medium_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReputationBiologist_Medium.ReputationBiologist_Medium_C.ExecuteUbergraph_ReputationBiologist_Medium
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AReputationBiologist_Medium_C::ExecuteUbergraph_ReputationBiologist_Medium(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReputationBiologist_Medium_C", "ExecuteUbergraph_ReputationBiologist_Medium");

	Params::AReputationBiologist_Medium_C_ExecuteUbergraph_ReputationBiologist_Medium_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


