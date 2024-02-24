#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Mammoth_Corpse.BP_Mammoth_Corpse_C
// (Actor)

class UClass* ABP_Mammoth_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Mammoth_Corpse_C");

	return Clss;
}


// BP_Mammoth_Corpse_C BP_Mammoth_Corpse.Default__BP_Mammoth_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Mammoth_Corpse_C* ABP_Mammoth_Corpse_C::GetDefaultObj()
{
	static class ABP_Mammoth_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Mammoth_Corpse_C*>(ABP_Mammoth_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Mammoth_Corpse.BP_Mammoth_Corpse_C.IsSkeletonUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Mammoth_Corpse_C::IsSkeletonUpdated(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mammoth_Corpse_C", "IsSkeletonUpdated");

	Params::ABP_Mammoth_Corpse_C_IsSkeletonUpdated_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Mammoth_Corpse.BP_Mammoth_Corpse_C.OnSkinnedStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Mammoth_Corpse_C::OnSkinnedStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Mammoth_Corpse_C", "OnSkinnedStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}

}


