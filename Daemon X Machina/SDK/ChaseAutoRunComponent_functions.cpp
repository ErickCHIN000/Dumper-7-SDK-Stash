#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChaseAutoRunComponent.ChaseAutoRunComponent_C
// (None)

class UClass* UChaseAutoRunComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaseAutoRunComponent_C");

	return Clss;
}


// ChaseAutoRunComponent_C ChaseAutoRunComponent.Default__ChaseAutoRunComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChaseAutoRunComponent_C* UChaseAutoRunComponent_C::GetDefaultObj()
{
	static class UChaseAutoRunComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaseAutoRunComponent_C*>(UChaseAutoRunComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


