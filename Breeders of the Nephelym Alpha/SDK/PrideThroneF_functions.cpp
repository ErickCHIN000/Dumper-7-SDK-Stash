#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideThroneF.PrideThroneF_C
// (None)

class UClass* UPrideThroneF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideThroneF_C");

	return Clss;
}


// PrideThroneF_C PrideThroneF.Default__PrideThroneF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideThroneF_C* UPrideThroneF_C::GetDefaultObj()
{
	static class UPrideThroneF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideThroneF_C*>(UPrideThroneF_C::StaticClass()->DefaultObject);

	return Default;
}

}


