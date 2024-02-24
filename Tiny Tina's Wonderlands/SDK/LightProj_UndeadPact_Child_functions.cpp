#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_UndeadPact_Child.LightProj_UndeadPact_Child_C
// (None)

class UClass* ULightProj_UndeadPact_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_UndeadPact_Child_C");

	return Clss;
}


// LightProj_UndeadPact_Child_C LightProj_UndeadPact_Child.Default__LightProj_UndeadPact_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_UndeadPact_Child_C* ULightProj_UndeadPact_Child_C::GetDefaultObj()
{
	static class ULightProj_UndeadPact_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_UndeadPact_Child_C*>(ULightProj_UndeadPact_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


