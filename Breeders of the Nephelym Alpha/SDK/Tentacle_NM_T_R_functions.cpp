#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tentacle_NM_T_R.Tentacle_NM_T_R_C
// (None)

class UClass* UTentacle_NM_T_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tentacle_NM_T_R_C");

	return Clss;
}


// Tentacle_NM_T_R_C Tentacle_NM_T_R.Default__Tentacle_NM_T_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTentacle_NM_T_R_C* UTentacle_NM_T_R_C::GetDefaultObj()
{
	static class UTentacle_NM_T_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTentacle_NM_T_R_C*>(UTentacle_NM_T_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


