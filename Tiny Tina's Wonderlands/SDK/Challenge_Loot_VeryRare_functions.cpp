#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Loot_VeryRare.Challenge_Loot_VeryRare_C
// (None)

class UClass* UChallenge_Loot_VeryRare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Loot_VeryRare_C");

	return Clss;
}


// Challenge_Loot_VeryRare_C Challenge_Loot_VeryRare.Default__Challenge_Loot_VeryRare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Loot_VeryRare_C* UChallenge_Loot_VeryRare_C::GetDefaultObj()
{
	static class UChallenge_Loot_VeryRare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Loot_VeryRare_C*>(UChallenge_Loot_VeryRare_C::StaticClass()->DefaultObject);

	return Default;
}

}


