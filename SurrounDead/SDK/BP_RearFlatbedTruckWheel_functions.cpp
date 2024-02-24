#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearFlatbedTruckWheel.BP_RearFlatbedTruckWheel_C
// (None)

class UClass* UBP_RearFlatbedTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearFlatbedTruckWheel_C");

	return Clss;
}


// BP_RearFlatbedTruckWheel_C BP_RearFlatbedTruckWheel.Default__BP_RearFlatbedTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearFlatbedTruckWheel_C* UBP_RearFlatbedTruckWheel_C::GetDefaultObj()
{
	static class UBP_RearFlatbedTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearFlatbedTruckWheel_C*>(UBP_RearFlatbedTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


