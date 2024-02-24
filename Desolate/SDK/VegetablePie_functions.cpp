#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VegetablePie.VegetablePie_C
// (Actor)

class UClass* AVegetablePie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VegetablePie_C");

	return Clss;
}


// VegetablePie_C VegetablePie.Default__VegetablePie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVegetablePie_C* AVegetablePie_C::GetDefaultObj()
{
	static class AVegetablePie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVegetablePie_C*>(AVegetablePie_C::StaticClass()->DefaultObject);

	return Default;
}

}


