#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Economy_Enchantments.Challenge_Economy_Enchantments_C
// (None)

class UClass* UChallenge_Economy_Enchantments_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Economy_Enchantments_C");

	return Clss;
}


// Challenge_Economy_Enchantments_C Challenge_Economy_Enchantments.Default__Challenge_Economy_Enchantments_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Economy_Enchantments_C* UChallenge_Economy_Enchantments_C::GetDefaultObj()
{
	static class UChallenge_Economy_Enchantments_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Economy_Enchantments_C*>(UChallenge_Economy_Enchantments_C::StaticClass()->DefaultObject);

	return Default;
}

}


