#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDailyToy.CamillaDailyToy_C
// (None)

class UClass* UCamillaDailyToy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDailyToy_C");

	return Clss;
}


// CamillaDailyToy_C CamillaDailyToy.Default__CamillaDailyToy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDailyToy_C* UCamillaDailyToy_C::GetDefaultObj()
{
	static class UCamillaDailyToy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDailyToy_C*>(UCamillaDailyToy_C::StaticClass()->DefaultObject);

	return Default;
}

}


