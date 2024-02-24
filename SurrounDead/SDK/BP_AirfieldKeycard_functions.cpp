#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AirfieldKeycard.BP_AirfieldKeycard_C
// (Actor)

class UClass* ABP_AirfieldKeycard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AirfieldKeycard_C");

	return Clss;
}


// BP_AirfieldKeycard_C BP_AirfieldKeycard.Default__BP_AirfieldKeycard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AirfieldKeycard_C* ABP_AirfieldKeycard_C::GetDefaultObj()
{
	static class ABP_AirfieldKeycard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AirfieldKeycard_C*>(ABP_AirfieldKeycard_C::StaticClass()->DefaultObject);

	return Default;
}

}


