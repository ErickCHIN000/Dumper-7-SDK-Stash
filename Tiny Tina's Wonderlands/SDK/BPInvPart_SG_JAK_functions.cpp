#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_SG_JAK.BPInvPart_SG_JAK_C
// (None)

class UClass* UBPInvPart_SG_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_SG_JAK_C");

	return Clss;
}


// BPInvPart_SG_JAK_C BPInvPart_SG_JAK.Default__BPInvPart_SG_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_SG_JAK_C* UBPInvPart_SG_JAK_C::GetDefaultObj()
{
	static class UBPInvPart_SG_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_SG_JAK_C*>(UBPInvPart_SG_JAK_C::StaticClass()->DefaultObject);

	return Default;
}

}


