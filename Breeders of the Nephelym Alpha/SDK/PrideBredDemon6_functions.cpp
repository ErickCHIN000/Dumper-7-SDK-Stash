#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideBredDemon6.PrideBredDemon6_C
// (None)

class UClass* UPrideBredDemon6_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideBredDemon6_C");

	return Clss;
}


// PrideBredDemon6_C PrideBredDemon6.Default__PrideBredDemon6_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideBredDemon6_C* UPrideBredDemon6_C::GetDefaultObj()
{
	static class UPrideBredDemon6_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideBredDemon6_C*>(UPrideBredDemon6_C::StaticClass()->DefaultObject);

	return Default;
}

}


