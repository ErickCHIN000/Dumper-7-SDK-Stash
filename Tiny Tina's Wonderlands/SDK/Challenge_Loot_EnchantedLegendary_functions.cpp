#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Loot_EnchantedLegendary.Challenge_Loot_EnchantedLegendary_C
// (None)

class UClass* UChallenge_Loot_EnchantedLegendary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Loot_EnchantedLegendary_C");

	return Clss;
}


// Challenge_Loot_EnchantedLegendary_C Challenge_Loot_EnchantedLegendary.Default__Challenge_Loot_EnchantedLegendary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Loot_EnchantedLegendary_C* UChallenge_Loot_EnchantedLegendary_C::GetDefaultObj()
{
	static class UChallenge_Loot_EnchantedLegendary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Loot_EnchantedLegendary_C*>(UChallenge_Loot_EnchantedLegendary_C::StaticClass()->DefaultObject);

	return Default;
}

}


