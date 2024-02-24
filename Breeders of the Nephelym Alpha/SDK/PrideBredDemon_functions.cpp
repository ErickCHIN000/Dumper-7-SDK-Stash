#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideBredDemon.PrideBredDemon_C
// (None)

class UClass* UPrideBredDemon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideBredDemon_C");

	return Clss;
}


// PrideBredDemon_C PrideBredDemon.Default__PrideBredDemon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideBredDemon_C* UPrideBredDemon_C::GetDefaultObj()
{
	static class UPrideBredDemon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideBredDemon_C*>(UPrideBredDemon_C::StaticClass()->DefaultObject);

	return Default;
}

}


