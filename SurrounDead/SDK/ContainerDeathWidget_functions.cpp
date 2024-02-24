#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ContainerDeathWidget.ContainerDeathWidget_C
// (None)

class UClass* UContainerDeathWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContainerDeathWidget_C");

	return Clss;
}


// ContainerDeathWidget_C ContainerDeathWidget.Default__ContainerDeathWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UContainerDeathWidget_C* UContainerDeathWidget_C::GetDefaultObj()
{
	static class UContainerDeathWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UContainerDeathWidget_C*>(UContainerDeathWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


