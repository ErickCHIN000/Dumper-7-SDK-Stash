#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armature_Poison1.Armature_Poison1_C
// (Actor)

class UClass* AArmature_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armature_Poison1_C");

	return Clss;
}


// Armature_Poison1_C Armature_Poison1.Default__Armature_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmature_Poison1_C* AArmature_Poison1_C::GetDefaultObj()
{
	static class AArmature_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmature_Poison1_C*>(AArmature_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}


