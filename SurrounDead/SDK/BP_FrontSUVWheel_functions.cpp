#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FrontSUVWheel.BP_FrontSUVWheel_C
// (None)

class UClass* UBP_FrontSUVWheel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FrontSUVWheel_C");

	return Clss;
}


// BP_FrontSUVWheel_C BP_FrontSUVWheel.Default__BP_FrontSUVWheel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FrontSUVWheel_C* UBP_FrontSUVWheel_C::GetDefaultObj()
{
	static class UBP_FrontSUVWheel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FrontSUVWheel_C*>(UBP_FrontSUVWheel_C::StaticClass()->DefaultObject);

	return Default;
}

}


