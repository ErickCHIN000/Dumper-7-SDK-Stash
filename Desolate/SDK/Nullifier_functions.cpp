#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Nullifier.Nullifier_C
// (Actor)

class UClass* ANullifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Nullifier_C");

	return Clss;
}


// Nullifier_C Nullifier.Default__Nullifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANullifier_C* ANullifier_C::GetDefaultObj()
{
	static class ANullifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANullifier_C*>(ANullifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Nullifier.Nullifier_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANullifier_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Nullifier_C", "OnUse");

	Params::ANullifier_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Nullifier.Nullifier_C.ExecuteUbergraph_Nullifier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANullifier_C::ExecuteUbergraph_Nullifier(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Nullifier_C", "ExecuteUbergraph_Nullifier");

	Params::ANullifier_C_ExecuteUbergraph_Nullifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


