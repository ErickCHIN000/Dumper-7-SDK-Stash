#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_Boss_DragonLord.Challenge_Boss_DragonLord_C
// (None)

class UClass* UChallenge_Boss_DragonLord_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_Boss_DragonLord_C");

	return Clss;
}


// Challenge_Boss_DragonLord_C Challenge_Boss_DragonLord.Default__Challenge_Boss_DragonLord_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_Boss_DragonLord_C* UChallenge_Boss_DragonLord_C::GetDefaultObj()
{
	static class UChallenge_Boss_DragonLord_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_Boss_DragonLord_C*>(UChallenge_Boss_DragonLord_C::StaticClass()->DefaultObject);

	return Default;
}

}


