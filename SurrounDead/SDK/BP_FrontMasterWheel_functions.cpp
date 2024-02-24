#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontMasterWheel.BP_FrontMasterWheel_C
// (None)

class UClass* UBP_FrontMasterWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontMasterWheel_C");

	return Clss;
}


// BP_FrontMasterWheel_C BP_FrontMasterWheel.Default__BP_FrontMasterWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontMasterWheel_C* UBP_FrontMasterWheel_C::GetDefaultObj()
{
	static class UBP_FrontMasterWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontMasterWheel_C*>(UBP_FrontMasterWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


