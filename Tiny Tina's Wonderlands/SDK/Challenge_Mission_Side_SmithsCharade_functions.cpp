#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Mission_Side_SmithsCharade.Challenge_Mission_Side_SmithsCharade_C
// (None)

class UClass* UChallenge_Mission_Side_SmithsCharade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Mission_Side_SmithsCharade_C");

	return Clss;
}


// Challenge_Mission_Side_SmithsCharade_C Challenge_Mission_Side_SmithsCharade.Default__Challenge_Mission_Side_SmithsCharade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Mission_Side_SmithsCharade_C* UChallenge_Mission_Side_SmithsCharade_C::GetDefaultObj()
{
	static class UChallenge_Mission_Side_SmithsCharade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Mission_Side_SmithsCharade_C*>(UChallenge_Mission_Side_SmithsCharade_C::StaticClass()->DefaultObject);

	return Default;
}

}

