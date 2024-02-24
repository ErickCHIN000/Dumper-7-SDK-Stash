#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x3D0 - 0x370)
// WidgetBlueprintGeneratedClass WBP_CreatureNamePlate.WBP_CreatureNamePlate_C
class UWBP_CreatureNamePlate_C : public UNWXActorWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x370(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_sw_HealthBar_C*                   HPBar;                                             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       HPSwitcher;                                        // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_CreatureLevel_BG;                          // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_CreatureLevel;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Name;                                          // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_subtext;                                       // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          NameColor_QuestGiver;                              // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeroCreature;                                    // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1995[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Creature_NPC_C*                    CreatureNPC;                                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       DistanceToPlayer;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CreatureNamePlate_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void TryGetGenericNPCName(class FText* NPCName, class FName LNoneName, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class FText CallFunc_GetNPCNameText_NPCName);
	void BP_OnActorTypeUpdated(bool CallFunc_IsValid_ReturnValue, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess);
	enum class EUIActorType GetActorTypeFromOwningActor(class UClass* CallFunc_GetObjectClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_1, class UBP_DialogueComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue_2);
	void UpdateHPBarVisibility(enum class ESlateVisibility LVisibility, bool LIsHealthNearlyZero, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, enum class ESlateVisibility CallFunc_GetVisibilityByRules_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, int32 K2Node_Select_Default, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_IsTweening_IsTweening, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast);
	void InitializeName(bool K2Node_SwitchEnum_CmpSuccess);
	void InitializeHPBar(class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAttributeSet* CallFunc_GetAttributeSet_ReturnValue, class UNWXAttributeSet* K2Node_DynamicCast_AsNWXAttribute_Set, bool K2Node_DynamicCast_bSuccess);
	void UpdateSubtext(bool CallFunc_IsValid_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetLeaderName_LeaderName, bool CallFunc_GetLeaderName_ReturnValue, TScriptInterface<class IAICompanionInterface> K2Node_DynamicCast_AsAICompanion_Interface_1, bool K2Node_DynamicCast_bSuccess_1, enum class ERecruitmentFailureReason CallFunc_CanBeRecruited_OutFailureReason, bool CallFunc_CanBeRecruited_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_StrStr_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void UpdateSpyglassVisibility(const struct FGameplayTag& Temp_struct_Variable, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Refresh(class FText CallFunc_GetTruncatedName_OutName, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetDistanceToPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast, double K2Node_VariableSet_DistanceToPlayer_ImplicitCast);
	void InitializeGenericNPCInfo(class FText CallFunc_TryGetGenericNPCName_NPCName);
	void InitializeNarrativeNPCInfo(class FText LName, class FText CallFunc_TryGetGenericNPCName_NPCName, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetTruncatedName_OutName, class UBP_DialogueComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_GetTruncatedName_DistanceToPlayer_ImplicitCast);
	void InitializeCreatureInfo(class ABP_CreatureBase_C* L_CreatureRef, int32 CallFunc_GetCreatureRealmPower_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_BreakCreatureUIInfo_CreatureName, TSoftObjectPtr<class UTexture2D> CallFunc_BreakCreatureUIInfo_CreatureIcon, int32 CallFunc_BreakCreatureUIInfo_FerocityMin, int32 CallFunc_BreakCreatureUIInfo_FerocityMax, TArray<enum class EBiomeID>& CallFunc_BreakCreatureUIInfo_Biomes, bool CallFunc_BreakCreatureUIInfo_ShowNameplate, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess);
	void Initialize(bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetDistanceToPlayer_ReturnValue, double K2Node_VariableSet_DistanceToPlayer_ImplicitCast);
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_CreatureNamePlate(int32 EntryPoint, class APawn* K2Node_Event_NewPawn, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}


