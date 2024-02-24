#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_FindRoamLocation.NavFilter_FindRoamLocation_C
// (None)

class UClass* UNavFilter_FindRoamLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_FindRoamLocation_C");

	return Clss;
}


// NavFilter_FindRoamLocation_C NavFilter_FindRoamLocation.Default__NavFilter_FindRoamLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_FindRoamLocation_C* UNavFilter_FindRoamLocation_C::GetDefaultObj()
{
	static class UNavFilter_FindRoamLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_FindRoamLocation_C*>(UNavFilter_FindRoamLocation_C::StaticClass()->DefaultObject);

	return Default;
}

}


