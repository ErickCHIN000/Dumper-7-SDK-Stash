#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSexySin01_RL.PrideSexySin01_RL_C
// (None)

class UClass* UPrideSexySin01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSexySin01_RL_C");

	return Clss;
}


// PrideSexySin01_RL_C PrideSexySin01_RL.Default__PrideSexySin01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSexySin01_RL_C* UPrideSexySin01_RL_C::GetDefaultObj()
{
	static class UPrideSexySin01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSexySin01_RL_C*>(UPrideSexySin01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


