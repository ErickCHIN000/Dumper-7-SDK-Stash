#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_Vehicle_FindDriveLoc.NavFilter_Vehicle_FindDriveLoc_C
// (None)

class UClass* UNavFilter_Vehicle_FindDriveLoc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_Vehicle_FindDriveLoc_C");

	return Clss;
}


// NavFilter_Vehicle_FindDriveLoc_C NavFilter_Vehicle_FindDriveLoc.Default__NavFilter_Vehicle_FindDriveLoc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_Vehicle_FindDriveLoc_C* UNavFilter_Vehicle_FindDriveLoc_C::GetDefaultObj()
{
	static class UNavFilter_Vehicle_FindDriveLoc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_Vehicle_FindDriveLoc_C*>(UNavFilter_Vehicle_FindDriveLoc_C::StaticClass()->DefaultObject);

	return Default;
}

}


