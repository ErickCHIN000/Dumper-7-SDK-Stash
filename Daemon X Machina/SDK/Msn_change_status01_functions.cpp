#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_change_status01.Msn_change_status01_C
// (None)

class UClass* UMsn_change_status01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_change_status01_C");

	return Clss;
}


// Msn_change_status01_C Msn_change_status01.Default__Msn_change_status01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_change_status01_C* UMsn_change_status01_C::GetDefaultObj()
{
	static class UMsn_change_status01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_change_status01_C*>(UMsn_change_status01_C::StaticClass()->DefaultObject);

	return Default;
}

}


