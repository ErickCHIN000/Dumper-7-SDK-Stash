#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HardenedCloth.HardenedCloth_C
// (Actor)

class UClass* AHardenedCloth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HardenedCloth_C");

	return Clss;
}


// HardenedCloth_C HardenedCloth.Default__HardenedCloth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHardenedCloth_C* AHardenedCloth_C::GetDefaultObj()
{
	static class AHardenedCloth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHardenedCloth_C*>(AHardenedCloth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HardenedCloth.HardenedCloth_C.OnUse
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHardenedCloth_C::OnUse(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardenedCloth_C", "OnUse");

	Params::AHardenedCloth_C_OnUse_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HardenedCloth.HardenedCloth_C.ExecuteUbergraph_HardenedCloth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHardenedCloth_C::ExecuteUbergraph_HardenedCloth(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HardenedCloth_C", "ExecuteUbergraph_HardenedCloth");

	Params::AHardenedCloth_C_ExecuteUbergraph_HardenedCloth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


