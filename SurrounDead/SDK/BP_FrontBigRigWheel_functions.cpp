#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontBigRigWheel.BP_FrontBigRigWheel_C
// (None)

class UClass* UBP_FrontBigRigWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontBigRigWheel_C");

	return Clss;
}


// BP_FrontBigRigWheel_C BP_FrontBigRigWheel.Default__BP_FrontBigRigWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontBigRigWheel_C* UBP_FrontBigRigWheel_C::GetDefaultObj()
{
	static class UBP_FrontBigRigWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontBigRigWheel_C*>(UBP_FrontBigRigWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


