#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNT_R.LapDanceNT_R_C
// (None)

class UClass* ULapDanceNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNT_R_C");

	return Clss;
}


// LapDanceNT_R_C LapDanceNT_R.Default__LapDanceNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNT_R_C* ULapDanceNT_R_C::GetDefaultObj()
{
	static class ULapDanceNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNT_R_C*>(ULapDanceNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


