#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProj_Barboload1.LightProj_Barboload1_C
// (None)

class UClass* ULightProj_Barboload1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProj_Barboload1_C");

	return Clss;
}


// LightProj_Barboload1_C LightProj_Barboload1.Default__LightProj_Barboload1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProj_Barboload1_C* ULightProj_Barboload1_C::GetDefaultObj()
{
	static class ULightProj_Barboload1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProj_Barboload1_C*>(ULightProj_Barboload1_C::StaticClass()->DefaultObject);

	return Default;
}

}


