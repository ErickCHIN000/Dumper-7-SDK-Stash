#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaToy_BreederF.LeylannaToy_BreederF_C
// (None)

class UClass* ULeylannaToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaToy_BreederF_C");

	return Clss;
}


// LeylannaToy_BreederF_C LeylannaToy_BreederF.Default__LeylannaToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaToy_BreederF_C* ULeylannaToy_BreederF_C::GetDefaultObj()
{
	static class ULeylannaToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaToy_BreederF_C*>(ULeylannaToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}


