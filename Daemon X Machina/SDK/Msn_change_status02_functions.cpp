#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_change_status02.Msn_change_status02_C
// (None)

class UClass* UMsn_change_status02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_change_status02_C");

	return Clss;
}


// Msn_change_status02_C Msn_change_status02.Default__Msn_change_status02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_change_status02_C* UMsn_change_status02_C::GetDefaultObj()
{
	static class UMsn_change_status02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_change_status02_C*>(UMsn_change_status02_C::StaticClass()->DefaultObject);

	return Default;
}

}


