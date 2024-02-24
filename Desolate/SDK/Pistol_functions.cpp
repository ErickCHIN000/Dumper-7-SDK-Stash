#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol.Pistol_C
// (Actor)

class UClass* APistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol_C");

	return Clss;
}


// Pistol_C Pistol.Default__Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APistol_C* APistol_C::GetDefaultObj()
{
	static class APistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APistol_C*>(APistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


