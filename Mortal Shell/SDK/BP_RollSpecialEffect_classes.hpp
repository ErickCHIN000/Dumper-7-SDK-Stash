#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x228 - 0x220)
// BlueprintGeneratedClass BP_RollSpecialEffect.BP_RollSpecialEffect_C
class ABP_RollSpecialEffect_C : public AActor
{
public:
	class USceneComponent*                       Scene_Root;                                        // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RollSpecialEffect_C* GetDefaultObj();

	bool CheckIfShouldEnable(class AEnemyCharacter_C* Enemy, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_7);
};

}


