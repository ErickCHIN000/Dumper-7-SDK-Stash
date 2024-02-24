#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RisuBunnyF.RisuBunnyF_C
// (None)

class UClass* URisuBunnyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RisuBunnyF_C");

	return Clss;
}


// RisuBunnyF_C RisuBunnyF.Default__RisuBunnyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URisuBunnyF_C* URisuBunnyF_C::GetDefaultObj()
{
	static class URisuBunnyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URisuBunnyF_C*>(URisuBunnyF_C::StaticClass()->DefaultObject);

	return Default;
}

}


