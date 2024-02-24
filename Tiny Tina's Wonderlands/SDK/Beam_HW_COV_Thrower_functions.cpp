#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Beam_HW_COV_Thrower.Beam_HW_COV_Thrower_C
// (None)

class UClass* UBeam_HW_COV_Thrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Beam_HW_COV_Thrower_C");

	return Clss;
}


// Beam_HW_COV_Thrower_C Beam_HW_COV_Thrower.Default__Beam_HW_COV_Thrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeam_HW_COV_Thrower_C* UBeam_HW_COV_Thrower_C::GetDefaultObj()
{
	static class UBeam_HW_COV_Thrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeam_HW_COV_Thrower_C*>(UBeam_HW_COV_Thrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


