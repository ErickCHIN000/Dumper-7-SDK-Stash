#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass IconMapObjectTooltip.IconMapObjectTooltip_C
// (None)

class UClass* UIconMapObjectTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IconMapObjectTooltip_C");

	return Clss;
}


// IconMapObjectTooltip_C IconMapObjectTooltip.Default__IconMapObjectTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIconMapObjectTooltip_C* UIconMapObjectTooltip_C::GetDefaultObj()
{
	static class UIconMapObjectTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIconMapObjectTooltip_C*>(UIconMapObjectTooltip_C::StaticClass()->DefaultObject);

	return Default;
}

}


