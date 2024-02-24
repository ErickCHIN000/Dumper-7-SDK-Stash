#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceHM_R.LapDanceHM_R_C
// (None)

class UClass* ULapDanceHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceHM_R_C");

	return Clss;
}


// LapDanceHM_R_C LapDanceHM_R.Default__LapDanceHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceHM_R_C* ULapDanceHM_R_C::GetDefaultObj()
{
	static class ULapDanceHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceHM_R_C*>(ULapDanceHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


