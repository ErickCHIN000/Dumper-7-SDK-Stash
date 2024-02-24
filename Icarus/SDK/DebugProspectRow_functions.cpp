#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DebugProspectRow.DebugProspectRow_C
// (None)

class UClass* UDebugProspectRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DebugProspectRow_C");

	return Clss;
}


// DebugProspectRow_C DebugProspectRow.Default__DebugProspectRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDebugProspectRow_C* UDebugProspectRow_C::GetDefaultObj()
{
	static class UDebugProspectRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDebugProspectRow_C*>(UDebugProspectRow_C::StaticClass()->DefaultObject);

	return Default;
}

}


