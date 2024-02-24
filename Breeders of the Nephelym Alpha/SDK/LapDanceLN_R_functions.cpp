#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceLN_R.LapDanceLN_R_C
// (None)

class UClass* ULapDanceLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceLN_R_C");

	return Clss;
}


// LapDanceLN_R_C LapDanceLN_R.Default__LapDanceLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceLN_R_C* ULapDanceLN_R_C::GetDefaultObj()
{
	static class ULapDanceLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceLN_R_C*>(ULapDanceLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


