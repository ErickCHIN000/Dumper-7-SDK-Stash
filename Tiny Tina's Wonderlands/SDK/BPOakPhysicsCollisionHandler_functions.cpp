#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPOakPhysicsCollisionHandler.BPOakPhysicsCollisionHandler_C
// (None)

class UClass* UBPOakPhysicsCollisionHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPOakPhysicsCollisionHandler_C");

	return Clss;
}


// BPOakPhysicsCollisionHandler_C BPOakPhysicsCollisionHandler.Default__BPOakPhysicsCollisionHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPOakPhysicsCollisionHandler_C* UBPOakPhysicsCollisionHandler_C::GetDefaultObj()
{
	static class UBPOakPhysicsCollisionHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPOakPhysicsCollisionHandler_C*>(UBPOakPhysicsCollisionHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


