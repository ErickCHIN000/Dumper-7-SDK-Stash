#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_VLA_SR.BPInvPartSet_VLA_SR_C
// (None)

class UClass* UBPInvPartSet_VLA_SR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_VLA_SR_C");

	return Clss;
}


// BPInvPartSet_VLA_SR_C BPInvPartSet_VLA_SR.Default__BPInvPartSet_VLA_SR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_VLA_SR_C* UBPInvPartSet_VLA_SR_C::GetDefaultObj()
{
	static class UBPInvPartSet_VLA_SR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_VLA_SR_C*>(UBPInvPartSet_VLA_SR_C::StaticClass()->DefaultObject);

	return Default;
}

}


