#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiDefault01_Forgot.ParvatiDefault01_Forgot_C
// (None)

class UClass* UParvatiDefault01_Forgot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiDefault01_Forgot_C");

	return Clss;
}


// ParvatiDefault01_Forgot_C ParvatiDefault01_Forgot.Default__ParvatiDefault01_Forgot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiDefault01_Forgot_C* UParvatiDefault01_Forgot_C::GetDefaultObj()
{
	static class UParvatiDefault01_Forgot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiDefault01_Forgot_C*>(UParvatiDefault01_Forgot_C::StaticClass()->DefaultObject);

	return Default;
}

}


