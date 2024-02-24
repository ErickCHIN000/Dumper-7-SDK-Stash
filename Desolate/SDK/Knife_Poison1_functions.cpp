#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Knife_Poison1.Knife_Poison1_C
// (Actor)

class UClass* AKnife_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Knife_Poison1_C");

	return Clss;
}


// Knife_Poison1_C Knife_Poison1.Default__Knife_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKnife_Poison1_C* AKnife_Poison1_C::GetDefaultObj()
{
	static class AKnife_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKnife_Poison1_C*>(AKnife_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}


