#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ZombieHand_New.ZombieHand_New_C
// (Actor)

class UClass* AZombieHand_New_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZombieHand_New_C");

	return Clss;
}


// ZombieHand_New_C ZombieHand_New.Default__ZombieHand_New_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AZombieHand_New_C* AZombieHand_New_C::GetDefaultObj()
{
	static class AZombieHand_New_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AZombieHand_New_C*>(AZombieHand_New_C::StaticClass()->DefaultObject);

	return Default;
}

}


