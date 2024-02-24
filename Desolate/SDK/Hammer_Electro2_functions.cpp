#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hammer_Electro2.Hammer_Electro2_C
// (Actor)

class UClass* AHammer_Electro2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hammer_Electro2_C");

	return Clss;
}


// Hammer_Electro2_C Hammer_Electro2.Default__Hammer_Electro2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHammer_Electro2_C* AHammer_Electro2_C::GetDefaultObj()
{
	static class AHammer_Electro2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHammer_Electro2_C*>(AHammer_Electro2_C::StaticClass()->DefaultObject);

	return Default;
}

}


