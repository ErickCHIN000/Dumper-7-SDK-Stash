#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTS_R.LapDanceTS_R_C
// (None)

class UClass* ULapDanceTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTS_R_C");

	return Clss;
}


// LapDanceTS_R_C LapDanceTS_R.Default__LapDanceTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTS_R_C* ULapDanceTS_R_C::GetDefaultObj()
{
	static class ULapDanceTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTS_R_C*>(ULapDanceTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


