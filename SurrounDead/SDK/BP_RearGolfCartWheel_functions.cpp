#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RearGolfCartWheel.BP_RearGolfCartWheel_C
// (None)

class UClass* UBP_RearGolfCartWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RearGolfCartWheel_C");

	return Clss;
}


// BP_RearGolfCartWheel_C BP_RearGolfCartWheel.Default__BP_RearGolfCartWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RearGolfCartWheel_C* UBP_RearGolfCartWheel_C::GetDefaultObj()
{
	static class UBP_RearGolfCartWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RearGolfCartWheel_C*>(UBP_RearGolfCartWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


