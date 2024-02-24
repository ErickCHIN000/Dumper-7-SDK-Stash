#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CardText.UMG_CardText_C
// (None)

class UClass* UUMG_CardText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CardText_C");

	return Clss;
}


// UMG_CardText_C UMG_CardText.Default__UMG_CardText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CardText_C* UUMG_CardText_C::GetDefaultObj()
{
	static class UUMG_CardText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CardText_C*>(UUMG_CardText_C::StaticClass()->DefaultObject);

	return Default;
}

}


