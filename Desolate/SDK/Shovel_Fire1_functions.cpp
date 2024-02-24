#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shovel_Fire1.Shovel_Fire1_C
// (Actor)

class UClass* AShovel_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shovel_Fire1_C");

	return Clss;
}


// Shovel_Fire1_C Shovel_Fire1.Default__Shovel_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShovel_Fire1_C* AShovel_Fire1_C::GetDefaultObj()
{
	static class AShovel_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShovel_Fire1_C*>(AShovel_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}


