#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNS_01_R.SemenNS_01_R_C
// (None)

class UClass* USemenNS_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNS_01_R_C");

	return Clss;
}


// SemenNS_01_R_C SemenNS_01_R.Default__SemenNS_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNS_01_R_C* USemenNS_01_R_C::GetDefaultObj()
{
	static class USemenNS_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNS_01_R_C*>(USemenNS_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


