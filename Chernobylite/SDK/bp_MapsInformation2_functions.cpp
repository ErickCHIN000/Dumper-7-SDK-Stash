#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_MapsInformation2.bp_MapsInformation2_C
// (None)

class UClass* Ubp_MapsInformation2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_MapsInformation2_C");

	return Clss;
}


// bp_MapsInformation2_C bp_MapsInformation2.Default__bp_MapsInformation2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubp_MapsInformation2_C* Ubp_MapsInformation2_C::GetDefaultObj()
{
	static class Ubp_MapsInformation2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubp_MapsInformation2_C*>(Ubp_MapsInformation2_C::StaticClass()->DefaultObject);

	return Default;
}

}


