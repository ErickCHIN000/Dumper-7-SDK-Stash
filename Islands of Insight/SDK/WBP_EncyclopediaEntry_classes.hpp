#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass WBP_EncyclopediaEntry.WBP_EncyclopediaEntry_C
class UWBP_EncyclopediaEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Grow;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScaleBox*                             EntryIconContainer;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GridRuleImage;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GridRuleName;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SecretCompleteMark;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SecretIcon_C*                     SecretIcon;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             SecretIconContainer;                               // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UnseenEntry;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SophiaButton_C*                   WBP_SophiaButton_44;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEncyclopediaEntry*                    EncyclopediaEntry;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_EncyclopediaEntry_C* GetDefaultObj();

	void SetImage(class UEncyclopediaEntry* Entry, bool Temp_bool_Variable, class ULore* K2Node_DynamicCast_AsLore, bool K2Node_DynamicCast_bSuccess, class USecretClue* K2Node_DynamicCast_AsSecret_Clue, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FSlateBrush& CallFunc_GetLoreImage_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess_2, class ASophiaGameState* K2Node_DynamicCast_AsSophia_Game_State, bool K2Node_DynamicCast_bSuccess_3, class ASecretSignifier* CallFunc_GetSecretForEntryId_ReturnValue, bool CallFunc_IsSecretUnlocked_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetEntry(class UEncyclopediaEntry* NewParam);
	void BndEvt__WBP_EncyclopediaEntry_WBP_SophiaButton_44_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_EncyclopediaEntry(int32 EntryPoint, class UWBP_EncyclopediaLoreModalWindow_C* CallFunc_Create_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, class UEncyclopediaEntry* K2Node_CustomEvent_NewParam, class ULore* K2Node_DynamicCast_AsLore, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UWBP_EncyclopediaModalWindow_C* CallFunc_Create_ReturnValue_1);
};

}


