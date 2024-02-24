#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vampire_RootMotionMovementTask_Child.Vampire_RootMotionMovementTask_Child_C
// (None)

class UClass* UVampire_RootMotionMovementTask_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vampire_RootMotionMovementTask_Child_C");

	return Clss;
}


// Vampire_RootMotionMovementTask_Child_C Vampire_RootMotionMovementTask_Child.Default__Vampire_RootMotionMovementTask_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVampire_RootMotionMovementTask_Child_C* UVampire_RootMotionMovementTask_Child_C::GetDefaultObj()
{
	static class UVampire_RootMotionMovementTask_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVampire_RootMotionMovementTask_Child_C*>(UVampire_RootMotionMovementTask_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


