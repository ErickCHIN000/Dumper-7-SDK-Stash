#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_main_parts01.Msn_main_parts01_C
// (None)

class UClass* UMsn_main_parts01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_main_parts01_C");

	return Clss;
}


// Msn_main_parts01_C Msn_main_parts01.Default__Msn_main_parts01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_main_parts01_C* UMsn_main_parts01_C::GetDefaultObj()
{
	static class UMsn_main_parts01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_main_parts01_C*>(UMsn_main_parts01_C::StaticClass()->DefaultObject);

	return Default;
}

}


