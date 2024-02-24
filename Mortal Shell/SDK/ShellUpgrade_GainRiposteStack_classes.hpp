#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x88 - 0x48)
// BlueprintGeneratedClass ShellUpgrade_GainRiposteStack.ShellUpgrade_GainRiposteStack_C
class UShellUpgrade_GainRiposteStack_C : public UShellUpgradeBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class ERiposteTypes                     RiposteStackToAdd;                                 // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2760[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RiposteStackToAddID;                               // 0x54(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CurrentStackAmount;                                // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTexture2D*                            Icon;                                              // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        IconIndex;                                         // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bBuffOn;                                           // 0x6C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2778[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayGM_C*                         GameplayGM;                                        // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPC;                                        // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      LastRipostedEnemy;                                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShellUpgrade_GainRiposteStack_C* GetDefaultObj();

	void IncrementStack(int32 Local_OldStackValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5);
	void ApplyBuff();
	bool IsDmgTypeValid_(class UClass* DmgType, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_2, bool CallFunc_EqualEqual_ClassClass_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
	void AddInitialIcon();
	void OnSuccessfulRiposte_Unbind();
	void OnGettingDamagedWithDamageType(class UClass* DamageType);
	void OnGettingDamaged_Bind();
	void OnGettingDamaged_Unbind();
	void RemoveIcon();
	void OnAbilityGained();
	void OnAbilityLost();
	void OnPlayerDeath_Bind();
	void ShouldRemoveBuff_();
	void OnPlayerDeath();
	void OnPlayerDeath_Unbind();
	void UpdateStackNumber();
	void OnSuccessfulRiposte(enum class ERiposteTypes RiposteType, class ABaseCharacter_C* RipostedChar);
	void ExecuteUbergraph_ShellUpgrade_GainRiposteStack(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_AddStatusIcon_IconID, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UClass* K2Node_CustomEvent_DamageType, bool CallFunc_IsDmgTypeValid__ReturnValue, class UDamageNotifierComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ERiposteTypes K2Node_CustomEvent_RiposteType, class ABaseCharacter_C* K2Node_CustomEvent_RipostedChar, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


