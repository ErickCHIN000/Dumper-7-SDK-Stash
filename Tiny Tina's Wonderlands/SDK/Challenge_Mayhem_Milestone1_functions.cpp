#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mayhem_Milestone1.Challenge_Mayhem_Milestone1_C
// (None)

class UClass* UChallenge_Mayhem_Milestone1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mayhem_Milestone1_C");

	return Clss;
}


// Challenge_Mayhem_Milestone1_C Challenge_Mayhem_Milestone1.Default__Challenge_Mayhem_Milestone1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mayhem_Milestone1_C* UChallenge_Mayhem_Milestone1_C::GetDefaultObj()
{
	static class UChallenge_Mayhem_Milestone1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mayhem_Milestone1_C*>(UChallenge_Mayhem_Milestone1_C::StaticClass()->DefaultObject);

	return Default;
}

}


