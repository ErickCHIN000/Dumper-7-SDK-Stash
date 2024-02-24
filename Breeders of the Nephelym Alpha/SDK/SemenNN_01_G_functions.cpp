#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNN_01_G.SemenNN_01_G_C
// (None)

class UClass* USemenNN_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNN_01_G_C");

	return Clss;
}


// SemenNN_01_G_C SemenNN_01_G.Default__SemenNN_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNN_01_G_C* USemenNN_01_G_C::GetDefaultObj()
{
	static class USemenNN_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNN_01_G_C*>(USemenNN_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


