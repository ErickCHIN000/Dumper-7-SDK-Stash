#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DragonCompanion_DirectionalFlinches_Random.Action_DragonCompanion_DirectionalFlinches_Random_C
// (None)

class UClass* UAction_DragonCompanion_DirectionalFlinches_Random_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DragonCompanion_DirectionalFlinches_Random_C");

	return Clss;
}


// Action_DragonCompanion_DirectionalFlinches_Random_C Action_DragonCompanion_DirectionalFlinches_Random.Default__Action_DragonCompanion_DirectionalFlinches_Random_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DragonCompanion_DirectionalFlinches_Random_C* UAction_DragonCompanion_DirectionalFlinches_Random_C::GetDefaultObj()
{
	static class UAction_DragonCompanion_DirectionalFlinches_Random_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DragonCompanion_DirectionalFlinches_Random_C*>(UAction_DragonCompanion_DirectionalFlinches_Random_C::StaticClass()->DefaultObject);

	return Default;
}

}


