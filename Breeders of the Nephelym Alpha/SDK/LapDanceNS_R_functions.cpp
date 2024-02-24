#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNS_R.LapDanceNS_R_C
// (None)

class UClass* ULapDanceNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNS_R_C");

	return Clss;
}


// LapDanceNS_R_C LapDanceNS_R.Default__LapDanceNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNS_R_C* ULapDanceNS_R_C::GetDefaultObj()
{
	static class ULapDanceNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNS_R_C*>(ULapDanceNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


