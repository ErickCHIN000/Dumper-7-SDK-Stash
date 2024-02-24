#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x440 - 0x420)
// BlueprintGeneratedClass GA_ProjectileFlight.GA_ProjectileFlight_C
class UGA_ProjectileFlight_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProjectileBase_C*                  OwningProjectile;                                  // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FlightGC;                                          // 0x430(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          FlightGCTag;                                       // 0x438(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ProjectileFlight_C* GetDefaultObj();

	void PostFlight(class ABP_ProjectileBase_C* Projectile);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ProjectileFlight(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasTag_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGameplayTagValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


