#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLM_R.LapDanceLM_R_C
// (None)

class UClass* ULapDanceLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLM_R_C");

	return Clss;
}


// LapDanceLM_R_C LapDanceLM_R.Default__LapDanceLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLM_R_C* ULapDanceLM_R_C::GetDefaultObj()
{
	static class ULapDanceLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLM_R_C*>(ULapDanceLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


