#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shake_TakeHit.BP_Shake_TakeHit_C
// (None)

class UClass* UBP_Shake_TakeHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shake_TakeHit_C");

	return Clss;
}


// BP_Shake_TakeHit_C BP_Shake_TakeHit.Default__BP_Shake_TakeHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Shake_TakeHit_C* UBP_Shake_TakeHit_C::GetDefaultObj()
{
	static class UBP_Shake_TakeHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Shake_TakeHit_C*>(UBP_Shake_TakeHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


