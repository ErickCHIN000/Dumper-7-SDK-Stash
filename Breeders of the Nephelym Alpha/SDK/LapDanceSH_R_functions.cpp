#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceSH_R.LapDanceSH_R_C
// (None)

class UClass* ULapDanceSH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceSH_R_C");

	return Clss;
}


// LapDanceSH_R_C LapDanceSH_R.Default__LapDanceSH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceSH_R_C* ULapDanceSH_R_C::GetDefaultObj()
{
	static class ULapDanceSH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceSH_R_C*>(ULapDanceSH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


