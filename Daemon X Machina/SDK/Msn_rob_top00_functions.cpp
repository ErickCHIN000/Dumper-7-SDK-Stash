#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_rob_top00.Msn_rob_top00_C
// (None)

class UClass* UMsn_rob_top00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_rob_top00_C");

	return Clss;
}


// Msn_rob_top00_C Msn_rob_top00.Default__Msn_rob_top00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_rob_top00_C* UMsn_rob_top00_C::GetDefaultObj()
{
	static class UMsn_rob_top00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_rob_top00_C*>(UMsn_rob_top00_C::StaticClass()->DefaultObject);

	return Default;
}

}


