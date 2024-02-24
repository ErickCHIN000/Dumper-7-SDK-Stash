#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Zombie.BP_Zombie_C
// (Actor, Pawn)

class UClass* ABP_Zombie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Zombie_C");

	return Clss;
}


// BP_Zombie_C BP_Zombie.Default__BP_Zombie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Zombie_C* ABP_Zombie_C::GetDefaultObj()
{
	static class ABP_Zombie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Zombie_C*>(ABP_Zombie_C::StaticClass()->DefaultObject);

	return Default;
}

}


