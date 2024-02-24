#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontChargerWheel.BP_FrontChargerWheel_C
// (None)

class UClass* UBP_FrontChargerWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontChargerWheel_C");

	return Clss;
}


// BP_FrontChargerWheel_C BP_FrontChargerWheel.Default__BP_FrontChargerWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontChargerWheel_C* UBP_FrontChargerWheel_C::GetDefaultObj()
{
	static class UBP_FrontChargerWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontChargerWheel_C*>(UBP_FrontChargerWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


