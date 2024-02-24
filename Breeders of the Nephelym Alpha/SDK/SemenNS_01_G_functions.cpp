#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SemenNS_01_G.SemenNS_01_G_C
// (None)

class UClass* USemenNS_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SemenNS_01_G_C");

	return Clss;
}


// SemenNS_01_G_C SemenNS_01_G.Default__SemenNS_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USemenNS_01_G_C* USemenNS_01_G_C::GetDefaultObj()
{
	static class USemenNS_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USemenNS_01_G_C*>(USemenNS_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


