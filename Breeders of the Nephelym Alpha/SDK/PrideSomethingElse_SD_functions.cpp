#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSomethingElse_SD.PrideSomethingElse_SD_C
// (None)

class UClass* UPrideSomethingElse_SD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSomethingElse_SD_C");

	return Clss;
}


// PrideSomethingElse_SD_C PrideSomethingElse_SD.Default__PrideSomethingElse_SD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSomethingElse_SD_C* UPrideSomethingElse_SD_C::GetDefaultObj()
{
	static class UPrideSomethingElse_SD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSomethingElse_SD_C*>(UPrideSomethingElse_SD_C::StaticClass()->DefaultObject);

	return Default;
}

}


