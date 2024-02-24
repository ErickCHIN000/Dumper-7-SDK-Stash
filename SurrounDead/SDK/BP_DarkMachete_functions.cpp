#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DarkMachete.BP_DarkMachete_C
// (Actor)

class UClass* ABP_DarkMachete_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DarkMachete_C");

	return Clss;
}


// BP_DarkMachete_C BP_DarkMachete.Default__BP_DarkMachete_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DarkMachete_C* ABP_DarkMachete_C::GetDefaultObj()
{
	static class ABP_DarkMachete_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DarkMachete_C*>(ABP_DarkMachete_C::StaticClass()->DefaultObject);

	return Default;
}

}


