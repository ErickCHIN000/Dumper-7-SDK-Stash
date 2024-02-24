#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_AllowAllAreas.NavFilter_AllowAllAreas_C
// (None)

class UClass* UNavFilter_AllowAllAreas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_AllowAllAreas_C");

	return Clss;
}


// NavFilter_AllowAllAreas_C NavFilter_AllowAllAreas.Default__NavFilter_AllowAllAreas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_AllowAllAreas_C* UNavFilter_AllowAllAreas_C::GetDefaultObj()
{
	static class UNavFilter_AllowAllAreas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_AllowAllAreas_C*>(UNavFilter_AllowAllAreas_C::StaticClass()->DefaultObject);

	return Default;
}

}


