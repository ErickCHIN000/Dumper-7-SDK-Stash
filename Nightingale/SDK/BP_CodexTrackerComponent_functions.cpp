#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CodexTrackerComponent.BP_CodexTrackerComponent_C
// (None)

class UClass* UBP_CodexTrackerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CodexTrackerComponent_C");

	return Clss;
}


// BP_CodexTrackerComponent_C BP_CodexTrackerComponent.Default__BP_CodexTrackerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CodexTrackerComponent_C* UBP_CodexTrackerComponent_C::GetDefaultObj()
{
	static class UBP_CodexTrackerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CodexTrackerComponent_C*>(UBP_CodexTrackerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CodexTrackerComponent.BP_CodexTrackerComponent_C.On Codex Entry Updated
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCodexEntry                 CodexEntry                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                SubentryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_CodexTrackerComponent_C::On_Codex_Entry_Updated(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexTrackerComponent_C", "On Codex Entry Updated");

	Params::UBP_CodexTrackerComponent_C_On_Codex_Entry_Updated_Params Parms{};

	Parms.CodexEntry = CodexEntry;
	Parms.SubentryTag = SubentryTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexTrackerComponent.BP_CodexTrackerComponent_C.On Codex Entry Granted
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCodexEntry                 CodexEntry                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                SubentryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CodexRewards                                                     (Edit, BlueprintVisible)
// class APawn*                       OwningPawn                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GenerateEssenceRewardsForCodex_ReturnValue              (ReferenceParm)
// bool                               CallFunc_ClaimItems_bSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_ClaimItems_ClaimedInstances                             (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_ClaimItems_UnclaimedItems                               (ReferenceParm)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                K2Node_DynamicCast_AsPlayer_State                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPawn_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CodexTrackerComponent_C::On_Codex_Entry_Granted(struct FCodexEntry& CodexEntry, struct FGameplayTag& SubentryTag, const TArray<struct FInventoryEntry>& CodexRewards, class APawn* OwningPawn, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GenerateEssenceRewardsForCodex_ReturnValue, bool CallFunc_ClaimItems_bSuccess, TArray<struct FGuid>& CallFunc_ClaimItems_ClaimedInstances, TArray<struct FInventoryEntry>& CallFunc_ClaimItems_UnclaimedItems, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class APlayerState* K2Node_DynamicCast_AsPlayer_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class APawn* CallFunc_GetPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexTrackerComponent_C", "On Codex Entry Granted");

	Params::UBP_CodexTrackerComponent_C_On_Codex_Entry_Granted_Params Parms{};

	Parms.CodexEntry = CodexEntry;
	Parms.SubentryTag = SubentryTag;
	Parms.CodexRewards = CodexRewards;
	Parms.OwningPawn = OwningPawn;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_MakeLiteralString_ReturnValue_1 = CallFunc_MakeLiteralString_ReturnValue_1;
	Parms.CallFunc_GenerateEssenceRewardsForCodex_ReturnValue = CallFunc_GenerateEssenceRewardsForCodex_ReturnValue;
	Parms.CallFunc_ClaimItems_bSuccess = CallFunc_ClaimItems_bSuccess;
	Parms.CallFunc_ClaimItems_ClaimedInstances = CallFunc_ClaimItems_ClaimedInstances;
	Parms.CallFunc_ClaimItems_UnclaimedItems = CallFunc_ClaimItems_UnclaimedItems;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPlayer_State = K2Node_DynamicCast_AsPlayer_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetPawn_ReturnValue = CallFunc_GetPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CodexTrackerComponent.BP_CodexTrackerComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CodexTrackerComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexTrackerComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CodexTrackerComponent.BP_CodexTrackerComponent_C.ExecuteUbergraph_BP_CodexTrackerComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CodexTrackerComponent_C::ExecuteUbergraph_BP_CodexTrackerComponent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CodexTrackerComponent_C", "ExecuteUbergraph_BP_CodexTrackerComponent");

	Params::UBP_CodexTrackerComponent_C_ExecuteUbergraph_BP_CodexTrackerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


