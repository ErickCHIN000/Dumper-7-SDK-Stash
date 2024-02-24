#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shovel_Strong1.Shovel_Strong1_C
// (Actor)

class UClass* AShovel_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shovel_Strong1_C");

	return Clss;
}


// Shovel_Strong1_C Shovel_Strong1.Default__Shovel_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShovel_Strong1_C* AShovel_Strong1_C::GetDefaultObj()
{
	static class AShovel_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShovel_Strong1_C*>(AShovel_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}


