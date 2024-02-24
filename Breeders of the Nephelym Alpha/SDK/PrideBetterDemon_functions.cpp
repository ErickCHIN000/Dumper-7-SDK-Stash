#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideBetterDemon.PrideBetterDemon_C
// (None)

class UClass* UPrideBetterDemon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideBetterDemon_C");

	return Clss;
}


// PrideBetterDemon_C PrideBetterDemon.Default__PrideBetterDemon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideBetterDemon_C* UPrideBetterDemon_C::GetDefaultObj()
{
	static class UPrideBetterDemon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideBetterDemon_C*>(UPrideBetterDemon_C::StaticClass()->DefaultObject);

	return Default;
}

}


