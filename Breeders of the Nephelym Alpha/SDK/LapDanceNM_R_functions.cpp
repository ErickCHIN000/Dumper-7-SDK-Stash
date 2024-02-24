#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNM_R.LapDanceNM_R_C
// (None)

class UClass* ULapDanceNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNM_R_C");

	return Clss;
}


// LapDanceNM_R_C LapDanceNM_R.Default__LapDanceNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNM_R_C* ULapDanceNM_R_C::GetDefaultObj()
{
	static class ULapDanceNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNM_R_C*>(ULapDanceNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


