#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_AR_JAK.BPInv_AR_JAK_C
// (None)

class UClass* UBPInv_AR_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_AR_JAK_C");

	return Clss;
}


// BPInv_AR_JAK_C BPInv_AR_JAK.Default__BPInv_AR_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_AR_JAK_C* UBPInv_AR_JAK_C::GetDefaultObj()
{
	static class UBPInv_AR_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_AR_JAK_C*>(UBPInv_AR_JAK_C::StaticClass()->DefaultObject);

	return Default;
}

}


