#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Boss_Banshee.Challenge_Boss_Banshee_C
// (None)

class UClass* UChallenge_Boss_Banshee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Boss_Banshee_C");

	return Clss;
}


// Challenge_Boss_Banshee_C Challenge_Boss_Banshee.Default__Challenge_Boss_Banshee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Boss_Banshee_C* UChallenge_Boss_Banshee_C::GetDefaultObj()
{
	static class UChallenge_Boss_Banshee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Boss_Banshee_C*>(UChallenge_Boss_Banshee_C::StaticClass()->DefaultObject);

	return Default;
}

}


