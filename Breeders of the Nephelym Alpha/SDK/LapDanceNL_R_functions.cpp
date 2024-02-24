#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNL_R.LapDanceNL_R_C
// (None)

class UClass* ULapDanceNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNL_R_C");

	return Clss;
}


// LapDanceNL_R_C LapDanceNL_R.Default__LapDanceNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNL_R_C* ULapDanceNL_R_C::GetDefaultObj()
{
	static class ULapDanceNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNL_R_C*>(ULapDanceNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


