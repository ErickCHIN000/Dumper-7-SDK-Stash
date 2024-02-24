#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wraith_RootMotionMovementTask_Child.Wraith_RootMotionMovementTask_Child_C
// (None)

class UClass* UWraith_RootMotionMovementTask_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wraith_RootMotionMovementTask_Child_C");

	return Clss;
}


// Wraith_RootMotionMovementTask_Child_C Wraith_RootMotionMovementTask_Child.Default__Wraith_RootMotionMovementTask_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWraith_RootMotionMovementTask_Child_C* UWraith_RootMotionMovementTask_Child_C::GetDefaultObj()
{
	static class UWraith_RootMotionMovementTask_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWraith_RootMotionMovementTask_Child_C*>(UWraith_RootMotionMovementTask_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


