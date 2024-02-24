#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedML_R.LiftedML_R_C
// (None)

class UClass* ULiftedML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedML_R_C");

	return Clss;
}


// LiftedML_R_C LiftedML_R.Default__LiftedML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedML_R_C* ULiftedML_R_C::GetDefaultObj()
{
	static class ULiftedML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedML_R_C*>(ULiftedML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


