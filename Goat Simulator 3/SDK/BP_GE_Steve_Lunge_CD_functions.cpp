#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GE_Steve_Lunge_CD.BP_GE_Steve_Lunge_CD_C
// (None)

class UClass* UBP_GE_Steve_Lunge_CD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GE_Steve_Lunge_CD_C");

	return Clss;
}


// BP_GE_Steve_Lunge_CD_C BP_GE_Steve_Lunge_CD.Default__BP_GE_Steve_Lunge_CD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GE_Steve_Lunge_CD_C* UBP_GE_Steve_Lunge_CD_C::GetDefaultObj()
{
	static class UBP_GE_Steve_Lunge_CD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GE_Steve_Lunge_CD_C*>(UBP_GE_Steve_Lunge_CD_C::StaticClass()->DefaultObject);

	return Default;
}

}


