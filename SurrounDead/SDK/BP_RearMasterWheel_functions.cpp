#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearMasterWheel.BP_RearMasterWheel_C
// (None)

class UClass* UBP_RearMasterWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearMasterWheel_C");

	return Clss;
}


// BP_RearMasterWheel_C BP_RearMasterWheel.Default__BP_RearMasterWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearMasterWheel_C* UBP_RearMasterWheel_C::GetDefaultObj()
{
	static class UBP_RearMasterWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearMasterWheel_C*>(UBP_RearMasterWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


