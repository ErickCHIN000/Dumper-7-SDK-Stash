#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shake_TakeHitBlock.BP_Shake_TakeHitBlock_C
// (None)

class UClass* UBP_Shake_TakeHitBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shake_TakeHitBlock_C");

	return Clss;
}


// BP_Shake_TakeHitBlock_C BP_Shake_TakeHitBlock.Default__BP_Shake_TakeHitBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Shake_TakeHitBlock_C* UBP_Shake_TakeHitBlock_C::GetDefaultObj()
{
	static class UBP_Shake_TakeHitBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Shake_TakeHitBlock_C*>(UBP_Shake_TakeHitBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


