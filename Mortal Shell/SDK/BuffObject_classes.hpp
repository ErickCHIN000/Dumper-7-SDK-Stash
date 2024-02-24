#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13 (0x3B - 0x28)
// BlueprintGeneratedClass BuffObject.BuffObject_C
class UBuffObject_C : public UObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABaseCharacter_C*                      ActorToBuff;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         bAttachToLastChanceStatue;                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bBindToCutscene;                                   // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bBindToEquipmentMenu;                              // 0x3A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBuffObject_C* GetDefaultObj();

	void GetGameplayGM(class AGameplayGM_C** GameModeRef, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetActorToBuffAsBarbarous(class ABarbarous_C** AsBarbarous, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess);
	void GetActorToBuffAs0Base(class AZero_Base_C** As0_Base, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess);
	void GetGameplayPCFromActor(class AGameplayPC_C** Gameplay_PC, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1);
	void OnBuffStart();
	void OnBuffEnd(bool bInterrupted);
	void StartBuff();
	void EndBuff();
	void InterruptBuff();
	void OnAttachToDeathStatue(class ABP_DeathShell_C* DeathShell);
	void OnDetachFromDeathStatue();
	void OnCutsceneStart_Bind();
	void OnCutsceneStart_Set();
	void OnCutsceneEnd_Bind();
	void OnCutsceneEnd_Set();
	void OnEquipmentMenuPressed_Bind();
	void OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu);
	void ExecuteUbergraph_BuffObject(int32 EntryPoint, bool K2Node_CustomEvent_bInterrupted, class ABP_DeathShell_C* K2Node_CustomEvent_DeathShell, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_1, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_2, bool CallFunc_IsValid_ReturnValue_2);
};

}


