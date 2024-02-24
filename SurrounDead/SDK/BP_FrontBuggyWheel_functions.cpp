#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontBuggyWheel.BP_FrontBuggyWheel_C
// (None)

class UClass* UBP_FrontBuggyWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontBuggyWheel_C");

	return Clss;
}


// BP_FrontBuggyWheel_C BP_FrontBuggyWheel.Default__BP_FrontBuggyWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontBuggyWheel_C* UBP_FrontBuggyWheel_C::GetDefaultObj()
{
	static class UBP_FrontBuggyWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontBuggyWheel_C*>(UBP_FrontBuggyWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


