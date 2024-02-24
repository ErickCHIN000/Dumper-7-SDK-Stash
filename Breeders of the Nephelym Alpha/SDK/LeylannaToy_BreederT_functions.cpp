#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LeylannaToy_BreederT.LeylannaToy_BreederT_C
// (None)

class UClass* ULeylannaToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeylannaToy_BreederT_C");

	return Clss;
}


// LeylannaToy_BreederT_C LeylannaToy_BreederT.Default__LeylannaToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeylannaToy_BreederT_C* ULeylannaToy_BreederT_C::GetDefaultObj()
{
	static class ULeylannaToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeylannaToy_BreederT_C*>(ULeylannaToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


