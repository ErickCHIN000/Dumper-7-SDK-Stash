#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNH_01_G.SemenNH_01_G_C
// (None)

class UClass* USemenNH_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNH_01_G_C");

	return Clss;
}


// SemenNH_01_G_C SemenNH_01_G.Default__SemenNH_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNH_01_G_C* USemenNH_01_G_C::GetDefaultObj()
{
	static class USemenNH_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNH_01_G_C*>(USemenNH_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


