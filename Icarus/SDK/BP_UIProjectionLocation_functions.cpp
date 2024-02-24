#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIProjectionLocation.BP_UIProjectionLocation_C
// (SceneComponent)

class UClass* UBP_UIProjectionLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIProjectionLocation_C");

	return Clss;
}


// BP_UIProjectionLocation_C BP_UIProjectionLocation.Default__BP_UIProjectionLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIProjectionLocation_C* UBP_UIProjectionLocation_C::GetDefaultObj()
{
	static class UBP_UIProjectionLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIProjectionLocation_C*>(UBP_UIProjectionLocation_C::StaticClass()->DefaultObject);

	return Default;
}

}


