#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LiftedHT_R.LiftedHT_R_C
// (None)

class UClass* ULiftedHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LiftedHT_R_C");

	return Clss;
}


// LiftedHT_R_C LiftedHT_R.Default__LiftedHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULiftedHT_R_C* ULiftedHT_R_C::GetDefaultObj()
{
	static class ULiftedHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULiftedHT_R_C*>(ULiftedHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


