#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Zombie_Fire.Zombie_Fire_C
// (Actor)

class UClass* AZombie_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Zombie_Fire_C");

	return Clss;
}


// Zombie_Fire_C Zombie_Fire.Default__Zombie_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AZombie_Fire_C* AZombie_Fire_C::GetDefaultObj()
{
	static class AZombie_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AZombie_Fire_C*>(AZombie_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


