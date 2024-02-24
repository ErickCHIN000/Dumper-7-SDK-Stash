#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_bg_top03.Cmn_bg_top03_C
// (None)

class UClass* UCmn_bg_top03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_bg_top03_C");

	return Clss;
}


// Cmn_bg_top03_C Cmn_bg_top03.Default__Cmn_bg_top03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_bg_top03_C* UCmn_bg_top03_C::GetDefaultObj()
{
	static class UCmn_bg_top03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_bg_top03_C*>(UCmn_bg_top03_C::StaticClass()->DefaultObject);

	return Default;
}

}


