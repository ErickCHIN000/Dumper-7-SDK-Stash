#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSomethingElse.PrideSomethingElse_C
// (None)

class UClass* UPrideSomethingElse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSomethingElse_C");

	return Clss;
}


// PrideSomethingElse_C PrideSomethingElse.Default__PrideSomethingElse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSomethingElse_C* UPrideSomethingElse_C::GetDefaultObj()
{
	static class UPrideSomethingElse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSomethingElse_C*>(UPrideSomethingElse_C::StaticClass()->DefaultObject);

	return Default;
}

}


