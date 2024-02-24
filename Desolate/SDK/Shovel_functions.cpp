#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shovel.Shovel_C
// (Actor)

class UClass* AShovel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shovel_C");

	return Clss;
}


// Shovel_C Shovel.Default__Shovel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShovel_C* AShovel_C::GetDefaultObj()
{
	static class AShovel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShovel_C*>(AShovel_C::StaticClass()->DefaultObject);

	return Default;
}

}


