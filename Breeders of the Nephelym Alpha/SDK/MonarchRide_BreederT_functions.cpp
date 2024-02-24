#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MonarchRide_BreederT.MonarchRide_BreederT_C
// (None)

class UClass* UMonarchRide_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MonarchRide_BreederT_C");

	return Clss;
}


// MonarchRide_BreederT_C MonarchRide_BreederT.Default__MonarchRide_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMonarchRide_BreederT_C* UMonarchRide_BreederT_C::GetDefaultObj()
{
	static class UMonarchRide_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMonarchRide_BreederT_C*>(UMonarchRide_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}


