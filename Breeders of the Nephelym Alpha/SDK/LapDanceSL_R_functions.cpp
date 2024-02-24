#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSL_R.LapDanceSL_R_C
// (None)

class UClass* ULapDanceSL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSL_R_C");

	return Clss;
}


// LapDanceSL_R_C LapDanceSL_R.Default__LapDanceSL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSL_R_C* ULapDanceSL_R_C::GetDefaultObj()
{
	static class ULapDanceSL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSL_R_C*>(ULapDanceSL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


