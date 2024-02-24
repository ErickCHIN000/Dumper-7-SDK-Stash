#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AcogScope.AcogScope_C
// (None)

class UClass* UAcogScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AcogScope_C");

	return Clss;
}


// AcogScope_C AcogScope.Default__AcogScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAcogScope_C* UAcogScope_C::GetDefaultObj()
{
	static class UAcogScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAcogScope_C*>(UAcogScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


