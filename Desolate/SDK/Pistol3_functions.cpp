#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Pistol3.Pistol3_C
// (Actor)

class UClass* APistol3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Pistol3_C");

	return Clss;
}


// Pistol3_C Pistol3.Default__Pistol3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APistol3_C* APistol3_C::GetDefaultObj()
{
	static class APistol3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APistol3_C*>(APistol3_C::StaticClass()->DefaultObject);

	return Default;
}

}


