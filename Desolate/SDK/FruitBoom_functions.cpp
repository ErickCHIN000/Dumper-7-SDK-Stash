#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FruitBoom.FruitBoom_C
// (Actor)

class UClass* AFruitBoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FruitBoom_C");

	return Clss;
}


// FruitBoom_C FruitBoom.Default__FruitBoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFruitBoom_C* AFruitBoom_C::GetDefaultObj()
{
	static class AFruitBoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFruitBoom_C*>(AFruitBoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


