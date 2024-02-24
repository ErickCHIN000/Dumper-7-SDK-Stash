#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_SR_HYP.BPInvPart_SR_HYP_C
// (None)

class UClass* UBPInvPart_SR_HYP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_SR_HYP_C");

	return Clss;
}


// BPInvPart_SR_HYP_C BPInvPart_SR_HYP.Default__BPInvPart_SR_HYP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_SR_HYP_C* UBPInvPart_SR_HYP_C::GetDefaultObj()
{
	static class UBPInvPart_SR_HYP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_SR_HYP_C*>(UBPInvPart_SR_HYP_C::StaticClass()->DefaultObject);

	return Default;
}

}


