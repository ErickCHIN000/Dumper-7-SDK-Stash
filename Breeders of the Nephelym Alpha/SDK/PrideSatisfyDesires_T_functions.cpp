#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSatisfyDesires_T.PrideSatisfyDesires_T_C
// (None)

class UClass* UPrideSatisfyDesires_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSatisfyDesires_T_C");

	return Clss;
}


// PrideSatisfyDesires_T_C PrideSatisfyDesires_T.Default__PrideSatisfyDesires_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSatisfyDesires_T_C* UPrideSatisfyDesires_T_C::GetDefaultObj()
{
	static class UPrideSatisfyDesires_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSatisfyDesires_T_C*>(UPrideSatisfyDesires_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


