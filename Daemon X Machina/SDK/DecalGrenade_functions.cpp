#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecalGrenade.DecalGrenade_C
// (Actor)

class UClass* ADecalGrenade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecalGrenade_C");

	return Clss;
}


// DecalGrenade_C DecalGrenade.Default__DecalGrenade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADecalGrenade_C* ADecalGrenade_C::GetDefaultObj()
{
	static class ADecalGrenade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADecalGrenade_C*>(ADecalGrenade_C::StaticClass()->DefaultObject);

	return Default;
}

}


