#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedMH_R.LiftedMH_R_C
// (None)

class UClass* ULiftedMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedMH_R_C");

	return Clss;
}


// LiftedMH_R_C LiftedMH_R.Default__LiftedMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedMH_R_C* ULiftedMH_R_C::GetDefaultObj()
{
	static class ULiftedMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedMH_R_C*>(ULiftedMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


