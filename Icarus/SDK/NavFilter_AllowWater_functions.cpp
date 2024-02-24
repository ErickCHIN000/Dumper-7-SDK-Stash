#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_AllowWater.NavFilter_AllowWater_C
// (None)

class UClass* UNavFilter_AllowWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_AllowWater_C");

	return Clss;
}


// NavFilter_AllowWater_C NavFilter_AllowWater.Default__NavFilter_AllowWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_AllowWater_C* UNavFilter_AllowWater_C::GetDefaultObj()
{
	static class UNavFilter_AllowWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_AllowWater_C*>(UNavFilter_AllowWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


