#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_AR_TOR_ModeReturn_01_ADS.Action_AR_TOR_ModeReturn_01_ADS_C
// (None)

class UClass* UAction_AR_TOR_ModeReturn_01_ADS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_AR_TOR_ModeReturn_01_ADS_C");

	return Clss;
}


// Action_AR_TOR_ModeReturn_01_ADS_C Action_AR_TOR_ModeReturn_01_ADS.Default__Action_AR_TOR_ModeReturn_01_ADS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_AR_TOR_ModeReturn_01_ADS_C* UAction_AR_TOR_ModeReturn_01_ADS_C::GetDefaultObj()
{
	static class UAction_AR_TOR_ModeReturn_01_ADS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_AR_TOR_ModeReturn_01_ADS_C*>(UAction_AR_TOR_ModeReturn_01_ADS_C::StaticClass()->DefaultObject);

	return Default;
}

}


