#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_JAK_AR.BPInvPart_JAK_AR_C
// (None)

class UClass* UBPInvPart_JAK_AR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_JAK_AR_C");

	return Clss;
}


// BPInvPart_JAK_AR_C BPInvPart_JAK_AR.Default__BPInvPart_JAK_AR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_JAK_AR_C* UBPInvPart_JAK_AR_C::GetDefaultObj()
{
	static class UBPInvPart_JAK_AR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_JAK_AR_C*>(UBPInvPart_JAK_AR_C::StaticClass()->DefaultObject);

	return Default;
}

}


