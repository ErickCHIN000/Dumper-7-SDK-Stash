#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armature.Armature_C
// (Actor)

class UClass* AArmature_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armature_C");

	return Clss;
}


// Armature_C Armature.Default__Armature_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmature_C* AArmature_C::GetDefaultObj()
{
	static class AArmature_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmature_C*>(AArmature_C::StaticClass()->DefaultObject);

	return Default;
}

}


