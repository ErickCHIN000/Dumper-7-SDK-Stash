#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideBredDemon5.PrideBredDemon5_C
// (None)

class UClass* UPrideBredDemon5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideBredDemon5_C");

	return Clss;
}


// PrideBredDemon5_C PrideBredDemon5.Default__PrideBredDemon5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideBredDemon5_C* UPrideBredDemon5_C::GetDefaultObj()
{
	static class UPrideBredDemon5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideBredDemon5_C*>(UPrideBredDemon5_C::StaticClass()->DefaultObject);

	return Default;
}

}


