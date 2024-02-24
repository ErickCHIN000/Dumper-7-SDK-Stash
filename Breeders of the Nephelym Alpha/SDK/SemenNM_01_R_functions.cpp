#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNM_01_R.SemenNM_01_R_C
// (None)

class UClass* USemenNM_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNM_01_R_C");

	return Clss;
}


// SemenNM_01_R_C SemenNM_01_R.Default__SemenNM_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNM_01_R_C* USemenNM_01_R_C::GetDefaultObj()
{
	static class USemenNM_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNM_01_R_C*>(USemenNM_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


