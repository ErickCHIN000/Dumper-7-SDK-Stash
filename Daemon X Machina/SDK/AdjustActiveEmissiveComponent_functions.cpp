#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AdjustActiveEmissiveComponent.AdjustActiveEmissiveComponent_C
// (None)

class UClass* UAdjustActiveEmissiveComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AdjustActiveEmissiveComponent_C");

	return Clss;
}


// AdjustActiveEmissiveComponent_C AdjustActiveEmissiveComponent.Default__AdjustActiveEmissiveComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAdjustActiveEmissiveComponent_C* UAdjustActiveEmissiveComponent_C::GetDefaultObj()
{
	static class UAdjustActiveEmissiveComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAdjustActiveEmissiveComponent_C*>(UAdjustActiveEmissiveComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


