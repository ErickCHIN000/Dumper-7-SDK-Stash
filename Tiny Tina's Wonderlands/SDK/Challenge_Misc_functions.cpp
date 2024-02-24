#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Misc.Challenge_Misc_C
// (None)

class UClass* UChallenge_Misc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Misc_C");

	return Clss;
}


// Challenge_Misc_C Challenge_Misc.Default__Challenge_Misc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Misc_C* UChallenge_Misc_C::GetDefaultObj()
{
	static class UChallenge_Misc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Misc_C*>(UChallenge_Misc_C::StaticClass()->DefaultObject);

	return Default;
}

}


