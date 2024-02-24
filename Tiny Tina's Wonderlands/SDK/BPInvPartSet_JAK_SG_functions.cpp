#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_JAK_SG.BPInvPartSet_JAK_SG_C
// (None)

class UClass* UBPInvPartSet_JAK_SG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_JAK_SG_C");

	return Clss;
}


// BPInvPartSet_JAK_SG_C BPInvPartSet_JAK_SG.Default__BPInvPartSet_JAK_SG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_JAK_SG_C* UBPInvPartSet_JAK_SG_C::GetDefaultObj()
{
	static class UBPInvPartSet_JAK_SG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_JAK_SG_C*>(UBPInvPartSet_JAK_SG_C::StaticClass()->DefaultObject);

	return Default;
}

}


