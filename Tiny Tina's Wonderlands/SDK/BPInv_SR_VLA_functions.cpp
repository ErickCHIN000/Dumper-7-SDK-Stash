#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_SR_VLA.BPInv_SR_VLA_C
// (None)

class UClass* UBPInv_SR_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_SR_VLA_C");

	return Clss;
}


// BPInv_SR_VLA_C BPInv_SR_VLA.Default__BPInv_SR_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_SR_VLA_C* UBPInv_SR_VLA_C::GetDefaultObj()
{
	static class UBPInv_SR_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_SR_VLA_C*>(UBPInv_SR_VLA_C::StaticClass()->DefaultObject);

	return Default;
}

}

