#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armature_Fire1.Armature_Fire1_C
// (Actor)

class UClass* AArmature_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armature_Fire1_C");

	return Clss;
}


// Armature_Fire1_C Armature_Fire1.Default__Armature_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmature_Fire1_C* AArmature_Fire1_C::GetDefaultObj()
{
	static class AArmature_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmature_Fire1_C*>(AArmature_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


