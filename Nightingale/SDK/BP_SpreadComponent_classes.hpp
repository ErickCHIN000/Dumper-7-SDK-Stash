#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xF0 - 0xC0)
// BlueprintGeneratedClass BP_SpreadComponent.BP_SpreadComponent_C
class UBP_SpreadComponent_C : public USpreadComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            SpreadUpdated;                                     // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       LastSpread;                                        // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            HitDealt;                                          // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_SpreadComponent_C* GetDefaultObj();

	void ParseHitForDisplay(const struct FHitResult& HitResult, const struct FGameplayTagContainer& HitTags, const struct FGameplayTagContainer& HitMarkerTags, bool CallFunc_HasAnyTags_ReturnValue);
	void CheckSpread(float CallFunc_GetSpread_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, double K2Node_VariableSet_LastSpread_ImplicitCast);
	void ReceiveAuthorityGained();
	void ReceiveAuthorityLost();
	void ReceiveTick(float DeltaSeconds);
	void Client_SendHit(const struct FHitResult& HitResult, const struct FGameplayTagContainer& HitTags);
	void ExecuteUbergraph_BP_SpreadComponent(int32 EntryPoint, const struct FHitResult& K2Node_CustomEvent_HitResult, const struct FGameplayTagContainer& K2Node_CustomEvent_HitTags, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue);
	void HitDealt__DelegateSignature(const struct FHitResult& HitResult, const struct FGameplayTagContainer& HitTags);
	void SpreadUpdated__DelegateSignature(double NewSpread);
};

}


