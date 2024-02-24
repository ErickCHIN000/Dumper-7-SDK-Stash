#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeavyBrig_RootMotionMovementTask_Child.HeavyBrig_RootMotionMovementTask_Child_C
// (None)

class UClass* UHeavyBrig_RootMotionMovementTask_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeavyBrig_RootMotionMovementTask_Child_C");

	return Clss;
}


// HeavyBrig_RootMotionMovementTask_Child_C HeavyBrig_RootMotionMovementTask_Child.Default__HeavyBrig_RootMotionMovementTask_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeavyBrig_RootMotionMovementTask_Child_C* UHeavyBrig_RootMotionMovementTask_Child_C::GetDefaultObj()
{
	static class UHeavyBrig_RootMotionMovementTask_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeavyBrig_RootMotionMovementTask_Child_C*>(UHeavyBrig_RootMotionMovementTask_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


