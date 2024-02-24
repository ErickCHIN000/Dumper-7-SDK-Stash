#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tentacle_NL_T_R.Tentacle_NL_T_R_C
// (None)

class UClass* UTentacle_NL_T_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tentacle_NL_T_R_C");

	return Clss;
}


// Tentacle_NL_T_R_C Tentacle_NL_T_R.Default__Tentacle_NL_T_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTentacle_NL_T_R_C* UTentacle_NL_T_R_C::GetDefaultObj()
{
	static class UTentacle_NL_T_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTentacle_NL_T_R_C*>(UTentacle_NL_T_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


