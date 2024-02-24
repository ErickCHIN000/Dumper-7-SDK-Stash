#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UsableComponent.BP_UsableComponent_C
// (None)

class UClass* UBP_UsableComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UsableComponent_C");

	return Clss;
}


// BP_UsableComponent_C BP_UsableComponent.Default__BP_UsableComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UsableComponent_C* UBP_UsableComponent_C::GetDefaultObj()
{
	static class UBP_UsableComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UsableComponent_C*>(UBP_UsableComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


