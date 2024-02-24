#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MixedPlatter.MixedPlatter_C
// (Actor)

class UClass* AMixedPlatter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MixedPlatter_C");

	return Clss;
}


// MixedPlatter_C MixedPlatter.Default__MixedPlatter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMixedPlatter_C* AMixedPlatter_C::GetDefaultObj()
{
	static class AMixedPlatter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMixedPlatter_C*>(AMixedPlatter_C::StaticClass()->DefaultObject);

	return Default;
}

}


