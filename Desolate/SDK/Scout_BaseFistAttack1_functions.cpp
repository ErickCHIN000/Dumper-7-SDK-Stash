#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_BaseFistAttack1.Scout_BaseFistAttack1_C
// (None)

class UClass* UScout_BaseFistAttack1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_BaseFistAttack1_C");

	return Clss;
}


// Scout_BaseFistAttack1_C Scout_BaseFistAttack1.Default__Scout_BaseFistAttack1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_BaseFistAttack1_C* UScout_BaseFistAttack1_C::GetDefaultObj()
{
	static class UScout_BaseFistAttack1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_BaseFistAttack1_C*>(UScout_BaseFistAttack1_C::StaticClass()->DefaultObject);

	return Default;
}

}


