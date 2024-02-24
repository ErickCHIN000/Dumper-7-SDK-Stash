#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearBigRigWheel.BP_RearBigRigWheel_C
// (None)

class UClass* UBP_RearBigRigWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearBigRigWheel_C");

	return Clss;
}


// BP_RearBigRigWheel_C BP_RearBigRigWheel.Default__BP_RearBigRigWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearBigRigWheel_C* UBP_RearBigRigWheel_C::GetDefaultObj()
{
	static class UBP_RearBigRigWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearBigRigWheel_C*>(UBP_RearBigRigWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


