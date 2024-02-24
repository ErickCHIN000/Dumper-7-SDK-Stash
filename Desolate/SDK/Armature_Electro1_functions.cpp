#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Armature_Electro1.Armature_Electro1_C
// (Actor)

class UClass* AArmature_Electro1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Armature_Electro1_C");

	return Clss;
}


// Armature_Electro1_C Armature_Electro1.Default__Armature_Electro1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArmature_Electro1_C* AArmature_Electro1_C::GetDefaultObj()
{
	static class AArmature_Electro1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArmature_Electro1_C*>(AArmature_Electro1_C::StaticClass()->DefaultObject);

	return Default;
}

}


