#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLH_R.LapDanceLH_R_C
// (None)

class UClass* ULapDanceLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLH_R_C");

	return Clss;
}


// LapDanceLH_R_C LapDanceLH_R.Default__LapDanceLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLH_R_C* ULapDanceLH_R_C::GetDefaultObj()
{
	static class ULapDanceLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLH_R_C*>(ULapDanceLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


