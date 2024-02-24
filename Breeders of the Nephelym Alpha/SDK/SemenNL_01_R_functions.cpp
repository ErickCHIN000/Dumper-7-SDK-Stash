#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNL_01_R.SemenNL_01_R_C
// (None)

class UClass* USemenNL_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNL_01_R_C");

	return Clss;
}


// SemenNL_01_R_C SemenNL_01_R.Default__SemenNL_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNL_01_R_C* USemenNL_01_R_C::GetDefaultObj()
{
	static class USemenNL_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNL_01_R_C*>(USemenNL_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


