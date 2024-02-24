#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ACond_High_GroundSlam_Enter.ACond_High_GroundSlam_Enter_C
// (None)

class UClass* UACond_High_GroundSlam_Enter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ACond_High_GroundSlam_Enter_C");

	return Clss;
}


// ACond_High_GroundSlam_Enter_C ACond_High_GroundSlam_Enter.Default__ACond_High_GroundSlam_Enter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UACond_High_GroundSlam_Enter_C* UACond_High_GroundSlam_Enter_C::GetDefaultObj()
{
	static class UACond_High_GroundSlam_Enter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UACond_High_GroundSlam_Enter_C*>(UACond_High_GroundSlam_Enter_C::StaticClass()->DefaultObject);

	return Default;
}

}


