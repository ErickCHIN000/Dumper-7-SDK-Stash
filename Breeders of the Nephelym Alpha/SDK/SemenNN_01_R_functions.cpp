#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNN_01_R.SemenNN_01_R_C
// (None)

class UClass* USemenNN_01_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNN_01_R_C");

	return Clss;
}


// SemenNN_01_R_C SemenNN_01_R.Default__SemenNN_01_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNN_01_R_C* USemenNN_01_R_C::GetDefaultObj()
{
	static class USemenNN_01_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNN_01_R_C*>(USemenNN_01_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


