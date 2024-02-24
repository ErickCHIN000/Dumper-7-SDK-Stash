#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x3F8 - 0x3EC)
// BlueprintGeneratedClass BalistazookaProjectile_Explosive_Ice.BalistazookaProjectile_Explosive_Ice_C
class ABalistazookaProjectile_Explosive_Ice_C : public ABalistazookaProjectile_Explosive_Fire_C
{
public:
	uint8                                        Pad_52C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABalistazookaProjectile_Explosive_Ice_C* GetDefaultObj();

	bool ShouldEnableEffect(class AEnemyCharacter_C* Enemy, bool CallFunc_IsEnemyAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5);
	void OnEnemyHit(class AEnemyCharacter_C* Enemy, const struct FVector& ImpactNormal);
	void ExecuteUbergraph_BalistazookaProjectile_Explosive_Ice(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class AEnemyCharacter_C* K2Node_Event_Enemy, const struct FVector& K2Node_Event_ImpactNormal, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, bool CallFunc_ShouldEnableEffect_ReturnValue);
};

}


