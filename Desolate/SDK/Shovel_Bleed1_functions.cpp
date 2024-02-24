#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shovel_Bleed1.Shovel_Bleed1_C
// (Actor)

class UClass* AShovel_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shovel_Bleed1_C");

	return Clss;
}


// Shovel_Bleed1_C Shovel_Bleed1.Default__Shovel_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShovel_Bleed1_C* AShovel_Bleed1_C::GetDefaultObj()
{
	static class AShovel_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShovel_Bleed1_C*>(AShovel_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}


