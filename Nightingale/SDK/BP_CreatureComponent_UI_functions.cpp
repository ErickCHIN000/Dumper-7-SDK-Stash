#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureComponent_UI.BP_CreatureComponent_UI_C
// (None)

class UClass* UBP_CreatureComponent_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureComponent_UI_C");

	return Clss;
}


// BP_CreatureComponent_UI_C BP_CreatureComponent_UI.Default__BP_CreatureComponent_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CreatureComponent_UI_C* UBP_CreatureComponent_UI_C::GetDefaultObj()
{
	static class UBP_CreatureComponent_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CreatureComponent_UI_C*>(UBP_CreatureComponent_UI_C::StaticClass()->DefaultObject);

	return Default;
}

}


