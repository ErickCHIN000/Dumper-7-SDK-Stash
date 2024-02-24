#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceST_R.LapDanceST_R_C
// (None)

class UClass* ULapDanceST_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceST_R_C");

	return Clss;
}


// LapDanceST_R_C LapDanceST_R.Default__LapDanceST_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceST_R_C* ULapDanceST_R_C::GetDefaultObj()
{
	static class ULapDanceST_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceST_R_C*>(ULapDanceST_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


