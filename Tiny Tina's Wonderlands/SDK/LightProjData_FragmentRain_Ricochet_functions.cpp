#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightProjData_FragmentRain_Ricochet.LightProjData_FragmentRain_Ricochet_C
// (None)

class UClass* ULightProjData_FragmentRain_Ricochet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightProjData_FragmentRain_Ricochet_C");

	return Clss;
}


// LightProjData_FragmentRain_Ricochet_C LightProjData_FragmentRain_Ricochet.Default__LightProjData_FragmentRain_Ricochet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULightProjData_FragmentRain_Ricochet_C* ULightProjData_FragmentRain_Ricochet_C::GetDefaultObj()
{
	static class ULightProjData_FragmentRain_Ricochet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULightProjData_FragmentRain_Ricochet_C*>(ULightProjData_FragmentRain_Ricochet_C::StaticClass()->DefaultObject);

	return Default;
}

}


