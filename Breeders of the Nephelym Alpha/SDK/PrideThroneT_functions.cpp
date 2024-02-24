#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideThroneT.PrideThroneT_C
// (None)

class UClass* UPrideThroneT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideThroneT_C");

	return Clss;
}


// PrideThroneT_C PrideThroneT.Default__PrideThroneT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideThroneT_C* UPrideThroneT_C::GetDefaultObj()
{
	static class UPrideThroneT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideThroneT_C*>(UPrideThroneT_C::StaticClass()->DefaultObject);

	return Default;
}

}


