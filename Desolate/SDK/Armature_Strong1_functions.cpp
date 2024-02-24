#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armature_Strong1.Armature_Strong1_C
// (Actor)

class UClass* AArmature_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armature_Strong1_C");

	return Clss;
}


// Armature_Strong1_C Armature_Strong1.Default__Armature_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmature_Strong1_C* AArmature_Strong1_C::GetDefaultObj()
{
	static class AArmature_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmature_Strong1_C*>(AArmature_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


