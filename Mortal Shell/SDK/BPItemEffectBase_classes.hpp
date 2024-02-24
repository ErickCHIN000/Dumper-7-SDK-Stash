#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x68 - 0x48)
// BlueprintGeneratedClass BPItemEffectBase.BPItemEffectBase_C
class UBPItemEffectBase_C : public UDHItemEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EItemEffectType                   Usage;                                             // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         GameplayPC;                                        // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ItemId;                                            // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBPItemEffectBase_C* GetDefaultObj();

	void OnAppliedBPMightFail(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked, bool* bSuccess);
	bool OnApplied(class FName ItemId, class AActor* PlayerCharacter, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_OnAppliedBPMightFail_bSuccess);
	void OnEndPlay_Set(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void OverrideSettings(float Duration);
	void OnCutsceneStart_Bind();
	void OnCutsceneStart_Set();
	void OnEndPlay_Bind();
	void OnCutsceneEnd_Bind();
	void OnCutsceneEnd_Set();
	void OnEquipmentMenuPressed_Bind();
	void OnAppliedBP(class ABarbarous_C* Barbarous, class AGameplayPC_C* GameplayPC, bool bFamiliarityUnlocked);
	void OnEquipmentMenuPressed_Set(bool Close, enum class Enum_EquipmentMenuType Menu);
	void OnPhotoModePressed_Bind();
	void OnPhotoModePressed_Set(bool bEnterred);
	void ExecuteUbergraph_BPItemEffectBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, float K2Node_CustomEvent_Duration, class ABarbarous_C* K2Node_CustomEvent_Barbarous, class AGameplayPC_C* K2Node_CustomEvent_GameplayPC, bool K2Node_CustomEvent_bFamiliarityUnlocked, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, bool K2Node_CustomEvent_bEnterred);
};

}


