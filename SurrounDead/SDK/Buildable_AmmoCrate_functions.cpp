#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_AmmoCrate.Buildable_AmmoCrate_C
// (Actor)

class UClass* ABuildable_AmmoCrate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_AmmoCrate_C");

	return Clss;
}


// Buildable_AmmoCrate_C Buildable_AmmoCrate.Default__Buildable_AmmoCrate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_AmmoCrate_C* ABuildable_AmmoCrate_C::GetDefaultObj()
{
	static class ABuildable_AmmoCrate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_AmmoCrate_C*>(ABuildable_AmmoCrate_C::StaticClass()->DefaultObject);

	return Default;
}

}


