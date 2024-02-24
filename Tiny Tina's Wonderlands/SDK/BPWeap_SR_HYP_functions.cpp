#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SR_HYP.BPWeap_SR_HYP_C
// (Actor)

class UClass* ABPWeap_SR_HYP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SR_HYP_C");

	return Clss;
}


// BPWeap_SR_HYP_C BPWeap_SR_HYP.Default__BPWeap_SR_HYP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SR_HYP_C* ABPWeap_SR_HYP_C::GetDefaultObj()
{
	static class ABPWeap_SR_HYP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SR_HYP_C*>(ABPWeap_SR_HYP_C::StaticClass()->DefaultObject);

	return Default;
}

}


