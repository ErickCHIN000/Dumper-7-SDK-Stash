#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DragonCompanion_Fidget_1.Action_DragonCompanion_Fidget_1_C
// (None)

class UClass* UAction_DragonCompanion_Fidget_1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DragonCompanion_Fidget_1_C");

	return Clss;
}


// Action_DragonCompanion_Fidget_1_C Action_DragonCompanion_Fidget_1.Default__Action_DragonCompanion_Fidget_1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DragonCompanion_Fidget_1_C* UAction_DragonCompanion_Fidget_1_C::GetDefaultObj()
{
	static class UAction_DragonCompanion_Fidget_1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DragonCompanion_Fidget_1_C*>(UAction_DragonCompanion_Fidget_1_C::StaticClass()->DefaultObject);

	return Default;
}

}


