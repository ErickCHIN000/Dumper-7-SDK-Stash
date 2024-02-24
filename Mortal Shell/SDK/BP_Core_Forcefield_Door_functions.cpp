#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Core_Forcefield_Door.BP_Core_Forcefield_Door_C
// (Actor)

class UClass* ABP_Core_Forcefield_Door_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Core_Forcefield_Door_C");

	return Clss;
}


// BP_Core_Forcefield_Door_C BP_Core_Forcefield_Door.Default__BP_Core_Forcefield_Door_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Core_Forcefield_Door_C* ABP_Core_Forcefield_Door_C::GetDefaultObj()
{
	static class ABP_Core_Forcefield_Door_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Core_Forcefield_Door_C*>(ABP_Core_Forcefield_Door_C::StaticClass()->DefaultObject);

	return Default;
}

}


