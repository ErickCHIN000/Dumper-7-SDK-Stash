#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_DAL_SM.BPInvPartSet_DAL_SM_C
// (None)

class UClass* UBPInvPartSet_DAL_SM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_DAL_SM_C");

	return Clss;
}


// BPInvPartSet_DAL_SM_C BPInvPartSet_DAL_SM.Default__BPInvPartSet_DAL_SM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_DAL_SM_C* UBPInvPartSet_DAL_SM_C::GetDefaultObj()
{
	static class UBPInvPartSet_DAL_SM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_DAL_SM_C*>(UBPInvPartSet_DAL_SM_C::StaticClass()->DefaultObject);

	return Default;
}

}


