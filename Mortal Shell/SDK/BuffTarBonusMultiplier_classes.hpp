#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x84 - 0x68)
// BlueprintGeneratedClass BuffTarBonusMultiplier.BuffTarBonusMultiplier_C
class UBuffTarBonusMultiplier_C : public UBuffObjectTimeBased_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        BonusPercent;                                      // 0x70(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_122[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconID;                                            // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffTarBonusMultiplier_C* GetDefaultObj();

	void RefreshStatusIcon(int32 IconID, float Duration, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AddStatusIcon(int32* IconID, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddStatusIcon_IconID);
	void OnBuffStart();
	void OnBuffEnd(bool bInterrupted);
	void Reinitialize();
	void ExecuteUbergraph_BuffTarBonusMultiplier(int32 EntryPoint, int32 CallFunc_AddStatusIcon_IconID, bool K2Node_Event_bInterrupted, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


