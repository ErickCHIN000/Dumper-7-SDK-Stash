#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ModifierStateWithOuterBox.UMG_ModifierStateWithOuterBox_C
// (None)

class UClass* UUMG_ModifierStateWithOuterBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ModifierStateWithOuterBox_C");

	return Clss;
}


// UMG_ModifierStateWithOuterBox_C UMG_ModifierStateWithOuterBox.Default__UMG_ModifierStateWithOuterBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ModifierStateWithOuterBox_C* UUMG_ModifierStateWithOuterBox_C::GetDefaultObj()
{
	static class UUMG_ModifierStateWithOuterBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ModifierStateWithOuterBox_C*>(UUMG_ModifierStateWithOuterBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


