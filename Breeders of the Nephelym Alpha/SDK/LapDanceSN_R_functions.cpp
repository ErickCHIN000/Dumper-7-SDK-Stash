#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSN_R.LapDanceSN_R_C
// (None)

class UClass* ULapDanceSN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSN_R_C");

	return Clss;
}


// LapDanceSN_R_C LapDanceSN_R.Default__LapDanceSN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSN_R_C* ULapDanceSN_R_C::GetDefaultObj()
{
	static class ULapDanceSN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSN_R_C*>(ULapDanceSN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


