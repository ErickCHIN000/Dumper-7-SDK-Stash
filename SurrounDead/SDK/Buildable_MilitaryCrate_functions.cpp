#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_MilitaryCrate.Buildable_MilitaryCrate_C
// (Actor)

class UClass* ABuildable_MilitaryCrate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_MilitaryCrate_C");

	return Clss;
}


// Buildable_MilitaryCrate_C Buildable_MilitaryCrate.Default__Buildable_MilitaryCrate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_MilitaryCrate_C* ABuildable_MilitaryCrate_C::GetDefaultObj()
{
	static class ABuildable_MilitaryCrate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_MilitaryCrate_C*>(ABuildable_MilitaryCrate_C::StaticClass()->DefaultObject);

	return Default;
}

}


