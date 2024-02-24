#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DecalLanded.DecalLanded_C
// (Actor)

class UClass* ADecalLanded_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DecalLanded_C");

	return Clss;
}


// DecalLanded_C DecalLanded.Default__DecalLanded_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADecalLanded_C* ADecalLanded_C::GetDefaultObj()
{
	static class ADecalLanded_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADecalLanded_C*>(ADecalLanded_C::StaticClass()->DefaultObject);

	return Default;
}

}


