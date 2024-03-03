#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Map_Source_Component.Map_Source_Component_C
// (SceneComponent)

class UClass* UMap_Source_Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Map_Source_Component_C");

	return Clss;
}


// Map_Source_Component_C Map_Source_Component.Default__Map_Source_Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMap_Source_Component_C* UMap_Source_Component_C::GetDefaultObj()
{
	static class UMap_Source_Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMap_Source_Component_C*>(UMap_Source_Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


