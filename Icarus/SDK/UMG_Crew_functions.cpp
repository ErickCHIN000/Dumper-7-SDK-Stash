#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Crew.UMG_Crew_C
// (None)

class UClass* UUMG_Crew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Crew_C");

	return Clss;
}


// UMG_Crew_C UMG_Crew.Default__UMG_Crew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Crew_C* UUMG_Crew_C::GetDefaultObj()
{
	static class UUMG_Crew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Crew_C*>(UUMG_Crew_C::StaticClass()->DefaultObject);

	return Default;
}

}


