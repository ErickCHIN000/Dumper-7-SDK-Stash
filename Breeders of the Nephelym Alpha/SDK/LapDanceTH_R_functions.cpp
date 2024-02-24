#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LapDanceTH_R.LapDanceTH_R_C
// (None)

class UClass* ULapDanceTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LapDanceTH_R_C");

	return Clss;
}


// LapDanceTH_R_C LapDanceTH_R.Default__LapDanceTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULapDanceTH_R_C* ULapDanceTH_R_C::GetDefaultObj()
{
	static class ULapDanceTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULapDanceTH_R_C*>(ULapDanceTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


