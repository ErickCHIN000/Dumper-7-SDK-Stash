#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Axe_Strong1.Axe_Strong1_C
// (Actor)

class UClass* AAxe_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Axe_Strong1_C");

	return Clss;
}


// Axe_Strong1_C Axe_Strong1.Default__Axe_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAxe_Strong1_C* AAxe_Strong1_C::GetDefaultObj()
{
	static class AAxe_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAxe_Strong1_C*>(AAxe_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


