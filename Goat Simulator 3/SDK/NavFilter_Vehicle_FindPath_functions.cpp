#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_Vehicle_FindPath.NavFilter_Vehicle_FindPath_C
// (None)

class UClass* UNavFilter_Vehicle_FindPath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_Vehicle_FindPath_C");

	return Clss;
}


// NavFilter_Vehicle_FindPath_C NavFilter_Vehicle_FindPath.Default__NavFilter_Vehicle_FindPath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_Vehicle_FindPath_C* UNavFilter_Vehicle_FindPath_C::GetDefaultObj()
{
	static class UNavFilter_Vehicle_FindPath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_Vehicle_FindPath_C*>(UNavFilter_Vehicle_FindPath_C::StaticClass()->DefaultObject);

	return Default;
}

}


