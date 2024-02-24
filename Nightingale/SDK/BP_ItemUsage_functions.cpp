#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ItemUsage.BP_ItemUsage_C
// (None)

class UClass* UBP_ItemUsage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ItemUsage_C");

	return Clss;
}


// BP_ItemUsage_C BP_ItemUsage.Default__BP_ItemUsage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ItemUsage_C* UBP_ItemUsage_C::GetDefaultObj()
{
	static class UBP_ItemUsage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ItemUsage_C*>(UBP_ItemUsage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ItemUsage.BP_ItemUsage_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData_Equippable        EquippableData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FGameplayTag>        CallFunc_BreakGameplayTagContainer_GameplayTags                  (ReferenceParm)

void UBP_ItemUsage_C::Initialize(const struct FItemData_Equippable& EquippableData, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ItemUsage_C", "Initialize");

	Params::UBP_ItemUsage_C_Initialize_Params Parms{};

	Parms.EquippableData = EquippableData;
	Parms.CallFunc_BreakGameplayTagContainer_GameplayTags = CallFunc_BreakGameplayTagContainer_GameplayTags;

	UObject::ProcessEvent(Func, &Parms);

}

}


