#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CrewMate.UMG_CrewMate_C
// (None)

class UClass* UUMG_CrewMate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CrewMate_C");

	return Clss;
}


// UMG_CrewMate_C UMG_CrewMate.Default__UMG_CrewMate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CrewMate_C* UUMG_CrewMate_C::GetDefaultObj()
{
	static class UUMG_CrewMate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CrewMate_C*>(UUMG_CrewMate_C::StaticClass()->DefaultObject);

	return Default;
}

}


