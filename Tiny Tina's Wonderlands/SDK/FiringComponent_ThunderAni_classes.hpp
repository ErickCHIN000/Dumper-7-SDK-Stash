#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x978 - 0x958)
// BlueprintGeneratedClass FiringComponent_ThunderAni.FiringComponent_ThunderAni_C
class UFiringComponent_ThunderAni_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x958(0x8)(Transient, DuplicateTransient)
	class UClass*                                Anima2ndStageProj;                                 // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Anima3rdStageProj;                                 // 0x968(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OverheatingProjectile;                             // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFiringComponent_ThunderAni_C* GetDefaultObj();

	TSubclassOf<class ULightProjectileData> GetShotLightProjectileData(int32 Temp_int_Variable, class AActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class UClass* K2Node_Select_Default);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_FiringComponent_ThunderAni(int32 EntryPoint);
};

}


