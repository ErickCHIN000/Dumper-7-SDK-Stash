#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontAmbulanceWheel.BP_FrontAmbulanceWheel_C
// (None)

class UClass* UBP_FrontAmbulanceWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontAmbulanceWheel_C");

	return Clss;
}


// BP_FrontAmbulanceWheel_C BP_FrontAmbulanceWheel.Default__BP_FrontAmbulanceWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontAmbulanceWheel_C* UBP_FrontAmbulanceWheel_C::GetDefaultObj()
{
	static class UBP_FrontAmbulanceWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontAmbulanceWheel_C*>(UBP_FrontAmbulanceWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


