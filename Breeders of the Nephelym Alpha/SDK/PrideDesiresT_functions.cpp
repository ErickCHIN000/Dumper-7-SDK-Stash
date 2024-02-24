#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDesiresT.PrideDesiresT_C
// (None)

class UClass* UPrideDesiresT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDesiresT_C");

	return Clss;
}


// PrideDesiresT_C PrideDesiresT.Default__PrideDesiresT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDesiresT_C* UPrideDesiresT_C::GetDefaultObj()
{
	static class UPrideDesiresT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDesiresT_C*>(UPrideDesiresT_C::StaticClass()->DefaultObject);

	return Default;
}

}


