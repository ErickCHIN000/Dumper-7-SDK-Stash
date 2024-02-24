#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AConditional_DragonCompanion_StaggerPicker.AConditional_DragonCompanion_StaggerPicker_C
// (None)

class UClass* UAConditional_DragonCompanion_StaggerPicker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AConditional_DragonCompanion_StaggerPicker_C");

	return Clss;
}


// AConditional_DragonCompanion_StaggerPicker_C AConditional_DragonCompanion_StaggerPicker.Default__AConditional_DragonCompanion_StaggerPicker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAConditional_DragonCompanion_StaggerPicker_C* UAConditional_DragonCompanion_StaggerPicker_C::GetDefaultObj()
{
	static class UAConditional_DragonCompanion_StaggerPicker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAConditional_DragonCompanion_StaggerPicker_C*>(UAConditional_DragonCompanion_StaggerPicker_C::StaticClass()->DefaultObject);

	return Default;
}

}


