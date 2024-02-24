#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedHN_R.LiftedHN_R_C
// (None)

class UClass* ULiftedHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedHN_R_C");

	return Clss;
}


// LiftedHN_R_C LiftedHN_R.Default__LiftedHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedHN_R_C* ULiftedHN_R_C::GetDefaultObj()
{
	static class ULiftedHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedHN_R_C*>(ULiftedHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


