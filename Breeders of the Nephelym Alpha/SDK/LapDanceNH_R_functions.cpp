#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNH_R.LapDanceNH_R_C
// (None)

class UClass* ULapDanceNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNH_R_C");

	return Clss;
}


// LapDanceNH_R_C LapDanceNH_R.Default__LapDanceNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNH_R_C* ULapDanceNH_R_C::GetDefaultObj()
{
	static class ULapDanceNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNH_R_C*>(ULapDanceNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


