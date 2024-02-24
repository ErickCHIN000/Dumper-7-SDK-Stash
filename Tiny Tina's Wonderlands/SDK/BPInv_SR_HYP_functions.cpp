#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_SR_HYP.BPInv_SR_HYP_C
// (None)

class UClass* UBPInv_SR_HYP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_SR_HYP_C");

	return Clss;
}


// BPInv_SR_HYP_C BPInv_SR_HYP.Default__BPInv_SR_HYP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_SR_HYP_C* UBPInv_SR_HYP_C::GetDefaultObj()
{
	static class UBPInv_SR_HYP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_SR_HYP_C*>(UBPInv_SR_HYP_C::StaticClass()->DefaultObject);

	return Default;
}

}


