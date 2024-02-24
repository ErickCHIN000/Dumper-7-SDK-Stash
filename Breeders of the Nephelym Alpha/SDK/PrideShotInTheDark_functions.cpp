#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideShotInTheDark.PrideShotInTheDark_C
// (None)

class UClass* UPrideShotInTheDark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideShotInTheDark_C");

	return Clss;
}


// PrideShotInTheDark_C PrideShotInTheDark.Default__PrideShotInTheDark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideShotInTheDark_C* UPrideShotInTheDark_C::GetDefaultObj()
{
	static class UPrideShotInTheDark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideShotInTheDark_C*>(UPrideShotInTheDark_C::StaticClass()->DefaultObject);

	return Default;
}

}


