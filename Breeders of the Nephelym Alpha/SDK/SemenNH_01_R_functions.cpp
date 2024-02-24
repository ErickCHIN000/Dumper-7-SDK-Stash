#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNH_01_R.SemenNH_01_R_C
// (None)

class UClass* USemenNH_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNH_01_R_C");

	return Clss;
}


// SemenNH_01_R_C SemenNH_01_R.Default__SemenNH_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNH_01_R_C* USemenNH_01_R_C::GetDefaultObj()
{
	static class USemenNH_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNH_01_R_C*>(USemenNH_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


