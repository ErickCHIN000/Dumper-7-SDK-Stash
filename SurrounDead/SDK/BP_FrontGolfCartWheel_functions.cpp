#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontGolfCartWheel.BP_FrontGolfCartWheel_C
// (None)

class UClass* UBP_FrontGolfCartWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontGolfCartWheel_C");

	return Clss;
}


// BP_FrontGolfCartWheel_C BP_FrontGolfCartWheel.Default__BP_FrontGolfCartWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontGolfCartWheel_C* UBP_FrontGolfCartWheel_C::GetDefaultObj()
{
	static class UBP_FrontGolfCartWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontGolfCartWheel_C*>(UBP_FrontGolfCartWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


