#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTL_R.LapDanceTL_R_C
// (None)

class UClass* ULapDanceTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTL_R_C");

	return Clss;
}


// LapDanceTL_R_C LapDanceTL_R.Default__LapDanceTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTL_R_C* ULapDanceTL_R_C::GetDefaultObj()
{
	static class ULapDanceTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTL_R_C*>(ULapDanceTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


