#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearAmbulanceWheel.BP_RearAmbulanceWheel_C
// (None)

class UClass* UBP_RearAmbulanceWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearAmbulanceWheel_C");

	return Clss;
}


// BP_RearAmbulanceWheel_C BP_RearAmbulanceWheel.Default__BP_RearAmbulanceWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearAmbulanceWheel_C* UBP_RearAmbulanceWheel_C::GetDefaultObj()
{
	static class UBP_RearAmbulanceWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearAmbulanceWheel_C*>(UBP_RearAmbulanceWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


