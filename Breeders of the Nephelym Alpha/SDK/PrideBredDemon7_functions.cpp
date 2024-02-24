#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideBredDemon7.PrideBredDemon7_C
// (None)

class UClass* UPrideBredDemon7_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideBredDemon7_C");

	return Clss;
}


// PrideBredDemon7_C PrideBredDemon7.Default__PrideBredDemon7_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideBredDemon7_C* UPrideBredDemon7_C::GetDefaultObj()
{
	static class UPrideBredDemon7_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideBredDemon7_C*>(UPrideBredDemon7_C::StaticClass()->DefaultObject);

	return Default;
}

}


