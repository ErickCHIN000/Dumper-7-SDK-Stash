#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearTruckWheel.BP_RearTruckWheel_C
// (None)

class UClass* UBP_RearTruckWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearTruckWheel_C");

	return Clss;
}


// BP_RearTruckWheel_C BP_RearTruckWheel.Default__BP_RearTruckWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearTruckWheel_C* UBP_RearTruckWheel_C::GetDefaultObj()
{
	static class UBP_RearTruckWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearTruckWheel_C*>(UBP_RearTruckWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


