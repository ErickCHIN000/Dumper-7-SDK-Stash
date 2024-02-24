#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedHS_R.LiftedHS_R_C
// (None)

class UClass* ULiftedHS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedHS_R_C");

	return Clss;
}


// LiftedHS_R_C LiftedHS_R.Default__LiftedHS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedHS_R_C* ULiftedHS_R_C::GetDefaultObj()
{
	static class ULiftedHS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedHS_R_C*>(ULiftedHS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


