#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLS_R.LapDanceLS_R_C
// (None)

class UClass* ULapDanceLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLS_R_C");

	return Clss;
}


// LapDanceLS_R_C LapDanceLS_R.Default__LapDanceLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLS_R_C* ULapDanceLS_R_C::GetDefaultObj()
{
	static class ULapDanceLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLS_R_C*>(ULapDanceLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


