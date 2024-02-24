#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_AvoidWater.NavFilter_AvoidWater_C
// (None)

class UClass* UNavFilter_AvoidWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_AvoidWater_C");

	return Clss;
}


// NavFilter_AvoidWater_C NavFilter_AvoidWater.Default__NavFilter_AvoidWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_AvoidWater_C* UNavFilter_AvoidWater_C::GetDefaultObj()
{
	static class UNavFilter_AvoidWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_AvoidWater_C*>(UNavFilter_AvoidWater_C::StaticClass()->DefaultObject);

	return Default;
}

}


