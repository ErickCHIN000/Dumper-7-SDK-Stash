#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SearchBox.UMG_SearchBox_C
// (None)

class UClass* UUMG_SearchBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SearchBox_C");

	return Clss;
}


// UMG_SearchBox_C UMG_SearchBox.Default__UMG_SearchBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SearchBox_C* UUMG_SearchBox_C::GetDefaultObj()
{
	static class UUMG_SearchBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SearchBox_C*>(UUMG_SearchBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


