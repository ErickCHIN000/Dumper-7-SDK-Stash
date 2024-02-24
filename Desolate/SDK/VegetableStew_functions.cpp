#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VegetableStew.VegetableStew_C
// (Actor)

class UClass* AVegetableStew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VegetableStew_C");

	return Clss;
}


// VegetableStew_C VegetableStew.Default__VegetableStew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVegetableStew_C* AVegetableStew_C::GetDefaultObj()
{
	static class AVegetableStew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVegetableStew_C*>(AVegetableStew_C::StaticClass()->DefaultObject);

	return Default;
}

}


