#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol2.Pistol2_C
// (Actor)

class UClass* APistol2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol2_C");

	return Clss;
}


// Pistol2_C Pistol2.Default__Pistol2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APistol2_C* APistol2_C::GetDefaultObj()
{
	static class APistol2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APistol2_C*>(APistol2_C::StaticClass()->DefaultObject);

	return Default;
}

}


