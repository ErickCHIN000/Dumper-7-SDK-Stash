#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MenuDataComponent.BP_MenuDataComponent_C
// (None)

class UClass* UBP_MenuDataComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MenuDataComponent_C");

	return Clss;
}


// BP_MenuDataComponent_C BP_MenuDataComponent.Default__BP_MenuDataComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MenuDataComponent_C* UBP_MenuDataComponent_C::GetDefaultObj()
{
	static class UBP_MenuDataComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MenuDataComponent_C*>(UBP_MenuDataComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


