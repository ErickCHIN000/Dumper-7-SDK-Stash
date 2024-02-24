#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RisuBunnyT.RisuBunnyT_C
// (None)

class UClass* URisuBunnyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RisuBunnyT_C");

	return Clss;
}


// RisuBunnyT_C RisuBunnyT.Default__RisuBunnyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URisuBunnyT_C* URisuBunnyT_C::GetDefaultObj()
{
	static class URisuBunnyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URisuBunnyT_C*>(URisuBunnyT_C::StaticClass()->DefaultObject);

	return Default;
}

}


