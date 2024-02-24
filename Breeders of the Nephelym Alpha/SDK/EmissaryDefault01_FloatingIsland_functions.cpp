#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmissaryDefault01_FloatingIsland.EmissaryDefault01_FloatingIsland_C
// (None)

class UClass* UEmissaryDefault01_FloatingIsland_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmissaryDefault01_FloatingIsland_C");

	return Clss;
}


// EmissaryDefault01_FloatingIsland_C EmissaryDefault01_FloatingIsland.Default__EmissaryDefault01_FloatingIsland_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmissaryDefault01_FloatingIsland_C* UEmissaryDefault01_FloatingIsland_C::GetDefaultObj()
{
	static class UEmissaryDefault01_FloatingIsland_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmissaryDefault01_FloatingIsland_C*>(UEmissaryDefault01_FloatingIsland_C::StaticClass()->DefaultObject);

	return Default;
}

}


