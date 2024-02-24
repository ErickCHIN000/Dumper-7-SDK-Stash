#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_40mmGrenade.BP_40mmGrenade_C
// (Actor)

class UClass* ABP_40mmGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_40mmGrenade_C");

	return Clss;
}


// BP_40mmGrenade_C BP_40mmGrenade.Default__BP_40mmGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_40mmGrenade_C* ABP_40mmGrenade_C::GetDefaultObj()
{
	static class ABP_40mmGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_40mmGrenade_C*>(ABP_40mmGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


