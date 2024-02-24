#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecalMissileS.DecalMissileS_C
// (Actor)

class UClass* ADecalMissileS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecalMissileS_C");

	return Clss;
}


// DecalMissileS_C DecalMissileS.Default__DecalMissileS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADecalMissileS_C* ADecalMissileS_C::GetDefaultObj()
{
	static class ADecalMissileS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADecalMissileS_C*>(ADecalMissileS_C::StaticClass()->DefaultObject);

	return Default;
}

}


