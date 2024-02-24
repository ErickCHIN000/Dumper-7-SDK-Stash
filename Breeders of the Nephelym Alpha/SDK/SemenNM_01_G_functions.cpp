#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNM_01_G.SemenNM_01_G_C
// (None)

class UClass* USemenNM_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNM_01_G_C");

	return Clss;
}


// SemenNM_01_G_C SemenNM_01_G.Default__SemenNM_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNM_01_G_C* USemenNM_01_G_C::GetDefaultObj()
{
	static class USemenNM_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNM_01_G_C*>(USemenNM_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


