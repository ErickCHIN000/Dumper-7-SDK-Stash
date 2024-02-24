#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedMN_R.LiftedMN_R_C
// (None)

class UClass* ULiftedMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedMN_R_C");

	return Clss;
}


// LiftedMN_R_C LiftedMN_R.Default__LiftedMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedMN_R_C* ULiftedMN_R_C::GetDefaultObj()
{
	static class ULiftedMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedMN_R_C*>(ULiftedMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


