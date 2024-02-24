#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Boss_Knightmare.Challenge_Boss_Knightmare_C
// (None)

class UClass* UChallenge_Boss_Knightmare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Boss_Knightmare_C");

	return Clss;
}


// Challenge_Boss_Knightmare_C Challenge_Boss_Knightmare.Default__Challenge_Boss_Knightmare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Boss_Knightmare_C* UChallenge_Boss_Knightmare_C::GetDefaultObj()
{
	static class UChallenge_Boss_Knightmare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Boss_Knightmare_C*>(UChallenge_Boss_Knightmare_C::StaticClass()->DefaultObject);

	return Default;
}

}


