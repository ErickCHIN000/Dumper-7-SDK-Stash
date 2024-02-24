#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNT_01_G.SemenNT_01_G_C
// (None)

class UClass* USemenNT_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNT_01_G_C");

	return Clss;
}


// SemenNT_01_G_C SemenNT_01_G.Default__SemenNT_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNT_01_G_C* USemenNT_01_G_C::GetDefaultObj()
{
	static class USemenNT_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNT_01_G_C*>(USemenNT_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


