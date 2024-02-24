#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0xB1C - 0xAF8)
// BlueprintGeneratedClass NormalBullet.NormalBullet_C
class ANormalBullet_C : public ATTLBulletBase
{
public:
	uint8                                        Pad_7B0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB00(0x8)(Transient, DuplicateTransient)
	struct FLinearColor                          TailColor;                                         // 0xB08(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage_0;                                          // 0xB18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANormalBullet_C* GetDefaultObj();

	void UserConstructionScript(class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IgnoreCollisionByCharacterType_result, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UTTLLongRangeWeaponParameter* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IgnoreCollisionByCharacterType_result1, class UTTLDamageParameterComponent* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_IsValid_ReturnValue1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NormalBullet(int32 EntryPoint);
};

}


