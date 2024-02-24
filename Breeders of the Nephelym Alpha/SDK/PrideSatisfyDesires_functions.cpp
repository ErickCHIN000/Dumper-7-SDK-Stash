#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSatisfyDesires.PrideSatisfyDesires_C
// (None)

class UClass* UPrideSatisfyDesires_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSatisfyDesires_C");

	return Clss;
}


// PrideSatisfyDesires_C PrideSatisfyDesires.Default__PrideSatisfyDesires_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSatisfyDesires_C* UPrideSatisfyDesires_C::GetDefaultObj()
{
	static class UPrideSatisfyDesires_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSatisfyDesires_C*>(UPrideSatisfyDesires_C::StaticClass()->DefaultObject);

	return Default;
}

}


