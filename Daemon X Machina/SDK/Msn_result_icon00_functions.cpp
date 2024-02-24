#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_result_icon00.Msn_result_icon00_C
// (None)

class UClass* UMsn_result_icon00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_result_icon00_C");

	return Clss;
}


// Msn_result_icon00_C Msn_result_icon00.Default__Msn_result_icon00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_result_icon00_C* UMsn_result_icon00_C::GetDefaultObj()
{
	static class UMsn_result_icon00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_result_icon00_C*>(UMsn_result_icon00_C::StaticClass()->DefaultObject);

	return Default;
}

}


