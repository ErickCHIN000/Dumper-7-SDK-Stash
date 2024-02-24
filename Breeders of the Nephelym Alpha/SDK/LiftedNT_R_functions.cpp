#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedNT_R.LiftedNT_R_C
// (None)

class UClass* ULiftedNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedNT_R_C");

	return Clss;
}


// LiftedNT_R_C LiftedNT_R.Default__LiftedNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedNT_R_C* ULiftedNT_R_C::GetDefaultObj()
{
	static class ULiftedNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedNT_R_C*>(ULiftedNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


