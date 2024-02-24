#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSM_R.LapDanceSM_R_C
// (None)

class UClass* ULapDanceSM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSM_R_C");

	return Clss;
}


// LapDanceSM_R_C LapDanceSM_R.Default__LapDanceSM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSM_R_C* ULapDanceSM_R_C::GetDefaultObj()
{
	static class ULapDanceSM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSM_R_C*>(ULapDanceSM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


