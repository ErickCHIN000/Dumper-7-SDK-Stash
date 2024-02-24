#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSitOnThrone_T.PrideSitOnThrone_T_C
// (None)

class UClass* UPrideSitOnThrone_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSitOnThrone_T_C");

	return Clss;
}


// PrideSitOnThrone_T_C PrideSitOnThrone_T.Default__PrideSitOnThrone_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSitOnThrone_T_C* UPrideSitOnThrone_T_C::GetDefaultObj()
{
	static class UPrideSitOnThrone_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSitOnThrone_T_C*>(UPrideSitOnThrone_T_C::StaticClass()->DefaultObject);

	return Default;
}

}


