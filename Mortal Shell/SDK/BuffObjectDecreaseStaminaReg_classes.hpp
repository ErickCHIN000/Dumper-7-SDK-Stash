#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x80 - 0x68)
// BlueprintGeneratedClass BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C
class UBuffObjectDecreaseStaminaReg_C : public UBuffObjectTimeBased_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTexture2D*                            Icon;                                              // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        IconID;                                            // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StaminaRegPenalty;                                 // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBuffObjectDecreaseStaminaReg_C* GetDefaultObj();

	void UnpauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void RemoveStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AddStatusIcon(int32* IconID, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddStatusIcon_IconID);
	void OverrideStatusIcon(float Duration, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnBuffEnd(bool bInterrupted);
	void Reinitialize(float NewDuration);
	void OnBuffStart();
	void ModifyTargetStaminaReg(int32 Sign);
	void ExecuteUbergraph_BuffObjectDecreaseStaminaReg(int32 EntryPoint, bool K2Node_Event_bInterrupted, float K2Node_CustomEvent_NewDuration, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_AddStatusIcon_IconID, int32 K2Node_CustomEvent_Sign, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
};

}


