#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_SR_JAK.BPInv_SR_JAK_C
// (None)

class UClass* UBPInv_SR_JAK_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_SR_JAK_C");

	return Clss;
}


// BPInv_SR_JAK_C BPInv_SR_JAK.Default__BPInv_SR_JAK_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_SR_JAK_C* UBPInv_SR_JAK_C::GetDefaultObj()
{
	static class UBPInv_SR_JAK_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_SR_JAK_C*>(UBPInv_SR_JAK_C::StaticClass()->DefaultObject);

	return Default;
}

}


