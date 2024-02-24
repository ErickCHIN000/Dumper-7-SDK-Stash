#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDesiresF.PrideDesiresF_C
// (None)

class UClass* UPrideDesiresF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDesiresF_C");

	return Clss;
}


// PrideDesiresF_C PrideDesiresF.Default__PrideDesiresF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDesiresF_C* UPrideDesiresF_C::GetDefaultObj()
{
	static class UPrideDesiresF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDesiresF_C*>(UPrideDesiresF_C::StaticClass()->DefaultObject);

	return Default;
}

}


