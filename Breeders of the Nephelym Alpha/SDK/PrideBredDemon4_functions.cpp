#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideBredDemon4.PrideBredDemon4_C
// (None)

class UClass* UPrideBredDemon4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideBredDemon4_C");

	return Clss;
}


// PrideBredDemon4_C PrideBredDemon4.Default__PrideBredDemon4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideBredDemon4_C* UPrideBredDemon4_C::GetDefaultObj()
{
	static class UPrideBredDemon4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideBredDemon4_C*>(UPrideBredDemon4_C::StaticClass()->DefaultObject);

	return Default;
}

}


