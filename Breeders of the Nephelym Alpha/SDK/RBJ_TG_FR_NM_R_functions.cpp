#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RBJ_TG_FR_NM_R.RBJ_TG_FR_NM_R_C
// (None)

class UClass* URBJ_TG_FR_NM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RBJ_TG_FR_NM_R_C");

	return Clss;
}


// RBJ_TG_FR_NM_R_C RBJ_TG_FR_NM_R.Default__RBJ_TG_FR_NM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URBJ_TG_FR_NM_R_C* URBJ_TG_FR_NM_R_C::GetDefaultObj()
{
	static class URBJ_TG_FR_NM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URBJ_TG_FR_NM_R_C*>(URBJ_TG_FR_NM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


