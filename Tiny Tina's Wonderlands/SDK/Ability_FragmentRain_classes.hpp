#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x1E0 - 0x110)
// BlueprintGeneratedClass Ability_FragmentRain.Ability_FragmentRain_C
class UAbility_FragmentRain_C : public UOakAbility
{
public:
	struct FEnvQueryParams                       SearchEQS;                                         // 0x110(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                        HomingTargetList;                                  // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FTimerHandle                          CleanTargetListHandle;                             // 0x1D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_FragmentRain_C* GetDefaultObj();

	void FragmentRain_GetTargetExternal(class AActor** FragmentRainTarget, bool* Res, class AActor* CallFunc_FragmentRain_GetTarget_FragmentRainTarget, bool CallFunc_FragmentRain_GetTarget_Res);
	void FragmentRain_CleanTargetList();
	void FragmentRain_GetTarget(class AActor** FragmentRainTarget, bool* Res, class AActor* LocalTarget, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FragmentRain_GetTarget_FragmentRainTarget, bool CallFunc_FragmentRain_GetTarget_Res, class AActor* CallFunc_Array_Get_Item, bool CallFunc_FragmentRain_GenerateTargetList_Res, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void FragmentRain_GenerateTargetList(bool* Res, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& CallFunc_RunEnvQueryForAllActors_ResultActors, bool CallFunc_RunEnvQueryForAllActors_ReturnValue);
};

}


