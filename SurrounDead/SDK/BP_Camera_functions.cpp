#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Camera.BP_Camera_C
// (Actor)

class UClass* ABP_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Camera_C");

	return Clss;
}


// BP_Camera_C BP_Camera.Default__BP_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Camera_C* ABP_Camera_C::GetDefaultObj()
{
	static class ABP_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Camera_C*>(ABP_Camera_C::StaticClass()->DefaultObject);

	return Default;
}

}


