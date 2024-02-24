#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNT_01_R.SemenNT_01_R_C
// (None)

class UClass* USemenNT_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNT_01_R_C");

	return Clss;
}


// SemenNT_01_R_C SemenNT_01_R.Default__SemenNT_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNT_01_R_C* USemenNT_01_R_C::GetDefaultObj()
{
	static class USemenNT_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNT_01_R_C*>(USemenNT_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


