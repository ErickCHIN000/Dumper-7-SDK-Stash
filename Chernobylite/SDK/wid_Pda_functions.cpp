#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Pda.wid_Pda_C
// (None)

class UClass* UWid_Pda_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Pda_C");

	return Clss;
}


// wid_Pda_C wid_Pda.Default__wid_Pda_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Pda_C* UWid_Pda_C::GetDefaultObj()
{
	static class UWid_Pda_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Pda_C*>(UWid_Pda_C::StaticClass()->DefaultObject);

	return Default;
}

}


