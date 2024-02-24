#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TEMP_ToolbarComponent.BP_TEMP_ToolbarComponent_C
// (None)

class UClass* UBP_TEMP_ToolbarComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TEMP_ToolbarComponent_C");

	return Clss;
}


// BP_TEMP_ToolbarComponent_C BP_TEMP_ToolbarComponent.Default__BP_TEMP_ToolbarComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TEMP_ToolbarComponent_C* UBP_TEMP_ToolbarComponent_C::GetDefaultObj()
{
	static class UBP_TEMP_ToolbarComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TEMP_ToolbarComponent_C*>(UBP_TEMP_ToolbarComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


