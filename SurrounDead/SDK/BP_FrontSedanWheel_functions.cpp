#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontSedanWheel.BP_FrontSedanWheel_C
// (None)

class UClass* UBP_FrontSedanWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontSedanWheel_C");

	return Clss;
}


// BP_FrontSedanWheel_C BP_FrontSedanWheel.Default__BP_FrontSedanWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontSedanWheel_C* UBP_FrontSedanWheel_C::GetDefaultObj()
{
	static class UBP_FrontSedanWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontSedanWheel_C*>(UBP_FrontSedanWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


