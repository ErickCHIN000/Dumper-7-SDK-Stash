#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Loot_Wards.Challenge_Loot_Wards_C
// (None)

class UClass* UChallenge_Loot_Wards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Loot_Wards_C");

	return Clss;
}


// Challenge_Loot_Wards_C Challenge_Loot_Wards.Default__Challenge_Loot_Wards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Loot_Wards_C* UChallenge_Loot_Wards_C::GetDefaultObj()
{
	static class UChallenge_Loot_Wards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Loot_Wards_C*>(UChallenge_Loot_Wards_C::StaticClass()->DefaultObject);

	return Default;
}

}


