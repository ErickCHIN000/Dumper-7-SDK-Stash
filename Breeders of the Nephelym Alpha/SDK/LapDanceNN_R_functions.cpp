#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceNN_R.LapDanceNN_R_C
// (None)

class UClass* ULapDanceNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceNN_R_C");

	return Clss;
}


// LapDanceNN_R_C LapDanceNN_R.Default__LapDanceNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceNN_R_C* ULapDanceNN_R_C::GetDefaultObj()
{
	static class ULapDanceNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceNN_R_C*>(ULapDanceNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


