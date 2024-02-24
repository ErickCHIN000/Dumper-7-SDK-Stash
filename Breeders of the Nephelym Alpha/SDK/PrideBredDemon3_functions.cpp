#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideBredDemon3.PrideBredDemon3_C
// (None)

class UClass* UPrideBredDemon3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideBredDemon3_C");

	return Clss;
}


// PrideBredDemon3_C PrideBredDemon3.Default__PrideBredDemon3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideBredDemon3_C* UPrideBredDemon3_C::GetDefaultObj()
{
	static class UPrideBredDemon3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideBredDemon3_C*>(UPrideBredDemon3_C::StaticClass()->DefaultObject);

	return Default;
}

}


