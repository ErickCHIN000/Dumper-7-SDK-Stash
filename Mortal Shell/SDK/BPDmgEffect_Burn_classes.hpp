#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x54 - 0x28)
// BlueprintGeneratedClass BPDmgEffect_Burn.BPDmgEffect_Burn_C
class UBPDmgEffect_Burn_C : public UBPDmgEffect_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DmgPerSec;                                         // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Source;                                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Target;                                            // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 Pawn;                                              // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DmgMultiplier;                                     // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPDmgEffect_Burn_C* GetDefaultObj();

	void ApplyBurn(class AActor* Source, class AActor* Target, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_DoesImplementInterface_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetBurningMaceDamageBonus_Bonus, class AController* CallFunc_GetController_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void OnApplyDmgToHitActor(float OriginalDmg, class AActor* Source, class AActor* Target);
	void ExecuteUbergraph_BPDmgEffect_Burn(int32 EntryPoint, float K2Node_Event_OriginalDmg, class AActor* K2Node_Event_Source, class AActor* K2Node_Event_Target);
};

}


