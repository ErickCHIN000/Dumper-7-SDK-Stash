#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedLT_R.LiftedLT_R_C
// (None)

class UClass* ULiftedLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedLT_R_C");

	return Clss;
}


// LiftedLT_R_C LiftedLT_R.Default__LiftedLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedLT_R_C* ULiftedLT_R_C::GetDefaultObj()
{
	static class ULiftedLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedLT_R_C*>(ULiftedLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


