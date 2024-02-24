#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GraphicsSettingsContentLink.GraphicsSettingsContentLink_C
// (None)

class UClass* UGraphicsSettingsContentLink_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GraphicsSettingsContentLink_C");

	return Clss;
}


// GraphicsSettingsContentLink_C GraphicsSettingsContentLink.Default__GraphicsSettingsContentLink_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGraphicsSettingsContentLink_C* UGraphicsSettingsContentLink_C::GetDefaultObj()
{
	static class UGraphicsSettingsContentLink_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGraphicsSettingsContentLink_C*>(UGraphicsSettingsContentLink_C::StaticClass()->DefaultObject);

	return Default;
}

}


