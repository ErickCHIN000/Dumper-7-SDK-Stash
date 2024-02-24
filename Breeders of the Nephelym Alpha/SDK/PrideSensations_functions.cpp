#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSensations.PrideSensations_C
// (None)

class UClass* UPrideSensations_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSensations_C");

	return Clss;
}


// PrideSensations_C PrideSensations.Default__PrideSensations_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSensations_C* UPrideSensations_C::GetDefaultObj()
{
	static class UPrideSensations_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSensations_C*>(UPrideSensations_C::StaticClass()->DefaultObject);

	return Default;
}

}


