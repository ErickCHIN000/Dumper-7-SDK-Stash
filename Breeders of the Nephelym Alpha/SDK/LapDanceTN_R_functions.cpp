#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTN_R.LapDanceTN_R_C
// (None)

class UClass* ULapDanceTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTN_R_C");

	return Clss;
}


// LapDanceTN_R_C LapDanceTN_R.Default__LapDanceTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTN_R_C* ULapDanceTN_R_C::GetDefaultObj()
{
	static class ULapDanceTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTN_R_C*>(ULapDanceTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


