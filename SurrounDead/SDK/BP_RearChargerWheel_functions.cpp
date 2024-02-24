#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearChargerWheel.BP_RearChargerWheel_C
// (None)

class UClass* UBP_RearChargerWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearChargerWheel_C");

	return Clss;
}


// BP_RearChargerWheel_C BP_RearChargerWheel.Default__BP_RearChargerWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearChargerWheel_C* UBP_RearChargerWheel_C::GetDefaultObj()
{
	static class UBP_RearChargerWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearChargerWheel_C*>(UBP_RearChargerWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


