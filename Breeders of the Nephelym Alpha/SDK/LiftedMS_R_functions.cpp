#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedMS_R.LiftedMS_R_C
// (None)

class UClass* ULiftedMS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedMS_R_C");

	return Clss;
}


// LiftedMS_R_C LiftedMS_R.Default__LiftedMS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedMS_R_C* ULiftedMS_R_C::GetDefaultObj()
{
	static class ULiftedMS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedMS_R_C*>(ULiftedMS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


