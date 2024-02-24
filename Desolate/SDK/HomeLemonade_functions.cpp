#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HomeLemonade.HomeLemonade_C
// (Actor)

class UClass* AHomeLemonade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HomeLemonade_C");

	return Clss;
}


// HomeLemonade_C HomeLemonade.Default__HomeLemonade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHomeLemonade_C* AHomeLemonade_C::GetDefaultObj()
{
	static class AHomeLemonade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHomeLemonade_C*>(AHomeLemonade_C::StaticClass()->DefaultObject);

	return Default;
}

}


