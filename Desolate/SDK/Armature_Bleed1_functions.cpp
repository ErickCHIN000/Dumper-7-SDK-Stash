#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armature_Bleed1.Armature_Bleed1_C
// (Actor)

class UClass* AArmature_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armature_Bleed1_C");

	return Clss;
}


// Armature_Bleed1_C Armature_Bleed1.Default__Armature_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmature_Bleed1_C* AArmature_Bleed1_C::GetDefaultObj()
{
	static class AArmature_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmature_Bleed1_C*>(AArmature_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


