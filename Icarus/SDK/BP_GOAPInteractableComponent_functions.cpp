#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GOAPInteractableComponent.BP_GOAPInteractableComponent_C
// (None)

class UClass* UBP_GOAPInteractableComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GOAPInteractableComponent_C");

	return Clss;
}


// BP_GOAPInteractableComponent_C BP_GOAPInteractableComponent.Default__BP_GOAPInteractableComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GOAPInteractableComponent_C* UBP_GOAPInteractableComponent_C::GetDefaultObj()
{
	static class UBP_GOAPInteractableComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GOAPInteractableComponent_C*>(UBP_GOAPInteractableComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


