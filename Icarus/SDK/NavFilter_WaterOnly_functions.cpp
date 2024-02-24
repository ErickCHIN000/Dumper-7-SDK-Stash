#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_WaterOnly.NavFilter_WaterOnly_C
// (None)

class UClass* UNavFilter_WaterOnly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_WaterOnly_C");

	return Clss;
}


// NavFilter_WaterOnly_C NavFilter_WaterOnly.Default__NavFilter_WaterOnly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_WaterOnly_C* UNavFilter_WaterOnly_C::GetDefaultObj()
{
	static class UNavFilter_WaterOnly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_WaterOnly_C*>(UNavFilter_WaterOnly_C::StaticClass()->DefaultObject);

	return Default;
}

}


