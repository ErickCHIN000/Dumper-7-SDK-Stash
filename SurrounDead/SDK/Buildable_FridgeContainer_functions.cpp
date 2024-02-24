#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Buildable_FridgeContainer.Buildable_FridgeContainer_C
// (Actor)

class UClass* ABuildable_FridgeContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Buildable_FridgeContainer_C");

	return Clss;
}


// Buildable_FridgeContainer_C Buildable_FridgeContainer.Default__Buildable_FridgeContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABuildable_FridgeContainer_C* ABuildable_FridgeContainer_C::GetDefaultObj()
{
	static class ABuildable_FridgeContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABuildable_FridgeContainer_C*>(ABuildable_FridgeContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


