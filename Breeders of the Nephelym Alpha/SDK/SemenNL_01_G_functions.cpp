#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNL_01_G.SemenNL_01_G_C
// (None)

class UClass* USemenNL_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNL_01_G_C");

	return Clss;
}


// SemenNL_01_G_C SemenNL_01_G.Default__SemenNL_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNL_01_G_C* USemenNL_01_G_C::GetDefaultObj()
{
	static class USemenNL_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNL_01_G_C*>(USemenNL_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


