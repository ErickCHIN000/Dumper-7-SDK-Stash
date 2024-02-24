#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontRVWheel.BP_FrontRVWheel_C
// (None)

class UClass* UBP_FrontRVWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontRVWheel_C");

	return Clss;
}


// BP_FrontRVWheel_C BP_FrontRVWheel.Default__BP_FrontRVWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontRVWheel_C* UBP_FrontRVWheel_C::GetDefaultObj()
{
	static class UBP_FrontRVWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontRVWheel_C*>(UBP_FrontRVWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


