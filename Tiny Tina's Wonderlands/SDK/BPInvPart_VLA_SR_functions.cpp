#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_VLA_SR.BPInvPart_VLA_SR_C
// (None)

class UClass* UBPInvPart_VLA_SR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_VLA_SR_C");

	return Clss;
}


// BPInvPart_VLA_SR_C BPInvPart_VLA_SR.Default__BPInvPart_VLA_SR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_VLA_SR_C* UBPInvPart_VLA_SR_C::GetDefaultObj()
{
	static class UBPInvPart_VLA_SR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_VLA_SR_C*>(UBPInvPart_VLA_SR_C::StaticClass()->DefaultObject);

	return Default;
}

}


