#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearSUVWheel.BP_RearSUVWheel_C
// (None)

class UClass* UBP_RearSUVWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearSUVWheel_C");

	return Clss;
}


// BP_RearSUVWheel_C BP_RearSUVWheel.Default__BP_RearSUVWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearSUVWheel_C* UBP_RearSUVWheel_C::GetDefaultObj()
{
	static class UBP_RearSUVWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearSUVWheel_C*>(UBP_RearSUVWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


