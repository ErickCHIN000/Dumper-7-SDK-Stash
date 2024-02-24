#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_SR_DAL.BPInvPartSet_SR_DAL_C
// (None)

class UClass* UBPInvPartSet_SR_DAL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_SR_DAL_C");

	return Clss;
}


// BPInvPartSet_SR_DAL_C BPInvPartSet_SR_DAL.Default__BPInvPartSet_SR_DAL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_SR_DAL_C* UBPInvPartSet_SR_DAL_C::GetDefaultObj()
{
	static class UBPInvPartSet_SR_DAL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_SR_DAL_C*>(UBPInvPartSet_SR_DAL_C::StaticClass()->DefaultObject);

	return Default;
}

}


