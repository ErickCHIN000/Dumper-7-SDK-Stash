#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_MultiTargetHit.CS_MultiTargetHit_C
// (None)

class UClass* UCS_MultiTargetHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_MultiTargetHit_C");

	return Clss;
}


// CS_MultiTargetHit_C CS_MultiTargetHit.Default__CS_MultiTargetHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_MultiTargetHit_C* UCS_MultiTargetHit_C::GetDefaultObj()
{
	static class UCS_MultiTargetHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_MultiTargetHit_C*>(UCS_MultiTargetHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


