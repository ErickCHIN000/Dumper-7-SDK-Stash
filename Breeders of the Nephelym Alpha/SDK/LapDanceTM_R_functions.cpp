#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTM_R.LapDanceTM_R_C
// (None)

class UClass* ULapDanceTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTM_R_C");

	return Clss;
}


// LapDanceTM_R_C LapDanceTM_R.Default__LapDanceTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTM_R_C* ULapDanceTM_R_C::GetDefaultObj()
{
	static class ULapDanceTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTM_R_C*>(ULapDanceTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


