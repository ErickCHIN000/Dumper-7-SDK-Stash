#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_RespawnProtection.GE_RespawnProtection_C
// (None)

class UClass* UGE_RespawnProtection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_RespawnProtection_C");

	return Clss;
}


// GE_RespawnProtection_C GE_RespawnProtection.Default__GE_RespawnProtection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_RespawnProtection_C* UGE_RespawnProtection_C::GetDefaultObj()
{
	static class UGE_RespawnProtection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_RespawnProtection_C*>(UGE_RespawnProtection_C::StaticClass()->DefaultObject);

	return Default;
}

}


