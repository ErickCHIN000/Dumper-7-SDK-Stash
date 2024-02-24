#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_AR_DAL.BPInvPart_AR_DAL_C
// (None)

class UClass* UBPInvPart_AR_DAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_AR_DAL_C");

	return Clss;
}


// BPInvPart_AR_DAL_C BPInvPart_AR_DAL.Default__BPInvPart_AR_DAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_AR_DAL_C* UBPInvPart_AR_DAL_C::GetDefaultObj()
{
	static class UBPInvPart_AR_DAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_AR_DAL_C*>(UBPInvPart_AR_DAL_C::StaticClass()->DefaultObject);

	return Default;
}

}


