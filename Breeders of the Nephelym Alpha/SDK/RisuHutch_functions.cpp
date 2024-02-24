#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RisuHutch.RisuHutch_C
// (None)

class UClass* URisuHutch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RisuHutch_C");

	return Clss;
}


// RisuHutch_C RisuHutch.Default__RisuHutch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URisuHutch_C* URisuHutch_C::GetDefaultObj()
{
	static class URisuHutch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URisuHutch_C*>(URisuHutch_C::StaticClass()->DefaultObject);

	return Default;
}

}


